#include "GestionEmploye.h"

namespace Services {
	GestionEmploye::GestionEmploye(void) {
		this->initGestion();
		this->_employe = gcnew Composants::MapEmploye();
	}

	GestionEmploye::GestionEmploye(String^ nom, String^ prenom) {
		this->initGestion();
		this->_employe = gcnew Composants::MapEmploye(nom, prenom);
	}

	GestionEmploye::GestionEmploye(String^ nom, String^ prenom, String^ nomSupperieur, String^ prenomSupperieur, DateTime^ dateEmbauche, Adresse^ adresseDomicile) {
		this->initGestion();
		this->_employe = gcnew Composants::MapEmploye(nom, prenom, nomSupperieur, prenomSupperieur, dateEmbauche, adresseDomicile);
	}

	DataSet^ GestionEmploye::liste(int choix) {
		this->_ds = gcnew DataSet();
		this->_ds = this->_cad->getRows(this->_employe->SELECT(choix), "employe");
		return this->_ds;
	}

	void GestionEmploye::ajouter(void) {
		if (this->_cad->actionRowsID("SELECT * FROM employe WHERE employe.nom = '" + this->_employe->get_nom() + "' AND employe.prenom = '" + this->_employe->get_prenom() + "'") != 0) {
			throw gcnew String("Cet employé existe deja !");
		}
		this->_cad->actionRows(this->_employe->INSERT(0));
		if (this->_cad->actionRowsID("SELECT * FROM employe WHERE employe.nom = '" + this->_employe->get_nom() + "' AND employe.prenom = '" + this->_employe->get_prenom() + "'") != 0) {
			throw gcnew bool(1);
		} else {
			throw gcnew bool(0);
		}
	}

	void GestionEmploye::supprimer(void) {
		if (this->_cad->actionRowsID("SELECT * FROM employe WHERE employe.nom = '" + this->_employe->get_nom() + "' AND employe.prenom = '" + this->_employe->get_prenom() + "'") == 0) {
			throw gcnew String("Cet employé n\'existe pas !");
		}
		this->_cad->actionRows(this->_employe->DELETE());
		if (this->_cad->actionRowsID("SELECT * FROM employe WHERE employe.nom = '" + this->_employe->get_nom() + "' AND employe.prenom = '" + this->_employe->get_prenom() + "'") == 0) {
			throw gcnew bool(1);
		} else {
			throw gcnew bool(0);
		}
	}

	void GestionEmploye::modifier(String^ id) {
		this->_cad->actionRows(this->_employe->UPDATE(id));
	}
}