#include "GestionClient.h"

namespace Services {
	GestionClient::GestionClient(void) {
		this->initGestion();
		this->_client = gcnew Composants::MapClient();
	}

	GestionClient::GestionClient(String^ nom, String^ prenom) {
		this->initGestion();
		this->_client = gcnew Composants::MapClient(nom, prenom);
	}

	GestionClient::GestionClient(String^ nom, String^ prenom, DateTime^ dateNaissance, Adresse^ adresse) {
		this->initGestion();
		this->_client = gcnew Composants::MapClient(nom, prenom, dateNaissance, adresse);
	}

	DataSet^ GestionClient::liste(int choix) {
		this->_ds = gcnew DataSet();
		this->_ds = this->_cad->getRows(this->_client->SELECT(choix), "client");
		return this->_ds;
	}

	void GestionClient::ajouter(void) {
		if (this->_cad->actionRowsID("SELECT * FROM client WHERE client.nom = '" + this->_client->get_nom() + "' AND client.prenom = '" + this->_client->get_prenom() + "'") != 0) {
			this->_cad->actionRows(this->_client->INSERT(1));
			throw gcnew bool(1);
		}
		this->_cad->actionRows(this->_client->INSERT(0));
		if (this->_cad->actionRowsID("SELECT * FROM client WHERE client.nom = '" + this->_client->get_nom() + "' AND client.prenom = '" + this->_client->get_prenom() + "'") != 0) {
			throw gcnew bool(1);
		}
		else {
			throw gcnew bool(0);
		}
	}

	void GestionClient::supprimer(void) {
		if (this->_cad->actionRowsID("SELECT * FROM client WHERE client.nom = '" + this->_client->get_nom() + "' AND client.prenom = '" + this->_client->get_prenom() + "'") == 0) {
			throw gcnew String("Ce client n\'existe pas !");
		}
		this->_cad->actionRows(this->_client->DELETE());
		if (this->_cad->actionRowsID("SELECT * FROM client WHERE client.nom = '" + this->_client->get_nom() + "' AND client.prenom = '" + this->_client->get_prenom() + "'") == 0) {
			throw gcnew bool(1);
		}
		else {
			throw gcnew bool(0);
		}
	}

	void GestionClient::modifier(String^ id) {
		this->_cad->actionRows(this->_client->UPDATE(id));
	}
}