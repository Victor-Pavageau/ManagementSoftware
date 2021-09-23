#include "MapClient.h"

namespace Composants {
	MapClient::MapClient(void) {
		this->_ID = -1;
		this->_nom = "";
		this->_prenom = "";
		this->_dateNaissance = nullptr;
	}

	MapClient::MapClient(String^ nom, String^ prenom) {
		this->set_nom(nom);
		this->set_prenom(prenom);
	}

	MapClient::MapClient(String^ nom, String^ prenom, DateTime^ dateNaissance, Adresse^ adresse) {
		this->set_nom(nom);
		this->set_prenom(prenom);
		this->set_dateNaissance(dateNaissance);
		this->set_adresse(adresse);
	}

	String^ MapClient::SELECT(int choix) {
		switch (choix) {
		case 0:
			return "SELECT client.ID, CONCAT(client.nom, ' ', client.prenom) AS client, date.date AS naissance FROM client LEFT JOIN daterClient ON client.ID = daterClient.ID_client LEFT JOIN date ON daterClient.ID_date = date.ID WHERE client.ID != 1 AND naissance = 1";
			break;
		case 1:
			return "SELECT client.ID, CONCAT(client.nom, ' ', client.prenom) AS client, date.date AS naissance FROM client LEFT JOIN daterClient ON client.ID = daterClient.ID_client LEFT JOIN date ON daterClient.ID_date = date.ID WHERE client.nom = '" + this->get_nom() + "' AND client.prenom = '" + this->get_prenom() + "'AND client.ID != 1 AND naissance = 1";
			break;
		case 2:
			return "SELECT adresse.ID, CONCAT(adresse.numeroDeVoie, ' ', adresse.complementDeNumero) AS numero, CONCAT(adresse.typeDeVoie, ' ', adresse.nomDeVoie) AS voie, CONCAT(adresse.codePostal, ' ', adresse.nomDeCommune) AS ville FROM client LEFT JOIN localiserClient ON client.ID = localiserClient.ID_client LEFT JOIN adresse ON localiserClient.ID_adresse = adresse.ID WHERE client.nom = '" + this->get_nom() + "' AND client.prenom = '" + this->get_prenom() + "' AND client.ID != 1";
			break;
		default:
			throw gcnew String("Erreur fatale");
			break;
		}
		
	}

	String^ MapClient::INSERT(int choix) {
		switch (choix) {
		case 0:
			return "BEGIN TRANSACTION; DECLARE @idClient INT; DECLARE @idDate INT; DECLARE @idAdresse INT;" +
				"INSERT INTO date (date.date) VALUES('" + this->get_dateNaissance() + "');" +
				"SET @idDate = (SELECT TOP(1) ID FROM date ORDER BY ID DESC);" +
				"INSERT INTO adresse (adresse.numeroDeVoie, adresse.complementDeNumero, adresse.typeDeVoie, adresse.nomDeVoie, adresse.codePostal, adresse.nomDeCommune) VALUES('" + this->get_adresse()->get_numeroDeVoie() + "', '" + this->get_adresse()->get_complementDeNumero() + "', '" + this->get_adresse()->get_typeDeVoie() + "', '" + this->get_adresse()->get_nomDeVoie() + "', '" + this->get_adresse()->get_codePostal() + "', '" + this->get_adresse()->get_nomDeCommune() + "');" +
				"SET @idAdresse = (SELECT TOP(1) ID FROM adresse ORDER BY ID DESC);" +
				"INSERT INTO client (client.nom, client.prenom) VALUES('" + this->get_nom() + "', '" + this->get_prenom() + "');" +
				"SET @idClient = (SELECT TOP(1) ID FROM client ORDER BY ID DESC);" +
				"INSERT INTO daterClient (daterClient.ID_client, daterClient.ID_date, daterClient.naissance) VALUES(@idClient, @idDate, 1);" +
				"INSERT INTO localiserClient (localiserClient.ID_client, localiserClient.ID_adresse) VALUES(@idClient, @idAdresse);" +
				"COMMIT";
			break;
		case 1:
			return "BEGIN TRANSACTION; DECLARE @idAdresse INT;" +
				"IF CONCAT('" + this->get_adresse()->get_numeroDeVoie() + "', '" + this->get_adresse()->get_codePostal() + "', '" + this->get_adresse()->get_typeDeVoie() + "', '" + this->get_adresse()->get_nomDeVoie() + "', '" + this->get_adresse()->get_codePostal() + "', '" + this->get_adresse()->get_nomDeCommune() + "') NOT IN (SELECT CONCAT(numeroDeVoie, complementDeNumero, typeDeVoie, nomDeVoie, codePostal, nomDeCommune) FROM adresse WHERE ID = (SELECT ID_adresse FROM localiserClient WHERE ID_client = (SELECT ID FROM client WHERE nom = '" + this->get_nom() + "' AND prenom = '" + this->get_prenom() + "'))) BEGIN"
				"	INSERT INTO adresse (adresse.numeroDeVoie, adresse.complementDeNumero, adresse.typeDeVoie, adresse.nomDeVoie, adresse.codePostal, adresse.nomDeCommune) VALUES('" + this->get_adresse()->get_numeroDeVoie() + "', '" + this->get_adresse()->get_complementDeNumero() + "', '" + this->get_adresse()->get_typeDeVoie() + "', '" + this->get_adresse()->get_nomDeVoie() + "', '" + this->get_adresse()->get_codePostal() + "', '" + this->get_adresse()->get_nomDeCommune() + "');" +
				"	SET @idAdresse = (SELECT TOP(1) ID FROM adresse ORDER BY ID DESC);" +
				"	INSERT INTO localiserClient (localiserClient.ID_client, localiserClient.ID_adresse) VALUES((SELECT ID FROM client WHERE nom = '" + this->get_nom() + "' AND prenom = '" + this->get_prenom() + "'), @idAdresse);\nEND\n" +
				"COMMIT";
			break;
		default:
			throw gcnew String("Erreur fatale");
			break;
		}
	}

	String^ MapClient::DELETE(void) {
		return	"BEGIN TRANSACTION; DECLARE @idClient INT;" +
			"SET @idClient = (SELECT ID FROM client WHERE nom = '" + this->get_nom() + "' AND prenom = '" + this->get_prenom() + "');" +
			"UPDATE commande SET ID_client = 1 WHERE ID_client = @idClient;"
			"DELETE FROM localiserClient WHERE ID_client = @idClient;" +
			"DELETE FROM daterClient WHERE ID_client = @idClient;" +
			"DELETE FROM client WHERE ID = @idClient;" +
			"DELETE FROM date WHERE ID NOT IN (SELECT ID_date FROM daterClient) AND ID NOT IN (SELECT ID_date FROM daterCommande) AND ID NOT IN (SELECT ID_date FROM employe);" +
			"DELETE FROM adresse WHERE ID NOT IN (SELECT ID_adresse FROM localiserClient) AND ID NOT IN (SELECT ID_adresse FROM localiserCommande) AND ID NOT IN (SELECT ID_adresse FROM employe);" +
			"COMMIT";
	}

	String^ MapClient::UPDATE(String^ id) {
		return "BEGIN TRANSACTION;" +
			"UPDATE date SET date = '" + this->get_dateNaissance() + "' WHERE ID = (SELECT ID_date FROM daterClient WHERE ID_client = '" + id + "' AND naissance = 1)" +
			"UPDATE client SET nom = '" + this->get_nom() + "', prenom = '" + this->get_prenom() + "' WHERE ID = '" + id + "';" +
			"COMMIT";
	}

	void MapClient::set_ID(int ID) {
		if (ID > 0) {
			this->_ID = ID;
		}
		else {
			throw gcnew String("Un ID ne peut pas être négatif !");
		}
	}

	void MapClient::set_nom(String^ nom) {
		if (nom != "") {
			this->_nom = nom;
		}
		else {
			throw gcnew String("Le nom de du client doit être spécifié !");
		}
	}

	void MapClient::set_prenom(String^ prenom) {
		if (prenom != "") {
			this->_prenom = prenom;
		}
		else {
			throw gcnew String("Le prénom de du client doit être spécifié !");
		}
	}

	void MapClient::set_dateNaissance(DateTime^ dateNaissance) {
		this->_dateNaissance = dateNaissance;
	}

	void MapClient::set_adresse(Adresse^ adresse) {
		this->_adresse = adresse;
	}

	int MapClient::get_ID(void) {
		return this->_ID;
	}

	String^ MapClient::get_nom(void) {
		return this->_nom;
	}

	String^ MapClient::get_prenom(void) {
		return this->_prenom;
	}

	DateTime^ MapClient::get_dateNaissance(void) {
		return this->_dateNaissance;
	}

	Adresse^ MapClient::get_adresse(void) {
		return this->_adresse;
	}
}