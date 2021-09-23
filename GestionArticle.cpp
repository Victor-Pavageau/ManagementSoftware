#include "GestionArticle.h"

namespace Services {
	GestionArticle::GestionArticle(void) {
		this->initGestion();
		this->_article = gcnew Composants::MapArticle();
	}

	GestionArticle::GestionArticle(String^ reference) {
		this->initGestion();
		this->_article = gcnew Composants::MapArticle(reference);
	}

	GestionArticle::GestionArticle(String^ reference, String^ designation, String^ stock, String^ seuilDeReapprovisionnement, String^ prixHT, String^ tauxDeTVA) {
		this->initGestion();
		this->_article = gcnew Composants::MapArticle(reference, designation, stock, seuilDeReapprovisionnement, prixHT, tauxDeTVA);
	}

	DataSet^ GestionArticle::liste(int choix) {
		this->_ds = gcnew DataSet();
		this->_ds = this->_cad->getRows(this->_article->SELECT(choix), "Article");
		return this->_ds;
	}

	void GestionArticle::ajouter(void) {
		if (this->_cad->actionRowsID("SELECT * FROM Article WHERE Article.reference = '" + this->_article->get_reference() + "' AND Article.designation = '" + this->_article->get_designation() + "'") != 0) {
			throw gcnew String("Cet article existe deja !");
		}
		this->_cad->actionRows(this->_article->INSERT(0));
		if (this->_cad->actionRowsID("SELECT * FROM Article WHERE Article.reference = '" + this->_article->get_reference() + "' AND Article.designation = '" + this->_article->get_designation() + "'") != 0) {
			throw gcnew bool(1);
		}
		else {
			throw gcnew bool(0);
		}
	}

	void GestionArticle::supprimer(void) {
		if (this->_cad->actionRowsID("SELECT * FROM Article WHERE Article.reference = '" + this->_article->get_reference() + "'") == 0) {
			throw gcnew String("Cet article n\'existe pas !");
		}
		this->_cad->actionRows(this->_article->DELETE());
		if (this->_cad->actionRowsID("SELECT * FROM Article WHERE Article.reference = '" + this->_article->get_reference() + "'") == 0) {
			throw gcnew bool(1);
		}
		else {
			throw gcnew bool(0);
		}
	}

	void GestionArticle::modifier(String^ id) {
		this->_cad->actionRows(this->_article->UPDATE(id));
	}
}
