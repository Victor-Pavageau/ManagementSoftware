#include "MapEmploye.h"

namespace Composants {
	MapEmploye::MapEmploye(void) {
		this->_ID = -1;
		this->_nom = "";
		this->_prenom = "";
		this->_nomSuperieur = "";
		this->_prenomSuperieur = "";
		this->_dateEmbauche = gcnew DateTime();
		this->_adresseDomicile = gcnew Adresse();
	}

	MapEmploye::MapEmploye(String^ nom, String^ prenom) {
		this->set_nom(nom);
		this->set_prenom(prenom);
	}

	MapEmploye::MapEmploye(String^ nom, String^ prenom, String^ nomSuperieur, String^ prenomSuperieur, DateTime^ dateEmbauche, Adresse^ adresseDomicile) {
		this->set_nom(nom);
		this->set_prenom(prenom);
		this->set_nomSuperieur(nomSuperieur);
		this->set_prenomSuperieur(prenomSuperieur);
		this->set_dateEmbauche(dateEmbauche);
		this->set_adresseDomicile(adresseDomicile);
	}

	String^ MapEmploye::SELECT(int choix) {
		return	"SELECT " +
			"employe.ID, CONCAT(employe.nom, ' ', employe.prenom) AS employe, CONCAT(superieur.nom, ' ', superieur.prenom) AS superieur, date.date AS embauche, CONCAT(adresse.numeroDeVoie, ' ', adresse.complementDeNumero) AS numero, CONCAT(adresse.typeDeVoie, ' ', adresse.nomDeVoie) AS voie, CONCAT(adresse.codePostal, ' ', adresse.nomDeCommune) AS ville " +
			"FROM employe LEFT JOIN employe AS superieur ON employe.ID_employe = superieur.ID " +
			"LEFT JOIN adresse ON employe.ID_adresse = adresse.ID " +
			"LEFT JOIN date ON employe.ID_date = date.ID";
	}

	String^ MapEmploye::INSERT(int choix) {
		return	"BEGIN TRANSACTION; DECLARE @idSuperieur INT; DECLARE @idDate INT; DECLARE @idAdresse INT;" +
			"SET @idSuperieur = (SELECT employe.ID FROM employe WHERE employe.nom = '" + this->get_nomSuperieur() + "' AND employe.prenom = '" + this->get_prenomSuperieur() + "');" +
			"IF '" + this->get_dateEmbauche() + "' NOT IN (SELECT date.date FROM date) BEGIN" +
			"	INSERT INTO date (date.date) VALUES('" + this->get_dateEmbauche() + "');\nEND\n" +
			"SET @idDate = (SELECT date.ID FROM date WHERE date.date = '" + this->get_dateEmbauche() + "');" +
			"IF CONCAT('" + this->get_adresseDomicile()->get_numeroDeVoie() + "', '" + this->get_adresseDomicile()->get_complementDeNumero() + "', '" + this->get_adresseDomicile()->get_typeDeVoie() + "', '" + this->get_adresseDomicile()->get_nomDeVoie() + "', '" + this->get_adresseDomicile()->get_codePostal() + "', '" + this->get_adresseDomicile()->get_nomDeCommune() + "') NOT IN (SELECT CONCAT(adresse.numeroDeVoie, adresse.complementDeNumero, adresse.typeDeVoie, adresse.nomDeVoie, adresse.codePostal, adresse.nomDeCommune) FROM adresse) BEGIN" +
			"	INSERT INTO adresse (adresse.numeroDeVoie, adresse.complementDeNumero, adresse.typeDeVoie, adresse.nomDeVoie, adresse.codePostal, adresse.nomDeCommune) VALUES('" + this->get_adresseDomicile()->get_numeroDeVoie() + "', '" + this->get_adresseDomicile()->get_complementDeNumero() + "', '" + this->get_adresseDomicile()->get_typeDeVoie() + "', '" + this->get_adresseDomicile()->get_nomDeVoie() + "', '" + this->get_adresseDomicile()->get_codePostal() + "', '" + this->get_adresseDomicile()->get_nomDeCommune() + "');\nEND\n" +
			"SET @idAdresse = (SELECT adresse.ID FROM adresse WHERE adresse.numeroDeVoie = '" + this->get_adresseDomicile()->get_numeroDeVoie() + "' AND adresse.complementDeNumero = '" + this->get_adresseDomicile()->get_complementDeNumero() + "' AND adresse.typeDeVoie = '" + this->get_adresseDomicile()->get_typeDeVoie() + "' AND adresse.nomDeVoie = '" + this->get_adresseDomicile()->get_nomDeVoie() + "' and adresse.codePostal = '" + this->get_adresseDomicile()->get_codePostal() + "' AND adresse.nomDeCommune = '" + this->get_adresseDomicile()->get_nomDeCommune() + "');" +
			"IF CONCAT('" + this->get_nom() + "', '" + this->get_prenom() + "') NOT IN (SELECT CONCAT(employe.nom, employe.prenom) FROM employe) BEGIN" +
			"	INSERT INTO employe (employe.nom, employe.prenom, employe.ID_employe, employe.ID_adresse, employe.ID_date) VALUES('" + this->get_nom() + "', '" + this->get_prenom() + "', @idSuperieur, @idAdresse, @idDate);\nEND\n" +
			"COMMIT";
	}

	String^ MapEmploye::DELETE(void) {
		return	"BEGIN TRANSACTION; DECLARE @idEmploye INT;" +
			"SET @idEmploye = (SELECT ID FROM employe WHERE nom = '" + this->get_nom() + "' AND prenom = '" + this->get_prenom() + "');" +
			"DELETE FROM employe WHERE ID = @idEmploye;" +
			"DELETE FROM date WHERE ID NOT IN (SELECT ID_date FROM daterClient) AND ID NOT IN (SELECT ID_date FROM daterCommande) AND ID NOT IN (SELECT ID_date FROM employe);" +
			"DELETE FROM adresse WHERE ID NOT IN (SELECT ID_adresse FROM localiserClient) AND ID NOT IN (SELECT ID_adresse FROM localiserCommande) AND ID NOT IN (SELECT ID_adresse FROM employe);" +
			"COMMIT";
	}

	String^ MapEmploye::UPDATE(String^ employe) {
		return "BEGIN TRANSACTION;" + 
			"UPDATE employe SET nom = '" + this->get_nom() + "', prenom = '" + this->get_prenom() + "' WHERE ID = '" + employe + "';" + 
			"UPDATE adresse SET numeroDeVoie = '" + this->get_adresseDomicile()->get_numeroDeVoie() + "', complementDeNumero = '" + this->get_adresseDomicile()->get_complementDeNumero() + "', typeDeVoie = '" + this->get_adresseDomicile()->get_typeDeVoie() + "', nomDeVoie = '" + this->get_adresseDomicile()->get_nomDeVoie() + "', codePostal = '" + this->get_adresseDomicile()->get_codePostal() + "', nomDeCommune = '" + this->get_adresseDomicile()->get_nomDeCommune() + "' WHERE ID = (SELECT ID_adresse FROM employe WHERE ID = '" + employe + "');" +
			"COMMIT";
	}

	void MapEmploye::set_ID(int ID) {
		if (ID > 0) {
			this->_ID = ID;
		}
		else {
			throw gcnew String("Un ID ne peut pas être négatif !");
		}
	}

	void MapEmploye::set_nom(String^ nom) {
		if (nom != "") {
			this->_nom = nom;
		}
		else {
			throw gcnew String("Le nom de l'employé doit être spécifié !");
		}
	}

	void MapEmploye::set_prenom(String^ prenom) {
		if (prenom != "") {
			this->_prenom = prenom;
		}
		else {
			throw gcnew String("Le prénom de l'employé doit être spécifié !");
		}
	}

	void MapEmploye::set_nomSuperieur(String^ nomSuperieur) {
		if (nomSuperieur != "") {
			this->_nomSuperieur = nomSuperieur;
		}
		else {
			throw gcnew String("Le nom du superieur doit être spécifié !");
		}
	}

	void MapEmploye::set_prenomSuperieur(String^ prenomSuperieur) {
		if (prenomSuperieur != "") {
			this->_prenomSuperieur = prenomSuperieur;
		}
		else {
			throw gcnew String("Le prénom du supérieur doit être spécifié !");
		}
	}

	void MapEmploye::set_dateEmbauche(DateTime^ dateEmbauche) {
		this->_dateEmbauche = dateEmbauche;
	}

	void MapEmploye::set_adresseDomicile(Adresse^ adresseDomicile) {
		this->_adresseDomicile = adresseDomicile;
	}

	int MapEmploye::get_ID(void) {
		return this->_ID;
	}

	String^ MapEmploye::get_nom(void) {
		return this->_nom;
	}

	String^ MapEmploye::get_prenom(void) {
		return this->_prenom;
	}

	String^ MapEmploye::get_nomSuperieur(void) {
		return this->_nomSuperieur;
	}

	String^ MapEmploye::get_prenomSuperieur(void) {
		return this->_prenomSuperieur;
	}

	DateTime^ MapEmploye::get_dateEmbauche(void) {
		return this->_dateEmbauche;
	}

	Adresse^ MapEmploye::get_adresseDomicile(void) {
		return this->_adresseDomicile;
	}
}