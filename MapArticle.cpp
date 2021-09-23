#include "MapArticle.h"

namespace Composants {
	MapArticle::MapArticle(void) {
		this->_ID = -1;
		this->_reference = "";
		this->_designation = "";
		this->_stock = "";
		this->_seuilDeReapprovisionnement = "";
		this->_prixHT = "";
		this->_tauxDeTVA = "";
	}

	MapArticle::MapArticle(String^ reference) {
		this->_ID = -1;
		this->set_reference(reference);
	}

	MapArticle::MapArticle(String^ reference, String^ designation, String^ stock, String^ seuilDeReapprovisionnement, String^ prixHT, String^ tauxDeTVA) {
		this->set_reference(reference);
		this->set_designation(designation);
		this->set_stock(stock);
		this->set_seuilDeReapprovisionnement(seuilDeReapprovisionnement);
		this->set_prixHT(prixHT);
		this->set_tauxDeTVA(tauxDeTVA);
	}

	String^ MapArticle::SELECT(int choix) {
		return "SELECT reference, designation, stock, seuilDeReapprovisionnement AS seuil, CONCAT(prixHT, ' €') AS prixUHT, CONCAT(tauxDeTVA, ' %') AS TVA FROM article";
	}

	String^ MapArticle::INSERT(int choix) {
		return "BEGIN TRANSACTION;" + 
			"IF '" + this->get_reference() + "' NOT IN (SELECT article.reference FROM article) BEGIN" +
			"	INSERT INTO article (reference, designation, stock, seuilDeReapprovisionnement, prixHT, tauxDeTVA) VALUES ('" + this->get_reference() + "', '" + this->get_designation() + "', '" + this->get_stock() + "', '" + this->get_seuilDeReapprovisionnement() + "', '" + this->get_prixHT() + "', '" + this->get_tauxDeTVA() + "');\nEND\n" + 
			"COMMIT";
	}

	String^ MapArticle::DELETE(void) {
		return "BEGIN TRANSACTION;" + 
			"DELETE FROM article WHERE article.reference = '" + this->get_reference() + "';" +
			"DELETE FROM date WHERE ID NOT IN (SELECT ID_date FROM daterClient) AND ID NOT IN (SELECT ID_date FROM daterCommande) AND ID NOT IN (SELECT ID_date FROM employe);" +
			"DELETE FROM adresse WHERE ID NOT IN (SELECT ID_adresse FROM localiserClient) AND ID NOT IN (SELECT ID_adresse FROM localiserCommande) AND ID NOT IN (SELECT ID_adresse FROM employe);" +
			"COMMIT";
	}

	String^ MapArticle::UPDATE(String^ article) {
		return "BEGIN TRANSACTION;" + 
			"UPDATE article SET reference = '" + this->get_reference() + "', designation = '" + this->get_designation() + "', seuilDeReapprovisionnement = '" + this->get_seuilDeReapprovisionnement() + "', stock = '" + this->get_stock() + "', prixHT = '" + this->get_prixHT() + "', tauxDeTVA = '" + this->get_tauxDeTVA() + "';" + 
			"COMMIT";
	}

	void MapArticle::set_ID(int ID) {
		if (ID > 0) {
			this->_ID = ID;
		}
		else {
			throw gcnew String("Un ID ne peut pas être négatif !");
		}
	}

	void MapArticle::set_reference(String^ reference) {
		if (reference != "") {
			this->_reference = reference;
		}
		else {
			throw gcnew String("La reference doit être spécifiée !");
		}
	}

	void MapArticle::set_designation(String^ designation) {
		if (designation != "") {
			this->_designation = designation;
		}
		else {
			throw gcnew String("La designation doit être spécifiée !");
		}
	}

	void MapArticle::set_stock(String^ stock) {
		if (stock == "") {
			throw gcnew String("Le stock doit être defini !");
		}
		try {
			if (Convert::ToInt32(stock) >= 0) {
				this->_stock = stock;
			}
			else {
				throw gcnew String("La stock ne peut pas être négatif !");
			}
		}
		catch (FormatException^) {
			throw gcnew String("Le stock doit être numérique !");
		}
	}

	void MapArticle::set_seuilDeReapprovisionnement(String^ seuilDeReapprovisionnement) {
		if (seuilDeReapprovisionnement == "") {
			throw gcnew String("Le seuil de reapprovisionnement doit être defini !");
		}
		try {
			if (Convert::ToInt32(seuilDeReapprovisionnement) >= 0) {
				this->_seuilDeReapprovisionnement = seuilDeReapprovisionnement;
			}
			else {
				throw gcnew String("La seuil de reapprovisionnement ne peut pas être négatif !");
			}
		}
		catch (FormatException^) {
			throw gcnew String("Le seuil de reapprovisionnement doit être numérique !");
		}
	}

	void MapArticle::set_prixHT(String^ prixHT) {
		if (prixHT == "") {
			throw gcnew String("Le prix hors taxe doit être defini !");
		}
		try {
			if (Convert::ToDouble(prixHT) >= 0) {
				this->_prixHT = prixHT;
			}
			else {
				throw gcnew String("La prix hors taxe ne peut pas être négatif !");
			}
		}
		catch (FormatException^) {
			throw gcnew String("Le prix hors taxe doit être un réel !");
		}
	}

	void MapArticle::set_tauxDeTVA(String^ tauxDeTVA) {
		if (tauxDeTVA == "") {
			throw gcnew String("Le taux de TVA doit être defini !");
		}
		try {
			if (Convert::ToDouble(tauxDeTVA) >= 0 && Convert::ToDouble(tauxDeTVA) <= 100) {
				this->_tauxDeTVA = tauxDeTVA;
			}
			else {
				throw gcnew String("La taux de TVA doit être compris entre 0 et 100 !");
			}
		}
		catch (FormatException^) {
			throw gcnew String("Le taux de TVA doit être un réel !");
		}
	}

	int^ MapArticle::get_ID(void) {
		return this->_ID;
	}

	String^ MapArticle::get_reference(void) {
		return this->_reference;
	}

	String^ MapArticle::get_designation(void) {
		return this->_designation;
	}

	String^ MapArticle::get_stock(void) {
		return this->_stock;
	}


	String^ MapArticle::get_seuilDeReapprovisionnement(void) {
		return this->_seuilDeReapprovisionnement;
	}

	String^ MapArticle::get_prixHT(void) {
		return this->_prixHT;
	}

	String^ MapArticle::get_tauxDeTVA(void) {
		return this->_tauxDeTVA;
	}
}