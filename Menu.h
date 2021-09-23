#pragma once
#include "Gestion.h"
#include "GestionArticle.h"
#include "GestionClient.h"
#include "GestionCommande.h"
#include "GestionEmploye.h"

namespace logicielDeGestion {

	DataSet^ simulation(double TVA, double margeCommerciale, double remiseCommerciale, double demarqueInconnue, Services::Gestion^ gestion) {
		gestion = gcnew Services::GestionArticle();
		return gestion->simulation(TVA, margeCommerciale, remiseCommerciale, demarqueInconnue);
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Menu : public System::Windows::Forms::Form {
	public:
		Menu(void) {
			InitializeComponent();
		}
	protected:
		~Menu() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonEmploye;
	private: System::Windows::Forms::Button^ buttonClient;
	private: System::Windows::Forms::Button^ buttonCommande;
	private: System::Windows::Forms::Button^ buttonStock;
	private: System::Windows::Forms::Button^ buttonStatistiques;
	private: System::Windows::Forms::Button^ buttonSimulation;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelEmploye;
	private: System::Windows::Forms::Label^ labelEmploye;
	private: System::Windows::Forms::Button^ bAjouter_p1;
	private: System::Windows::Forms::Button^ bMaj_p1;
	private: System::Windows::Forms::Button^ bSupprimer_p1;
	private: System::Windows::Forms::TextBox^ tVille_p1;
	private: System::Windows::Forms::TextBox^ tCodePostal_p1;
	private: System::Windows::Forms::TextBox^ tNomVoie_p1;
	private: System::Windows::Forms::TextBox^ tCompAdresse_p1;
	private: System::Windows::Forms::TextBox^ tNumVoie_p1;
	private: System::Windows::Forms::TextBox^ tPrenomSuperieur_p1;
	private: System::Windows::Forms::TextBox^ tNomSuperieur_p1;
	private: System::Windows::Forms::TextBox^ tPrenom_p1;
	private: System::Windows::Forms::TextBox^ tNom_p1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dEmploye_p1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tTypeVoie_p1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panelClient;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dClient_p2;
	private: System::Windows::Forms::DataGridView^ dAdresse_p2;
	private: System::Windows::Forms::TextBox^ tTypeVoie_p2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ bAjouter_p2;
	private: System::Windows::Forms::Button^ bMaj_p2;
	private: System::Windows::Forms::Button^ bSupprimer_p2;
	private: System::Windows::Forms::TextBox^ tVille_p2;
	private: System::Windows::Forms::TextBox^ tCodePostal_p2;
	private: System::Windows::Forms::TextBox^ tNomVoie_p2;
	private: System::Windows::Forms::TextBox^ tCompAdresse_p2;
	private: System::Windows::Forms::TextBox^ tNumVoie_p2;
	private: System::Windows::Forms::TextBox^ tPrenom_p2;
	private: System::Windows::Forms::TextBox^ tNom_p2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ bRechecher_p2;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ tNumClient_p2;
	private: System::Windows::Forms::TextBox^ tDateNaissance_p2;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ bRetour_p1;
	private: System::Windows::Forms::Button^ bRetour_p2;
	private: System::Windows::Forms::Panel^ panelCommande;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::RichTextBox^ tBoxMessage_p1;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::RichTextBox^ tBoxMessage_p2;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::RichTextBox^ tBoxMessage_p3;
	private: System::Windows::Forms::Button^ bRetour_p3;
	private: System::Windows::Forms::Button^ bRechercherCommande_p3;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ tRechercheCommande_p3;
	private: System::Windows::Forms::TextBox^ tDernierSolde_p3;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Button^ bAjouter_p3;
	private: System::Windows::Forms::Button^ bMaj_p3;
	private: System::Windows::Forms::Button^ bSupprimer_p3;
	private: System::Windows::Forms::TextBox^ tQuantiteArticle_p3;
	private: System::Windows::Forms::TextBox^ tRefArticle_p3;
	private: System::Windows::Forms::TextBox^ tComplementLivraison_p3;
	private: System::Windows::Forms::TextBox^ tNumVoieLivraison_p3;
	private: System::Windows::Forms::TextBox^ tPrenom_p3;
	private: System::Windows::Forms::TextBox^ tNom_p3;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::DataGridView^ dCommande;
	private: System::Windows::Forms::DataGridView^ dDetailCommande_p3;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::DataGridView^ dDetailPaiement_p3;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ tMoyenPaiement_p3;
	private: System::Windows::Forms::TextBox^ tDatePaiement_p3;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::TextBox^ tTypeVoieLivraison_p3;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::TextBox^ tVilleLivraison_p3;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::TextBox^ tCodePostalLivraison_p3;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::TextBox^ tNomVoieLivraison_p3;
	private: System::Windows::Forms::TextBox^ tDateLivraison_p3;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Panel^ panelStock;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::RichTextBox^ tBoxMessage_p4;
	private: System::Windows::Forms::Button^ bRetour_p4;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ tTauxTVA_p4;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Button^ bAjouter_p4;
	private: System::Windows::Forms::Button^ bMaj_p4;
	private: System::Windows::Forms::Button^ bSupprimer_p4;
	private: System::Windows::Forms::TextBox^ tPrixHT_p4;
	private: System::Windows::Forms::TextBox^ tSeuilReap_p4;
	private: System::Windows::Forms::TextBox^ tQuantiteStock_p4;
	private: System::Windows::Forms::TextBox^ tDesignation_p4;
	private: System::Windows::Forms::TextBox^ tRechercheArticle_p4;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::DataGridView^ dArticle_p4;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Button^ bRechercheArticle_p4;
	private: System::Windows::Forms::Panel^ panelStatistiques;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::TextBox^ tReferenceArticle_p4;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::DataGridView^ dProduitsSousSeuil_p5;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::DataGridView^ dArticlesMoinsVendus;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::DataGridView^ dArticlesPlusVendus_p5;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::DataGridView^ dValeurAchatStock_p5;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::DataGridView^ dValeurCo_p5;
	private: System::Windows::Forms::DataGridView^ dPanierMoyen_p5;
	private: System::Windows::Forms::Button^ bRetour_p5;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::Label^ dProduitSousSeuil_p5;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::DataGridView^ dChiffreAffaireMois_p5;
	private: System::Windows::Forms::DataGridView^ dMontantAchatClient_p5;
	private: System::Windows::Forms::Button^ bRechercheIDemploye_p1;
	private: System::Windows::Forms::TextBox^ tIDemploye_p1;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Panel^ panelSimulation;
	private: System::Windows::Forms::Button^ bRetour_p6;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::DataGridView^ dSimulation_p6;
	private: System::Windows::Forms::ComboBox^ cbMarge_p6;
	private: System::Windows::Forms::ComboBox^ cbRemiseComm_p6;
	private: System::Windows::Forms::ComboBox^ cbDemarque_p6;
	private: System::Windows::Forms::ComboBox^ cbTVA_p6;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::TextBox^ tTypeVoieFacturation_p3;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::TextBox^ tVilleFacturation_p3;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::TextBox^ tCodePostalFacturation_p3;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::TextBox^ tNomVoieFacturation_p3;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::TextBox^ tComplementFacturation_p3;
	private: System::Windows::Forms::TextBox^ tNumVoieFacturation_p3;
	private: System::Windows::Forms::Label^ label69;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ bCalcul_p6;
	private: System::Windows::Forms::Button^ bCopie_p3;
	private: Services::Gestion^ gestion;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEmploye = (gcnew System::Windows::Forms::Button());
			this->buttonClient = (gcnew System::Windows::Forms::Button());
			this->buttonCommande = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->buttonStatistiques = (gcnew System::Windows::Forms::Button());
			this->buttonSimulation = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panelCommande = (gcnew System::Windows::Forms::Panel());
			this->tTypeVoieFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->tVilleFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->tCodePostalFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->tNomVoieFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->tComplementFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoieFacturation_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->tTypeVoieLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tVilleLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tCodePostalLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->tNomVoieLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tDateLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->tMoyenPaiement_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tDatePaiement_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->dDetailPaiement_p3 = (gcnew System::Windows::Forms::DataGridView());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p3 = (gcnew System::Windows::Forms::RichTextBox());
			this->bRetour_p3 = (gcnew System::Windows::Forms::Button());
			this->bRechercherCommande_p3 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tRechercheCommande_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tDernierSolde_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p3 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p3 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p3 = (gcnew System::Windows::Forms::Button());
			this->tQuantiteArticle_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tRefArticle_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tComplementLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoieLivraison_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenom_p3 = (gcnew System::Windows::Forms::TextBox());
			this->tNom_p3 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->dCommande = (gcnew System::Windows::Forms::DataGridView());
			this->dDetailCommande_p3 = (gcnew System::Windows::Forms::DataGridView());
			this->panelEmploye = (gcnew System::Windows::Forms::Panel());
			this->bRechercheIDemploye_p1 = (gcnew System::Windows::Forms::Button());
			this->tIDemploye_p1 = (gcnew System::Windows::Forms::TextBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p1 = (gcnew System::Windows::Forms::RichTextBox());
			this->bRetour_p1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tTypeVoie_p1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p1 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p1 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p1 = (gcnew System::Windows::Forms::Button());
			this->tVille_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tCodePostal_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNomVoie_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tCompAdresse_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoie_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenomSuperieur_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNomSuperieur_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenom_p1 = (gcnew System::Windows::Forms::TextBox());
			this->tNom_p1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dEmploye_p1 = (gcnew System::Windows::Forms::DataGridView());
			this->labelEmploye = (gcnew System::Windows::Forms::Label());
			this->panelClient = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p2 = (gcnew System::Windows::Forms::RichTextBox());
			this->bRetour_p2 = (gcnew System::Windows::Forms::Button());
			this->bRechecher_p2 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tNumClient_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tDateNaissance_p2 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tTypeVoie_p2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p2 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p2 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p2 = (gcnew System::Windows::Forms::Button());
			this->tVille_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tCodePostal_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tNomVoie_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tCompAdresse_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tNumVoie_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tPrenom_p2 = (gcnew System::Windows::Forms::TextBox());
			this->tNom_p2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dClient_p2 = (gcnew System::Windows::Forms::DataGridView());
			this->dAdresse_p2 = (gcnew System::Windows::Forms::DataGridView());
			this->panelStock = (gcnew System::Windows::Forms::Panel());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->tReferenceArticle_p4 = (gcnew System::Windows::Forms::TextBox());
			this->bRechercheArticle_p4 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tBoxMessage_p4 = (gcnew System::Windows::Forms::RichTextBox());
			this->bRetour_p4 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->tTauxTVA_p4 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->bAjouter_p4 = (gcnew System::Windows::Forms::Button());
			this->bMaj_p4 = (gcnew System::Windows::Forms::Button());
			this->bSupprimer_p4 = (gcnew System::Windows::Forms::Button());
			this->tPrixHT_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tSeuilReap_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tQuantiteStock_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tDesignation_p4 = (gcnew System::Windows::Forms::TextBox());
			this->tRechercheArticle_p4 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->dArticle_p4 = (gcnew System::Windows::Forms::DataGridView());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->panelStatistiques = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->dProduitsSousSeuil_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->dArticlesMoinsVendus = (gcnew System::Windows::Forms::DataGridView());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->dArticlesPlusVendus_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->dValeurAchatStock_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->dValeurCo_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->dPanierMoyen_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->bRetour_p5 = (gcnew System::Windows::Forms::Button());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->dProduitSousSeuil_p5 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->dChiffreAffaireMois_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->dMontantAchatClient_p5 = (gcnew System::Windows::Forms::DataGridView());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panelSimulation = (gcnew System::Windows::Forms::Panel());
			this->bCalcul_p6 = (gcnew System::Windows::Forms::Button());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->dSimulation_p6 = (gcnew System::Windows::Forms::DataGridView());
			this->cbMarge_p6 = (gcnew System::Windows::Forms::ComboBox());
			this->cbRemiseComm_p6 = (gcnew System::Windows::Forms::ComboBox());
			this->cbDemarque_p6 = (gcnew System::Windows::Forms::ComboBox());
			this->cbTVA_p6 = (gcnew System::Windows::Forms::ComboBox());
			this->bRetour_p6 = (gcnew System::Windows::Forms::Button());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->bCopie_p3 = (gcnew System::Windows::Forms::Button());
			this->panelMenu->SuspendLayout();
			this->panelCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailPaiement_p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailCommande_p3))->BeginInit();
			this->panelEmploye->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dEmploye_p1))->BeginInit();
			this->panelClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dClient_p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dAdresse_p2))->BeginInit();
			this->panelStock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticle_p4))->BeginInit();
			this->panelStatistiques->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dProduitsSousSeuil_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticlesMoinsVendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticlesPlusVendus_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dValeurAchatStock_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dValeurCo_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dPanierMoyen_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dChiffreAffaireMois_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dMontantAchatClient_p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->panelSimulation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dSimulation_p6))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1332, 276);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenu dans votre logiciel de gestion";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(200, 409);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(333, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Choisissez le menu auquel accéder :";
			// 
			// buttonEmploye
			// 
			this->buttonEmploye->Location = System::Drawing::Point(619, 310);
			this->buttonEmploye->Margin = System::Windows::Forms::Padding(4);
			this->buttonEmploye->Name = L"buttonEmploye";
			this->buttonEmploye->Size = System::Drawing::Size(145, 31);
			this->buttonEmploye->TabIndex = 1;
			this->buttonEmploye->Text = L"Employé";
			this->buttonEmploye->UseVisualStyleBackColor = true;
			this->buttonEmploye->Click += gcnew System::EventHandler(this, &Menu::buttonEmploye_Click);
			// 
			// buttonClient
			// 
			this->buttonClient->Location = System::Drawing::Point(619, 348);
			this->buttonClient->Margin = System::Windows::Forms::Padding(4);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(145, 31);
			this->buttonClient->TabIndex = 2;
			this->buttonClient->Text = L"Client";
			this->buttonClient->UseVisualStyleBackColor = true;
			this->buttonClient->Click += gcnew System::EventHandler(this, &Menu::buttonClient_Click);
			// 
			// buttonCommande
			// 
			this->buttonCommande->Location = System::Drawing::Point(619, 386);
			this->buttonCommande->Margin = System::Windows::Forms::Padding(4);
			this->buttonCommande->Name = L"buttonCommande";
			this->buttonCommande->Size = System::Drawing::Size(145, 31);
			this->buttonCommande->TabIndex = 3;
			this->buttonCommande->Text = L"Commande";
			this->buttonCommande->UseVisualStyleBackColor = true;
			this->buttonCommande->Click += gcnew System::EventHandler(this, &Menu::buttonCommande_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->Location = System::Drawing::Point(619, 425);
			this->buttonStock->Margin = System::Windows::Forms::Padding(4);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(145, 31);
			this->buttonStock->TabIndex = 4;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &Menu::buttonStock_Click);
			// 
			// buttonStatistiques
			// 
			this->buttonStatistiques->Location = System::Drawing::Point(619, 463);
			this->buttonStatistiques->Margin = System::Windows::Forms::Padding(4);
			this->buttonStatistiques->Name = L"buttonStatistiques";
			this->buttonStatistiques->Size = System::Drawing::Size(145, 31);
			this->buttonStatistiques->TabIndex = 5;
			this->buttonStatistiques->Text = L"Statistiques";
			this->buttonStatistiques->UseVisualStyleBackColor = true;
			this->buttonStatistiques->Click += gcnew System::EventHandler(this, &Menu::buttonStatistiques_Click);
			// 
			// buttonSimulation
			// 
			this->buttonSimulation->Location = System::Drawing::Point(619, 501);
			this->buttonSimulation->Margin = System::Windows::Forms::Padding(4);
			this->buttonSimulation->Name = L"buttonSimulation";
			this->buttonSimulation->Size = System::Drawing::Size(145, 31);
			this->buttonSimulation->TabIndex = 6;
			this->buttonSimulation->Text = L"Simulation";
			this->buttonSimulation->UseVisualStyleBackColor = true;
			this->buttonSimulation->Click += gcnew System::EventHandler(this, &Menu::buttonSimulation_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->Controls->Add(this->buttonSimulation);
			this->panelMenu->Controls->Add(this->label1);
			this->panelMenu->Controls->Add(this->buttonStatistiques);
			this->panelMenu->Controls->Add(this->buttonStock);
			this->panelMenu->Controls->Add(this->buttonCommande);
			this->panelMenu->Controls->Add(this->buttonClient);
			this->panelMenu->Controls->Add(this->buttonEmploye);
			this->panelMenu->Controls->Add(this->label2);
			this->panelMenu->Location = System::Drawing::Point(0, 1);
			this->panelMenu->Margin = System::Windows::Forms::Padding(4);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(1389, 688);
			this->panelMenu->TabIndex = 8;
			// 
			// panelCommande
			// 
			this->panelCommande->Controls->Add(this->bCopie_p3);
			this->panelCommande->Controls->Add(this->tTypeVoieFacturation_p3);
			this->panelCommande->Controls->Add(this->label64);
			this->panelCommande->Controls->Add(this->tVilleFacturation_p3);
			this->panelCommande->Controls->Add(this->label65);
			this->panelCommande->Controls->Add(this->tCodePostalFacturation_p3);
			this->panelCommande->Controls->Add(this->label66);
			this->panelCommande->Controls->Add(this->label67);
			this->panelCommande->Controls->Add(this->tNomVoieFacturation_p3);
			this->panelCommande->Controls->Add(this->label68);
			this->panelCommande->Controls->Add(this->tComplementFacturation_p3);
			this->panelCommande->Controls->Add(this->tNumVoieFacturation_p3);
			this->panelCommande->Controls->Add(this->label69);
			this->panelCommande->Controls->Add(this->tTypeVoieLivraison_p3);
			this->panelCommande->Controls->Add(this->label63);
			this->panelCommande->Controls->Add(this->label59);
			this->panelCommande->Controls->Add(this->tVilleLivraison_p3);
			this->panelCommande->Controls->Add(this->label56);
			this->panelCommande->Controls->Add(this->tCodePostalLivraison_p3);
			this->panelCommande->Controls->Add(this->label55);
			this->panelCommande->Controls->Add(this->label33);
			this->panelCommande->Controls->Add(this->label51);
			this->panelCommande->Controls->Add(this->tNomVoieLivraison_p3);
			this->panelCommande->Controls->Add(this->tDateLivraison_p3);
			this->panelCommande->Controls->Add(this->label54);
			this->panelCommande->Controls->Add(this->tMoyenPaiement_p3);
			this->panelCommande->Controls->Add(this->tDatePaiement_p3);
			this->panelCommande->Controls->Add(this->label49);
			this->panelCommande->Controls->Add(this->label50);
			this->panelCommande->Controls->Add(this->label48);
			this->panelCommande->Controls->Add(this->label47);
			this->panelCommande->Controls->Add(this->label46);
			this->panelCommande->Controls->Add(this->label45);
			this->panelCommande->Controls->Add(this->label44);
			this->panelCommande->Controls->Add(this->dDetailPaiement_p3);
			this->panelCommande->Controls->Add(this->label30);
			this->panelCommande->Controls->Add(this->tBoxMessage_p3);
			this->panelCommande->Controls->Add(this->bRetour_p3);
			this->panelCommande->Controls->Add(this->bRechercherCommande_p3);
			this->panelCommande->Controls->Add(this->label31);
			this->panelCommande->Controls->Add(this->tRechercheCommande_p3);
			this->panelCommande->Controls->Add(this->tDernierSolde_p3);
			this->panelCommande->Controls->Add(this->label32);
			this->panelCommande->Controls->Add(this->bAjouter_p3);
			this->panelCommande->Controls->Add(this->bMaj_p3);
			this->panelCommande->Controls->Add(this->bSupprimer_p3);
			this->panelCommande->Controls->Add(this->tQuantiteArticle_p3);
			this->panelCommande->Controls->Add(this->tRefArticle_p3);
			this->panelCommande->Controls->Add(this->tComplementLivraison_p3);
			this->panelCommande->Controls->Add(this->tNumVoieLivraison_p3);
			this->panelCommande->Controls->Add(this->tPrenom_p3);
			this->panelCommande->Controls->Add(this->tNom_p3);
			this->panelCommande->Controls->Add(this->label34);
			this->panelCommande->Controls->Add(this->label35);
			this->panelCommande->Controls->Add(this->label37);
			this->panelCommande->Controls->Add(this->label39);
			this->panelCommande->Controls->Add(this->label40);
			this->panelCommande->Controls->Add(this->label41);
			this->panelCommande->Controls->Add(this->label42);
			this->panelCommande->Controls->Add(this->label43);
			this->panelCommande->Controls->Add(this->dCommande);
			this->panelCommande->Controls->Add(this->dDetailCommande_p3);
			this->panelCommande->Location = System::Drawing::Point(0, 1);
			this->panelCommande->Margin = System::Windows::Forms::Padding(4);
			this->panelCommande->Name = L"panelCommande";
			this->panelCommande->Size = System::Drawing::Size(1389, 688);
			this->panelCommande->TabIndex = 11;
			// 
			// tTypeVoieFacturation_p3
			// 
			this->tTypeVoieFacturation_p3->Location = System::Drawing::Point(227, 402);
			this->tTypeVoieFacturation_p3->Margin = System::Windows::Forms::Padding(4);
			this->tTypeVoieFacturation_p3->Name = L"tTypeVoieFacturation_p3";
			this->tTypeVoieFacturation_p3->Size = System::Drawing::Size(81, 22);
			this->tTypeVoieFacturation_p3->TabIndex = 15;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(221, 386);
			this->label64->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(90, 17);
			this->label64->TabIndex = 143;
			this->label64->Text = L"Type de voie";
			// 
			// tVilleFacturation_p3
			// 
			this->tVilleFacturation_p3->Location = System::Drawing::Point(259, 448);
			this->tVilleFacturation_p3->Margin = System::Windows::Forms::Padding(4);
			this->tVilleFacturation_p3->Name = L"tVilleFacturation_p3";
			this->tVilleFacturation_p3->Size = System::Drawing::Size(96, 22);
			this->tVilleFacturation_p3->TabIndex = 18;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(287, 432);
			this->label65->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(34, 17);
			this->label65->TabIndex = 141;
			this->label65->Text = L"Ville";
			// 
			// tCodePostalFacturation_p3
			// 
			this->tCodePostalFacturation_p3->Location = System::Drawing::Point(168, 448);
			this->tCodePostalFacturation_p3->Margin = System::Windows::Forms::Padding(4);
			this->tCodePostalFacturation_p3->Name = L"tCodePostalFacturation_p3";
			this->tCodePostalFacturation_p3->Size = System::Drawing::Size(81, 22);
			this->tCodePostalFacturation_p3->TabIndex = 17;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(168, 432);
			this->label66->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(83, 17);
			this->label66->TabIndex = 139;
			this->label66->Text = L"Code postal";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(73, 386);
			this->label67->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(54, 17);
			this->label67->TabIndex = 138;
			this->label67->Text = L"N° voie";
			// 
			// tNomVoieFacturation_p3
			// 
			this->tNomVoieFacturation_p3->Location = System::Drawing::Point(319, 402);
			this->tNomVoieFacturation_p3->Margin = System::Windows::Forms::Padding(4);
			this->tNomVoieFacturation_p3->Name = L"tNomVoieFacturation_p3";
			this->tNomVoieFacturation_p3->Size = System::Drawing::Size(145, 22);
			this->tNomVoieFacturation_p3->TabIndex = 16;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(347, 386);
			this->label68->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(87, 17);
			this->label68->TabIndex = 136;
			this->label68->Text = L"Nom de voie";
			// 
			// tComplementFacturation_p3
			// 
			this->tComplementFacturation_p3->Location = System::Drawing::Point(136, 402);
			this->tComplementFacturation_p3->Margin = System::Windows::Forms::Padding(4);
			this->tComplementFacturation_p3->Name = L"tComplementFacturation_p3";
			this->tComplementFacturation_p3->Size = System::Drawing::Size(81, 22);
			this->tComplementFacturation_p3->TabIndex = 14;
			// 
			// tNumVoieFacturation_p3
			// 
			this->tNumVoieFacturation_p3->Location = System::Drawing::Point(75, 402);
			this->tNumVoieFacturation_p3->Margin = System::Windows::Forms::Padding(4);
			this->tNumVoieFacturation_p3->Name = L"tNumVoieFacturation_p3";
			this->tNumVoieFacturation_p3->Size = System::Drawing::Size(51, 22);
			this->tNumVoieFacturation_p3->TabIndex = 13;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(136, 386);
			this->label69->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(86, 17);
			this->label69->TabIndex = 133;
			this->label69->Text = L"Complément";
			// 
			// tTypeVoieLivraison_p3
			// 
			this->tTypeVoieLivraison_p3->Location = System::Drawing::Point(227, 279);
			this->tTypeVoieLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tTypeVoieLivraison_p3->Name = L"tTypeVoieLivraison_p3";
			this->tTypeVoieLivraison_p3->Size = System::Drawing::Size(81, 22);
			this->tTypeVoieLivraison_p3->TabIndex = 9;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(221, 263);
			this->label63->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(90, 17);
			this->label63->TabIndex = 131;
			this->label63->Text = L"Type de voie";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(25, 363);
			this->label59->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(211, 17);
			this->label59->TabIndex = 126;
			this->label59->Text = L"Informations adresse livraison";
			// 
			// tVilleLivraison_p3
			// 
			this->tVilleLivraison_p3->Location = System::Drawing::Point(259, 322);
			this->tVilleLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tVilleLivraison_p3->Name = L"tVilleLivraison_p3";
			this->tVilleLivraison_p3->Size = System::Drawing::Size(96, 22);
			this->tVilleLivraison_p3->TabIndex = 12;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(288, 306);
			this->label56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(34, 17);
			this->label56->TabIndex = 118;
			this->label56->Text = L"Ville";
			// 
			// tCodePostalLivraison_p3
			// 
			this->tCodePostalLivraison_p3->Location = System::Drawing::Point(168, 322);
			this->tCodePostalLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tCodePostalLivraison_p3->Name = L"tCodePostalLivraison_p3";
			this->tCodePostalLivraison_p3->Size = System::Drawing::Size(81, 22);
			this->tCodePostalLivraison_p3->TabIndex = 11;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(168, 306);
			this->label55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(83, 17);
			this->label55->TabIndex = 116;
			this->label55->Text = L"Code postal";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(31, 238);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(196, 17);
			this->label33->TabIndex = 115;
			this->label33->Text = L"Informations adresse facturation";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(73, 263);
			this->label51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(54, 17);
			this->label51->TabIndex = 111;
			this->label51->Text = L"N° voie";
			// 
			// tNomVoieLivraison_p3
			// 
			this->tNomVoieLivraison_p3->Location = System::Drawing::Point(319, 279);
			this->tNomVoieLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tNomVoieLivraison_p3->Name = L"tNomVoieLivraison_p3";
			this->tNomVoieLivraison_p3->Size = System::Drawing::Size(145, 22);
			this->tNomVoieLivraison_p3->TabIndex = 10;
			// 
			// tDateLivraison_p3
			// 
			this->tDateLivraison_p3->Location = System::Drawing::Point(301, 190);
			this->tDateLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tDateLivraison_p3->Name = L"tDateLivraison_p3";
			this->tDateLivraison_p3->Size = System::Drawing::Size(145, 22);
			this->tDateLivraison_p3->TabIndex = 6;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(347, 263);
			this->label54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(87, 17);
			this->label54->TabIndex = 105;
			this->label54->Text = L"Nom de voie";
			// 
			// tMoyenPaiement_p3
			// 
			this->tMoyenPaiement_p3->Location = System::Drawing::Point(339, 559);
			this->tMoyenPaiement_p3->Margin = System::Windows::Forms::Padding(4);
			this->tMoyenPaiement_p3->Name = L"tMoyenPaiement_p3";
			this->tMoyenPaiement_p3->Size = System::Drawing::Size(145, 22);
			this->tMoyenPaiement_p3->TabIndex = 22;
			// 
			// tDatePaiement_p3
			// 
			this->tDatePaiement_p3->Location = System::Drawing::Point(172, 559);
			this->tDatePaiement_p3->Margin = System::Windows::Forms::Padding(4);
			this->tDatePaiement_p3->Name = L"tDatePaiement_p3";
			this->tDatePaiement_p3->Size = System::Drawing::Size(145, 22);
			this->tDatePaiement_p3->TabIndex = 21;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(339, 539);
			this->label49->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(132, 17);
			this->label49->TabIndex = 100;
			this->label49->Text = L"Moyen de paiement";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(168, 539);
			this->label50->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(120, 17);
			this->label50->TabIndex = 99;
			this->label50->Text = L"Date de paiement";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(17, 513);
			this->label48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(127, 17);
			this->label48->TabIndex = 98;
			this->label48->Text = L"Informations article";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(17, 562);
			this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(147, 17);
			this->label47->TabIndex = 97;
			this->label47->Text = L"Informations paiement";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(31, 106);
			this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(158, 17);
			this->label46->TabIndex = 96;
			this->label46->Text = L"Informations commande";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(85, 172);
			this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(125, 17);
			this->label45->TabIndex = 94;
			this->label45->Text = L"Date dernier solde";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(549, 414);
			this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(114, 17);
			this->label44->TabIndex = 93;
			this->label44->Text = L"Détails Adresses";
			// 
			// dDetailPaiement_p3
			// 
			this->dDetailPaiement_p3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dDetailPaiement_p3->Location = System::Drawing::Point(549, 432);
			this->dDetailPaiement_p3->Margin = System::Windows::Forms::Padding(4);
			this->dDetailPaiement_p3->Name = L"dDetailPaiement_p3";
			this->dDetailPaiement_p3->RowHeadersWidth = 51;
			this->dDetailPaiement_p3->Size = System::Drawing::Size(829, 165);
			this->dDetailPaiement_p3->TabIndex = 0;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(557, 607);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(65, 17);
			this->label30->TabIndex = 91;
			this->label30->Text = L"Message";
			// 
			// tBoxMessage_p3
			// 
			this->tBoxMessage_p3->Location = System::Drawing::Point(548, 623);
			this->tBoxMessage_p3->Margin = System::Windows::Forms::Padding(4);
			this->tBoxMessage_p3->Name = L"tBoxMessage_p3";
			this->tBoxMessage_p3->ReadOnly = true;
			this->tBoxMessage_p3->Size = System::Drawing::Size(831, 46);
			this->tBoxMessage_p3->TabIndex = 90;
			this->tBoxMessage_p3->Text = L"";
			// 
			// bRetour_p3
			// 
			this->bRetour_p3->Location = System::Drawing::Point(5, 4);
			this->bRetour_p3->Margin = System::Windows::Forms::Padding(4);
			this->bRetour_p3->Name = L"bRetour_p3";
			this->bRetour_p3->Size = System::Drawing::Size(49, 28);
			this->bRetour_p3->TabIndex = 26;
			this->bRetour_p3->Text = L"<<";
			this->bRetour_p3->UseVisualStyleBackColor = true;
			this->bRetour_p3->Click += gcnew System::EventHandler(this, &Menu::bRetour_p3_Click);
			// 
			// bRechercherCommande_p3
			// 
			this->bRechercherCommande_p3->Location = System::Drawing::Point(371, 53);
			this->bRechercherCommande_p3->Margin = System::Windows::Forms::Padding(4);
			this->bRechercherCommande_p3->Name = L"bRechercherCommande_p3";
			this->bRechercherCommande_p3->Size = System::Drawing::Size(101, 25);
			this->bRechercherCommande_p3->TabIndex = 2;
			this->bRechercherCommande_p3->Text = L"Rechercher";
			this->bRechercherCommande_p3->UseVisualStyleBackColor = true;
			this->bRechercherCommande_p3->Click += gcnew System::EventHandler(this, &Menu::bRechercherCommande_p3_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(31, 57);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(147, 17);
			this->label31->TabIndex = 87;
			this->label31->Text = L"Référence commande";
			// 
			// tRechercheCommande_p3
			// 
			this->tRechercheCommande_p3->Location = System::Drawing::Point(195, 53);
			this->tRechercheCommande_p3->Margin = System::Windows::Forms::Padding(4);
			this->tRechercheCommande_p3->Name = L"tRechercheCommande_p3";
			this->tRechercheCommande_p3->Size = System::Drawing::Size(145, 22);
			this->tRechercheCommande_p3->TabIndex = 1;
			// 
			// tDernierSolde_p3
			// 
			this->tDernierSolde_p3->Location = System::Drawing::Point(87, 190);
			this->tDernierSolde_p3->Margin = System::Windows::Forms::Padding(4);
			this->tDernierSolde_p3->Name = L"tDernierSolde_p3";
			this->tDernierSolde_p3->Size = System::Drawing::Size(147, 22);
			this->tDernierSolde_p3->TabIndex = 5;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(299, 172);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(114, 17);
			this->label32->TabIndex = 84;
			this->label32->Text = L"Date de livraison";
			// 
			// bAjouter_p3
			// 
			this->bAjouter_p3->Location = System::Drawing::Point(267, 598);
			this->bAjouter_p3->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter_p3->Name = L"bAjouter_p3";
			this->bAjouter_p3->Size = System::Drawing::Size(88, 84);
			this->bAjouter_p3->TabIndex = 23;
			this->bAjouter_p3->Text = L"Ajouter";
			this->bAjouter_p3->UseVisualStyleBackColor = true;
			this->bAjouter_p3->Click += gcnew System::EventHandler(this, &Menu::bAjouter_p3_Click);
			// 
			// bMaj_p3
			// 
			this->bMaj_p3->Location = System::Drawing::Point(160, 598);
			this->bMaj_p3->Margin = System::Windows::Forms::Padding(4);
			this->bMaj_p3->Name = L"bMaj_p3";
			this->bMaj_p3->Size = System::Drawing::Size(100, 39);
			this->bMaj_p3->TabIndex = 24;
			this->bMaj_p3->Text = L"Mise à jour";
			this->bMaj_p3->UseVisualStyleBackColor = true;
			this->bMaj_p3->Click += gcnew System::EventHandler(this, &Menu::bMaj_p3_Click);
			// 
			// bSupprimer_p3
			// 
			this->bSupprimer_p3->Location = System::Drawing::Point(160, 642);
			this->bSupprimer_p3->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimer_p3->Name = L"bSupprimer_p3";
			this->bSupprimer_p3->Size = System::Drawing::Size(100, 39);
			this->bSupprimer_p3->TabIndex = 25;
			this->bSupprimer_p3->Text = L"Supprimer";
			this->bSupprimer_p3->UseVisualStyleBackColor = true;
			this->bSupprimer_p3->Click += gcnew System::EventHandler(this, &Menu::bSupprimer_p3_Click);
			// 
			// tQuantiteArticle_p3
			// 
			this->tQuantiteArticle_p3->Location = System::Drawing::Point(340, 510);
			this->tQuantiteArticle_p3->Margin = System::Windows::Forms::Padding(4);
			this->tQuantiteArticle_p3->Name = L"tQuantiteArticle_p3";
			this->tQuantiteArticle_p3->Size = System::Drawing::Size(145, 22);
			this->tQuantiteArticle_p3->TabIndex = 20;
			// 
			// tRefArticle_p3
			// 
			this->tRefArticle_p3->Location = System::Drawing::Point(172, 513);
			this->tRefArticle_p3->Margin = System::Windows::Forms::Padding(4);
			this->tRefArticle_p3->Name = L"tRefArticle_p3";
			this->tRefArticle_p3->Size = System::Drawing::Size(145, 22);
			this->tRefArticle_p3->TabIndex = 19;
			// 
			// tComplementLivraison_p3
			// 
			this->tComplementLivraison_p3->Location = System::Drawing::Point(136, 279);
			this->tComplementLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tComplementLivraison_p3->Name = L"tComplementLivraison_p3";
			this->tComplementLivraison_p3->Size = System::Drawing::Size(81, 22);
			this->tComplementLivraison_p3->TabIndex = 8;
			// 
			// tNumVoieLivraison_p3
			// 
			this->tNumVoieLivraison_p3->Location = System::Drawing::Point(77, 279);
			this->tNumVoieLivraison_p3->Margin = System::Windows::Forms::Padding(4);
			this->tNumVoieLivraison_p3->Name = L"tNumVoieLivraison_p3";
			this->tNumVoieLivraison_p3->Size = System::Drawing::Size(51, 22);
			this->tNumVoieLivraison_p3->TabIndex = 7;
			// 
			// tPrenom_p3
			// 
			this->tPrenom_p3->Location = System::Drawing::Point(301, 139);
			this->tPrenom_p3->Margin = System::Windows::Forms::Padding(4);
			this->tPrenom_p3->Name = L"tPrenom_p3";
			this->tPrenom_p3->Size = System::Drawing::Size(145, 22);
			this->tPrenom_p3->TabIndex = 4;
			// 
			// tNom_p3
			// 
			this->tNom_p3->Location = System::Drawing::Point(87, 139);
			this->tNom_p3->Margin = System::Windows::Forms::Padding(4);
			this->tNom_p3->Name = L"tNom_p3";
			this->tNom_p3->Size = System::Drawing::Size(145, 22);
			this->tNom_p3->TabIndex = 3;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(340, 494);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(62, 17);
			this->label34->TabIndex = 71;
			this->label34->Text = L"Quantité";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(171, 494);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(74, 17);
			this->label35->TabIndex = 70;
			this->label35->Text = L"Référence";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(136, 263);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(86, 17);
			this->label37->TabIndex = 68;
			this->label37->Text = L"Complément";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(299, 123);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(57, 17);
			this->label39->TabIndex = 66;
			this->label39->Text = L"Prenom";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(85, 123);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(37, 17);
			this->label40->TabIndex = 65;
			this->label40->Text = L"Nom";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(61, 6);
			this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(169, 25);
			this->label41->TabIndex = 64;
			this->label41->Text = L"Menu Commande";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(551, 225);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(101, 17);
			this->label42->TabIndex = 63;
			this->label42->Text = L"Détails Articles";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(551, 37);
			this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(79, 17);
			this->label43->TabIndex = 62;
			this->label43->Text = L"Commande";
			// 
			// dCommande
			// 
			this->dCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dCommande->Location = System::Drawing::Point(551, 245);
			this->dCommande->Margin = System::Windows::Forms::Padding(4);
			this->dCommande->Name = L"dCommande";
			this->dCommande->RowHeadersWidth = 51;
			this->dCommande->Size = System::Drawing::Size(829, 165);
			this->dCommande->TabIndex = 0;
			// 
			// dDetailCommande_p3
			// 
			this->dDetailCommande_p3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dDetailCommande_p3->Location = System::Drawing::Point(551, 57);
			this->dDetailCommande_p3->Margin = System::Windows::Forms::Padding(4);
			this->dDetailCommande_p3->Name = L"dDetailCommande_p3";
			this->dDetailCommande_p3->RowHeadersWidth = 51;
			this->dDetailCommande_p3->Size = System::Drawing::Size(825, 165);
			this->dDetailCommande_p3->TabIndex = 0;
			// 
			// panelEmploye
			// 
			this->panelEmploye->Controls->Add(this->bRechercheIDemploye_p1);
			this->panelEmploye->Controls->Add(this->tIDemploye_p1);
			this->panelEmploye->Controls->Add(this->label74);
			this->panelEmploye->Controls->Add(this->label28);
			this->panelEmploye->Controls->Add(this->tBoxMessage_p1);
			this->panelEmploye->Controls->Add(this->bRetour_p1);
			this->panelEmploye->Controls->Add(this->label9);
			this->panelEmploye->Controls->Add(this->tTypeVoie_p1);
			this->panelEmploye->Controls->Add(this->label14);
			this->panelEmploye->Controls->Add(this->bAjouter_p1);
			this->panelEmploye->Controls->Add(this->bMaj_p1);
			this->panelEmploye->Controls->Add(this->bSupprimer_p1);
			this->panelEmploye->Controls->Add(this->tVille_p1);
			this->panelEmploye->Controls->Add(this->tCodePostal_p1);
			this->panelEmploye->Controls->Add(this->tNomVoie_p1);
			this->panelEmploye->Controls->Add(this->tCompAdresse_p1);
			this->panelEmploye->Controls->Add(this->tNumVoie_p1);
			this->panelEmploye->Controls->Add(this->tPrenomSuperieur_p1);
			this->panelEmploye->Controls->Add(this->tNomSuperieur_p1);
			this->panelEmploye->Controls->Add(this->tPrenom_p1);
			this->panelEmploye->Controls->Add(this->tNom_p1);
			this->panelEmploye->Controls->Add(this->label13);
			this->panelEmploye->Controls->Add(this->label12);
			this->panelEmploye->Controls->Add(this->label11);
			this->panelEmploye->Controls->Add(this->label10);
			this->panelEmploye->Controls->Add(this->label8);
			this->panelEmploye->Controls->Add(this->label7);
			this->panelEmploye->Controls->Add(this->label6);
			this->panelEmploye->Controls->Add(this->label5);
			this->panelEmploye->Controls->Add(this->label4);
			this->panelEmploye->Controls->Add(this->dEmploye_p1);
			this->panelEmploye->Controls->Add(this->labelEmploye);
			this->panelEmploye->Location = System::Drawing::Point(0, 1);
			this->panelEmploye->Margin = System::Windows::Forms::Padding(4);
			this->panelEmploye->Name = L"panelEmploye";
			this->panelEmploye->Size = System::Drawing::Size(1389, 688);
			this->panelEmploye->TabIndex = 9;
			// 
			// bRechercheIDemploye_p1
			// 
			this->bRechercheIDemploye_p1->Location = System::Drawing::Point(200, 113);
			this->bRechercheIDemploye_p1->Margin = System::Windows::Forms::Padding(4);
			this->bRechercheIDemploye_p1->Name = L"bRechercheIDemploye_p1";
			this->bRechercheIDemploye_p1->Size = System::Drawing::Size(116, 23);
			this->bRechercheIDemploye_p1->TabIndex = 2;
			this->bRechercheIDemploye_p1->Text = L"Rechercher";
			this->bRechercheIDemploye_p1->UseVisualStyleBackColor = true;
			this->bRechercheIDemploye_p1->Click += gcnew System::EventHandler(this, &Menu::bRechercheIDemploye_p1_Click);
			// 
			// tIDemploye_p1
			// 
			this->tIDemploye_p1->Location = System::Drawing::Point(181, 82);
			this->tIDemploye_p1->Margin = System::Windows::Forms::Padding(4);
			this->tIDemploye_p1->Name = L"tIDemploye_p1";
			this->tIDemploye_p1->Size = System::Drawing::Size(145, 22);
			this->tIDemploye_p1->TabIndex = 1;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(212, 63);
			this->label74->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(78, 17);
			this->label74->TabIndex = 61;
			this->label74->Text = L"ID employé";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(557, 607);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(65, 17);
			this->label28->TabIndex = 60;
			this->label28->Text = L"Message";
			// 
			// tBoxMessage_p1
			// 
			this->tBoxMessage_p1->Location = System::Drawing::Point(548, 623);
			this->tBoxMessage_p1->Margin = System::Windows::Forms::Padding(4);
			this->tBoxMessage_p1->Name = L"tBoxMessage_p1";
			this->tBoxMessage_p1->ReadOnly = true;
			this->tBoxMessage_p1->Size = System::Drawing::Size(831, 46);
			this->tBoxMessage_p1->TabIndex = 59;
			this->tBoxMessage_p1->Text = L"";
			// 
			// bRetour_p1
			// 
			this->bRetour_p1->Location = System::Drawing::Point(5, 4);
			this->bRetour_p1->Margin = System::Windows::Forms::Padding(4);
			this->bRetour_p1->Name = L"bRetour_p1";
			this->bRetour_p1->Size = System::Drawing::Size(49, 28);
			this->bRetour_p1->TabIndex = 16;
			this->bRetour_p1->Text = L"<<";
			this->bRetour_p1->UseVisualStyleBackColor = true;
			this->bRetour_p1->Click += gcnew System::EventHandler(this, &Menu::bRetour_p1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(548, 47);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 17);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Employé";
			// 
			// tTypeVoie_p1
			// 
			this->tTypeVoie_p1->Location = System::Drawing::Point(87, 416);
			this->tTypeVoie_p1->Margin = System::Windows::Forms::Padding(4);
			this->tTypeVoie_p1->Name = L"tTypeVoie_p1";
			this->tTypeVoie_p1->Size = System::Drawing::Size(145, 22);
			this->tTypeVoie_p1->TabIndex = 9;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(83, 395);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(90, 17);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Type de voie";
			// 
			// bAjouter_p1
			// 
			this->bAjouter_p1->Location = System::Drawing::Point(275, 533);
			this->bAjouter_p1->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter_p1->Name = L"bAjouter_p1";
			this->bAjouter_p1->Size = System::Drawing::Size(88, 135);
			this->bAjouter_p1->TabIndex = 13;
			this->bAjouter_p1->Text = L"Ajouter";
			this->bAjouter_p1->UseVisualStyleBackColor = true;
			this->bAjouter_p1->Click += gcnew System::EventHandler(this, &Menu::bAjouter_p1_Click);
			// 
			// bMaj_p1
			// 
			this->bMaj_p1->Location = System::Drawing::Point(161, 533);
			this->bMaj_p1->Margin = System::Windows::Forms::Padding(4);
			this->bMaj_p1->Name = L"bMaj_p1";
			this->bMaj_p1->Size = System::Drawing::Size(100, 63);
			this->bMaj_p1->TabIndex = 14;
			this->bMaj_p1->Text = L"Mise à jour";
			this->bMaj_p1->UseVisualStyleBackColor = true;
			this->bMaj_p1->Click += gcnew System::EventHandler(this, &Menu::bMaj_p1_Click);
			// 
			// bSupprimer_p1
			// 
			this->bSupprimer_p1->Location = System::Drawing::Point(161, 603);
			this->bSupprimer_p1->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimer_p1->Name = L"bSupprimer_p1";
			this->bSupprimer_p1->Size = System::Drawing::Size(100, 65);
			this->bSupprimer_p1->TabIndex = 15;
			this->bSupprimer_p1->Text = L"Supprimer";
			this->bSupprimer_p1->UseVisualStyleBackColor = true;
			this->bSupprimer_p1->Click += gcnew System::EventHandler(this, &Menu::bSupprimer_p1_Click);
			// 
			// tVille_p1
			// 
			this->tVille_p1->Location = System::Drawing::Point(265, 478);
			this->tVille_p1->Margin = System::Windows::Forms::Padding(4);
			this->tVille_p1->Name = L"tVille_p1";
			this->tVille_p1->Size = System::Drawing::Size(145, 22);
			this->tVille_p1->TabIndex = 12;
			// 
			// tCodePostal_p1
			// 
			this->tCodePostal_p1->Location = System::Drawing::Point(87, 478);
			this->tCodePostal_p1->Margin = System::Windows::Forms::Padding(4);
			this->tCodePostal_p1->Name = L"tCodePostal_p1";
			this->tCodePostal_p1->Size = System::Drawing::Size(145, 22);
			this->tCodePostal_p1->TabIndex = 11;
			// 
			// tNomVoie_p1
			// 
			this->tNomVoie_p1->Location = System::Drawing::Point(267, 416);
			this->tNomVoie_p1->Margin = System::Windows::Forms::Padding(4);
			this->tNomVoie_p1->Name = L"tNomVoie_p1";
			this->tNomVoie_p1->Size = System::Drawing::Size(145, 22);
			this->tNomVoie_p1->TabIndex = 10;
			// 
			// tCompAdresse_p1
			// 
			this->tCompAdresse_p1->Location = System::Drawing::Point(265, 354);
			this->tCompAdresse_p1->Margin = System::Windows::Forms::Padding(4);
			this->tCompAdresse_p1->Name = L"tCompAdresse_p1";
			this->tCompAdresse_p1->Size = System::Drawing::Size(145, 22);
			this->tCompAdresse_p1->TabIndex = 8;
			// 
			// tNumVoie_p1
			// 
			this->tNumVoie_p1->Location = System::Drawing::Point(87, 354);
			this->tNumVoie_p1->Margin = System::Windows::Forms::Padding(4);
			this->tNumVoie_p1->Name = L"tNumVoie_p1";
			this->tNumVoie_p1->Size = System::Drawing::Size(145, 22);
			this->tNumVoie_p1->TabIndex = 7;
			// 
			// tPrenomSuperieur_p1
			// 
			this->tPrenomSuperieur_p1->Location = System::Drawing::Point(265, 265);
			this->tPrenomSuperieur_p1->Margin = System::Windows::Forms::Padding(4);
			this->tPrenomSuperieur_p1->Name = L"tPrenomSuperieur_p1";
			this->tPrenomSuperieur_p1->Size = System::Drawing::Size(147, 22);
			this->tPrenomSuperieur_p1->TabIndex = 6;
			// 
			// tNomSuperieur_p1
			// 
			this->tNomSuperieur_p1->Location = System::Drawing::Point(87, 265);
			this->tNomSuperieur_p1->Margin = System::Windows::Forms::Padding(4);
			this->tNomSuperieur_p1->Name = L"tNomSuperieur_p1";
			this->tNomSuperieur_p1->Size = System::Drawing::Size(145, 22);
			this->tNomSuperieur_p1->TabIndex = 5;
			// 
			// tPrenom_p1
			// 
			this->tPrenom_p1->Location = System::Drawing::Point(265, 183);
			this->tPrenom_p1->Margin = System::Windows::Forms::Padding(4);
			this->tPrenom_p1->Name = L"tPrenom_p1";
			this->tPrenom_p1->Size = System::Drawing::Size(145, 22);
			this->tPrenom_p1->TabIndex = 4;
			// 
			// tNom_p1
			// 
			this->tNom_p1->Location = System::Drawing::Point(87, 183);
			this->tNom_p1->Margin = System::Windows::Forms::Padding(4);
			this->tNom_p1->Name = L"tNom_p1";
			this->tNom_p1->Size = System::Drawing::Size(145, 22);
			this->tNom_p1->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(265, 458);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 17);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Ville";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(83, 458);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 17);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Code postal";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(263, 330);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 17);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Complément d\'adresse";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(83, 330);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 17);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Numéro de voie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(263, 395);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 17);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Nom de voie";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(263, 245);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Prénom supérieur";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(83, 245);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Nom supérieur";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 164);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(83, 164);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Nom";
			// 
			// dEmploye_p1
			// 
			this->dEmploye_p1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dEmploye_p1->Location = System::Drawing::Point(551, 66);
			this->dEmploye_p1->Margin = System::Windows::Forms::Padding(4);
			this->dEmploye_p1->Name = L"dEmploye_p1";
			this->dEmploye_p1->RowHeadersWidth = 51;
			this->dEmploye_p1->Size = System::Drawing::Size(829, 485);
			this->dEmploye_p1->TabIndex = 0;
			// 
			// labelEmploye
			// 
			this->labelEmploye->AutoSize = true;
			this->labelEmploye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmploye->Location = System::Drawing::Point(61, 6);
			this->labelEmploye->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelEmploye->Name = L"labelEmploye";
			this->labelEmploye->Size = System::Drawing::Size(143, 25);
			this->labelEmploye->TabIndex = 0;
			this->labelEmploye->Text = L"Menu Employé";
			// 
			// panelClient
			// 
			this->panelClient->Controls->Add(this->label29);
			this->panelClient->Controls->Add(this->tBoxMessage_p2);
			this->panelClient->Controls->Add(this->bRetour_p2);
			this->panelClient->Controls->Add(this->bRechecher_p2);
			this->panelClient->Controls->Add(this->label23);
			this->panelClient->Controls->Add(this->tNumClient_p2);
			this->panelClient->Controls->Add(this->tDateNaissance_p2);
			this->panelClient->Controls->Add(this->label24);
			this->panelClient->Controls->Add(this->tTypeVoie_p2);
			this->panelClient->Controls->Add(this->label17);
			this->panelClient->Controls->Add(this->bAjouter_p2);
			this->panelClient->Controls->Add(this->bMaj_p2);
			this->panelClient->Controls->Add(this->bSupprimer_p2);
			this->panelClient->Controls->Add(this->tVille_p2);
			this->panelClient->Controls->Add(this->tCodePostal_p2);
			this->panelClient->Controls->Add(this->tNomVoie_p2);
			this->panelClient->Controls->Add(this->tCompAdresse_p2);
			this->panelClient->Controls->Add(this->tNumVoie_p2);
			this->panelClient->Controls->Add(this->tPrenom_p2);
			this->panelClient->Controls->Add(this->tNom_p2);
			this->panelClient->Controls->Add(this->label18);
			this->panelClient->Controls->Add(this->label19);
			this->panelClient->Controls->Add(this->label20);
			this->panelClient->Controls->Add(this->label21);
			this->panelClient->Controls->Add(this->label22);
			this->panelClient->Controls->Add(this->label25);
			this->panelClient->Controls->Add(this->label26);
			this->panelClient->Controls->Add(this->label27);
			this->panelClient->Controls->Add(this->label16);
			this->panelClient->Controls->Add(this->label15);
			this->panelClient->Controls->Add(this->dClient_p2);
			this->panelClient->Controls->Add(this->dAdresse_p2);
			this->panelClient->Location = System::Drawing::Point(0, 1);
			this->panelClient->Margin = System::Windows::Forms::Padding(4);
			this->panelClient->Name = L"panelClient";
			this->panelClient->Size = System::Drawing::Size(1389, 688);
			this->panelClient->TabIndex = 10;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(557, 607);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(65, 17);
			this->label29->TabIndex = 59;
			this->label29->Text = L"Message";
			// 
			// tBoxMessage_p2
			// 
			this->tBoxMessage_p2->Location = System::Drawing::Point(548, 623);
			this->tBoxMessage_p2->Margin = System::Windows::Forms::Padding(4);
			this->tBoxMessage_p2->Name = L"tBoxMessage_p2";
			this->tBoxMessage_p2->ReadOnly = true;
			this->tBoxMessage_p2->Size = System::Drawing::Size(831, 46);
			this->tBoxMessage_p2->TabIndex = 0;
			this->tBoxMessage_p2->Text = L"";
			// 
			// bRetour_p2
			// 
			this->bRetour_p2->Location = System::Drawing::Point(5, 4);
			this->bRetour_p2->Margin = System::Windows::Forms::Padding(4);
			this->bRetour_p2->Name = L"bRetour_p2";
			this->bRetour_p2->Size = System::Drawing::Size(49, 28);
			this->bRetour_p2->TabIndex = 15;
			this->bRetour_p2->Text = L"<<";
			this->bRetour_p2->UseVisualStyleBackColor = true;
			this->bRetour_p2->Click += gcnew System::EventHandler(this, &Menu::bRetour_p2_Click);
			// 
			// bRechecher_p2
			// 
			this->bRechecher_p2->Location = System::Drawing::Point(192, 113);
			this->bRechecher_p2->Margin = System::Windows::Forms::Padding(4);
			this->bRechecher_p2->Name = L"bRechecher_p2";
			this->bRechecher_p2->Size = System::Drawing::Size(101, 25);
			this->bRechecher_p2->TabIndex = 2;
			this->bRechecher_p2->Text = L"Rechercher";
			this->bRechecher_p2->UseVisualStyleBackColor = true;
			this->bRechecher_p2->Click += gcnew System::EventHandler(this, &Menu::bRechecher_p2_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(201, 62);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(81, 17);
			this->label23->TabIndex = 0;
			this->label23->Text = L"N° de client";
			// 
			// tNumClient_p2
			// 
			this->tNumClient_p2->Location = System::Drawing::Point(171, 81);
			this->tNumClient_p2->Margin = System::Windows::Forms::Padding(4);
			this->tNumClient_p2->Name = L"tNumClient_p2";
			this->tNumClient_p2->Size = System::Drawing::Size(145, 22);
			this->tNumClient_p2->TabIndex = 1;
			// 
			// tDateNaissance_p2
			// 
			this->tDateNaissance_p2->Location = System::Drawing::Point(84, 254);
			this->tDateNaissance_p2->Margin = System::Windows::Forms::Padding(4);
			this->tDateNaissance_p2->Name = L"tDateNaissance_p2";
			this->tDateNaissance_p2->Size = System::Drawing::Size(145, 22);
			this->tDateNaissance_p2->TabIndex = 5;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(80, 234);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(126, 17);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Date de naissance";
			// 
			// tTypeVoie_p2
			// 
			this->tTypeVoie_p2->Location = System::Drawing::Point(84, 407);
			this->tTypeVoie_p2->Margin = System::Windows::Forms::Padding(4);
			this->tTypeVoie_p2->Name = L"tTypeVoie_p2";
			this->tTypeVoie_p2->Size = System::Drawing::Size(145, 22);
			this->tTypeVoie_p2->TabIndex = 8;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(80, 386);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(90, 17);
			this->label17->TabIndex = 49;
			this->label17->Text = L"Type de voie";
			// 
			// bAjouter_p2
			// 
			this->bAjouter_p2->Location = System::Drawing::Point(267, 530);
			this->bAjouter_p2->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter_p2->Name = L"bAjouter_p2";
			this->bAjouter_p2->Size = System::Drawing::Size(88, 135);
			this->bAjouter_p2->TabIndex = 12;
			this->bAjouter_p2->Text = L"Ajouter";
			this->bAjouter_p2->UseVisualStyleBackColor = true;
			this->bAjouter_p2->Click += gcnew System::EventHandler(this, &Menu::bAjouter_p2_Click);
			// 
			// bMaj_p2
			// 
			this->bMaj_p2->Location = System::Drawing::Point(153, 530);
			this->bMaj_p2->Margin = System::Windows::Forms::Padding(4);
			this->bMaj_p2->Name = L"bMaj_p2";
			this->bMaj_p2->Size = System::Drawing::Size(100, 63);
			this->bMaj_p2->TabIndex = 13;
			this->bMaj_p2->Text = L"Mise à jour";
			this->bMaj_p2->UseVisualStyleBackColor = true;
			this->bMaj_p2->Click += gcnew System::EventHandler(this, &Menu::bMaj_p2_Click);
			// 
			// bSupprimer_p2
			// 
			this->bSupprimer_p2->Location = System::Drawing::Point(153, 601);
			this->bSupprimer_p2->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimer_p2->Name = L"bSupprimer_p2";
			this->bSupprimer_p2->Size = System::Drawing::Size(100, 65);
			this->bSupprimer_p2->TabIndex = 14;
			this->bSupprimer_p2->Text = L"Supprimer";
			this->bSupprimer_p2->UseVisualStyleBackColor = true;
			this->bSupprimer_p2->Click += gcnew System::EventHandler(this, &Menu::bSupprimer_p2_Click);
			// 
			// tVille_p2
			// 
			this->tVille_p2->Location = System::Drawing::Point(263, 469);
			this->tVille_p2->Margin = System::Windows::Forms::Padding(4);
			this->tVille_p2->Name = L"tVille_p2";
			this->tVille_p2->Size = System::Drawing::Size(145, 22);
			this->tVille_p2->TabIndex = 11;
			// 
			// tCodePostal_p2
			// 
			this->tCodePostal_p2->Location = System::Drawing::Point(84, 469);
			this->tCodePostal_p2->Margin = System::Windows::Forms::Padding(4);
			this->tCodePostal_p2->Name = L"tCodePostal_p2";
			this->tCodePostal_p2->Size = System::Drawing::Size(145, 22);
			this->tCodePostal_p2->TabIndex = 10;
			// 
			// tNomVoie_p2
			// 
			this->tNomVoie_p2->Location = System::Drawing::Point(264, 407);
			this->tNomVoie_p2->Margin = System::Windows::Forms::Padding(4);
			this->tNomVoie_p2->Name = L"tNomVoie_p2";
			this->tNomVoie_p2->Size = System::Drawing::Size(145, 22);
			this->tNomVoie_p2->TabIndex = 9;
			// 
			// tCompAdresse_p2
			// 
			this->tCompAdresse_p2->Location = System::Drawing::Point(263, 346);
			this->tCompAdresse_p2->Margin = System::Windows::Forms::Padding(4);
			this->tCompAdresse_p2->Name = L"tCompAdresse_p2";
			this->tCompAdresse_p2->Size = System::Drawing::Size(145, 22);
			this->tCompAdresse_p2->TabIndex = 7;
			// 
			// tNumVoie_p2
			// 
			this->tNumVoie_p2->Location = System::Drawing::Point(84, 346);
			this->tNumVoie_p2->Margin = System::Windows::Forms::Padding(4);
			this->tNumVoie_p2->Name = L"tNumVoie_p2";
			this->tNumVoie_p2->Size = System::Drawing::Size(145, 22);
			this->tNumVoie_p2->TabIndex = 6;
			// 
			// tPrenom_p2
			// 
			this->tPrenom_p2->Location = System::Drawing::Point(263, 190);
			this->tPrenom_p2->Margin = System::Windows::Forms::Padding(4);
			this->tPrenom_p2->Name = L"tPrenom_p2";
			this->tPrenom_p2->Size = System::Drawing::Size(145, 22);
			this->tPrenom_p2->TabIndex = 4;
			// 
			// tNom_p2
			// 
			this->tNom_p2->Location = System::Drawing::Point(84, 190);
			this->tNom_p2->Margin = System::Windows::Forms::Padding(4);
			this->tNom_p2->Name = L"tNom_p2";
			this->tNom_p2->Size = System::Drawing::Size(145, 22);
			this->tNom_p2->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(263, 449);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 17);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Ville";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(80, 449);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 17);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Code postal";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(260, 321);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(152, 17);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Complément d\'adresse";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(80, 321);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(108, 17);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Numéro de voie";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(260, 386);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(87, 17);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Nom de voie";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(260, 170);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(57, 17);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Prénom";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(80, 170);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 17);
			this->label26->TabIndex = 28;
			this->label26->Text = L"Nom";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(61, 6);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(117, 25);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Menu Client";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(549, 270);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 17);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Adresse";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(551, 28);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 17);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Client";
			// 
			// dClient_p2
			// 
			this->dClient_p2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dClient_p2->Location = System::Drawing::Point(551, 47);
			this->dClient_p2->Margin = System::Windows::Forms::Padding(4);
			this->dClient_p2->Name = L"dClient_p2";
			this->dClient_p2->RowHeadersWidth = 51;
			this->dClient_p2->Size = System::Drawing::Size(829, 206);
			this->dClient_p2->TabIndex = 0;
			// 
			// dAdresse_p2
			// 
			this->dAdresse_p2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dAdresse_p2->Location = System::Drawing::Point(551, 288);
			this->dAdresse_p2->Margin = System::Windows::Forms::Padding(4);
			this->dAdresse_p2->Name = L"dAdresse_p2";
			this->dAdresse_p2->RowHeadersWidth = 51;
			this->dAdresse_p2->Size = System::Drawing::Size(829, 288);
			this->dAdresse_p2->TabIndex = 0;
			// 
			// panelStock
			// 
			this->panelStock->Controls->Add(this->label53);
			this->panelStock->Controls->Add(this->tReferenceArticle_p4);
			this->panelStock->Controls->Add(this->bRechercheArticle_p4);
			this->panelStock->Controls->Add(this->label36);
			this->panelStock->Controls->Add(this->tBoxMessage_p4);
			this->panelStock->Controls->Add(this->bRetour_p4);
			this->panelStock->Controls->Add(this->label38);
			this->panelStock->Controls->Add(this->tTauxTVA_p4);
			this->panelStock->Controls->Add(this->label52);
			this->panelStock->Controls->Add(this->bAjouter_p4);
			this->panelStock->Controls->Add(this->bMaj_p4);
			this->panelStock->Controls->Add(this->bSupprimer_p4);
			this->panelStock->Controls->Add(this->tPrixHT_p4);
			this->panelStock->Controls->Add(this->tSeuilReap_p4);
			this->panelStock->Controls->Add(this->tQuantiteStock_p4);
			this->panelStock->Controls->Add(this->tDesignation_p4);
			this->panelStock->Controls->Add(this->tRechercheArticle_p4);
			this->panelStock->Controls->Add(this->label58);
			this->panelStock->Controls->Add(this->label60);
			this->panelStock->Controls->Add(this->label62);
			this->panelStock->Controls->Add(this->label71);
			this->panelStock->Controls->Add(this->label72);
			this->panelStock->Controls->Add(this->dArticle_p4);
			this->panelStock->Controls->Add(this->label73);
			this->panelStock->Location = System::Drawing::Point(0, 1);
			this->panelStock->Margin = System::Windows::Forms::Padding(4);
			this->panelStock->Name = L"panelStock";
			this->panelStock->Size = System::Drawing::Size(1389, 688);
			this->panelStock->TabIndex = 12;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(277, 218);
			this->label53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(116, 17);
			this->label53->TabIndex = 92;
			this->label53->Text = L"Référence article";
			// 
			// tReferenceArticle_p4
			// 
			this->tReferenceArticle_p4->Location = System::Drawing::Point(281, 236);
			this->tReferenceArticle_p4->Margin = System::Windows::Forms::Padding(4);
			this->tReferenceArticle_p4->Name = L"tReferenceArticle_p4";
			this->tReferenceArticle_p4->Size = System::Drawing::Size(144, 22);
			this->tReferenceArticle_p4->TabIndex = 4;
			// 
			// bRechercheArticle_p4
			// 
			this->bRechercheArticle_p4->Location = System::Drawing::Point(215, 135);
			this->bRechercheArticle_p4->Margin = System::Windows::Forms::Padding(4);
			this->bRechercheArticle_p4->Name = L"bRechercheArticle_p4";
			this->bRechercheArticle_p4->Size = System::Drawing::Size(99, 26);
			this->bRechercheArticle_p4->TabIndex = 2;
			this->bRechercheArticle_p4->Text = L"Rechercher";
			this->bRechercheArticle_p4->UseVisualStyleBackColor = true;
			this->bRechercheArticle_p4->Click += gcnew System::EventHandler(this, &Menu::bRechercheArticle_p4_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(557, 607);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(65, 17);
			this->label36->TabIndex = 89;
			this->label36->Text = L"Message";
			// 
			// tBoxMessage_p4
			// 
			this->tBoxMessage_p4->Location = System::Drawing::Point(548, 623);
			this->tBoxMessage_p4->Margin = System::Windows::Forms::Padding(4);
			this->tBoxMessage_p4->Name = L"tBoxMessage_p4";
			this->tBoxMessage_p4->ReadOnly = true;
			this->tBoxMessage_p4->Size = System::Drawing::Size(831, 46);
			this->tBoxMessage_p4->TabIndex = 0;
			this->tBoxMessage_p4->Text = L"";
			// 
			// bRetour_p4
			// 
			this->bRetour_p4->Location = System::Drawing::Point(5, 4);
			this->bRetour_p4->Margin = System::Windows::Forms::Padding(4);
			this->bRetour_p4->Name = L"bRetour_p4";
			this->bRetour_p4->Size = System::Drawing::Size(49, 28);
			this->bRetour_p4->TabIndex = 12;
			this->bRetour_p4->Text = L"<<";
			this->bRetour_p4->UseVisualStyleBackColor = true;
			this->bRetour_p4->Click += gcnew System::EventHandler(this, &Menu::bRetour_p4_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(549, 46);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(47, 17);
			this->label38->TabIndex = 86;
			this->label38->Text = L"Article";
			// 
			// tTauxTVA_p4
			// 
			this->tTauxTVA_p4->Location = System::Drawing::Point(100, 402);
			this->tTauxTVA_p4->Margin = System::Windows::Forms::Padding(4);
			this->tTauxTVA_p4->Name = L"tTauxTVA_p4";
			this->tTauxTVA_p4->Size = System::Drawing::Size(145, 22);
			this->tTauxTVA_p4->TabIndex = 7;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(96, 384);
			this->label52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(96, 17);
			this->label52->TabIndex = 84;
			this->label52->Text = L"Taux TVA (%)";
			// 
			// bAjouter_p4
			// 
			this->bAjouter_p4->Location = System::Drawing::Point(288, 485);
			this->bAjouter_p4->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter_p4->Name = L"bAjouter_p4";
			this->bAjouter_p4->Size = System::Drawing::Size(88, 135);
			this->bAjouter_p4->TabIndex = 9;
			this->bAjouter_p4->Text = L"Ajouter";
			this->bAjouter_p4->UseVisualStyleBackColor = true;
			this->bAjouter_p4->Click += gcnew System::EventHandler(this, &Menu::bAjouter_p4_Click);
			// 
			// bMaj_p4
			// 
			this->bMaj_p4->Location = System::Drawing::Point(175, 485);
			this->bMaj_p4->Margin = System::Windows::Forms::Padding(4);
			this->bMaj_p4->Name = L"bMaj_p4";
			this->bMaj_p4->Size = System::Drawing::Size(100, 63);
			this->bMaj_p4->TabIndex = 10;
			this->bMaj_p4->Text = L"Mise à jour";
			this->bMaj_p4->UseVisualStyleBackColor = true;
			this->bMaj_p4->Click += gcnew System::EventHandler(this, &Menu::bMaj_p4_Click);
			// 
			// bSupprimer_p4
			// 
			this->bSupprimer_p4->Location = System::Drawing::Point(175, 555);
			this->bSupprimer_p4->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimer_p4->Name = L"bSupprimer_p4";
			this->bSupprimer_p4->Size = System::Drawing::Size(100, 65);
			this->bSupprimer_p4->TabIndex = 11;
			this->bSupprimer_p4->Text = L"Supprimer";
			this->bSupprimer_p4->UseVisualStyleBackColor = true;
			this->bSupprimer_p4->Click += gcnew System::EventHandler(this, &Menu::bSupprimer_p4_Click);
			// 
			// tPrixHT_p4
			// 
			this->tPrixHT_p4->Location = System::Drawing::Point(280, 402);
			this->tPrixHT_p4->Margin = System::Windows::Forms::Padding(4);
			this->tPrixHT_p4->Name = L"tPrixHT_p4";
			this->tPrixHT_p4->Size = System::Drawing::Size(145, 22);
			this->tPrixHT_p4->TabIndex = 8;
			// 
			// tSeuilReap_p4
			// 
			this->tSeuilReap_p4->Location = System::Drawing::Point(99, 325);
			this->tSeuilReap_p4->Margin = System::Windows::Forms::Padding(4);
			this->tSeuilReap_p4->Name = L"tSeuilReap_p4";
			this->tSeuilReap_p4->Size = System::Drawing::Size(145, 22);
			this->tSeuilReap_p4->TabIndex = 5;
			// 
			// tQuantiteStock_p4
			// 
			this->tQuantiteStock_p4->Location = System::Drawing::Point(279, 325);
			this->tQuantiteStock_p4->Margin = System::Windows::Forms::Padding(4);
			this->tQuantiteStock_p4->Name = L"tQuantiteStock_p4";
			this->tQuantiteStock_p4->Size = System::Drawing::Size(147, 22);
			this->tQuantiteStock_p4->TabIndex = 6;
			// 
			// tDesignation_p4
			// 
			this->tDesignation_p4->Location = System::Drawing::Point(100, 236);
			this->tDesignation_p4->Margin = System::Windows::Forms::Padding(4);
			this->tDesignation_p4->Name = L"tDesignation_p4";
			this->tDesignation_p4->Size = System::Drawing::Size(144, 22);
			this->tDesignation_p4->TabIndex = 3;
			// 
			// tRechercheArticle_p4
			// 
			this->tRechercheArticle_p4->Location = System::Drawing::Point(188, 103);
			this->tRechercheArticle_p4->Margin = System::Windows::Forms::Padding(4);
			this->tRechercheArticle_p4->Name = L"tRechercheArticle_p4";
			this->tRechercheArticle_p4->Size = System::Drawing::Size(145, 22);
			this->tRechercheArticle_p4->TabIndex = 1;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(276, 384);
			this->label58->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(68, 17);
			this->label58->TabIndex = 69;
			this->label58->Text = L"Prix HT ()";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(85, 308);
			this->label60->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(176, 17);
			this->label60->TabIndex = 68;
			this->label60->Text = L"Seuil réapprovisionnement";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(277, 306);
			this->label62->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(99, 17);
			this->label62->TabIndex = 66;
			this->label62->Text = L"Quantité stock";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(96, 217);
			this->label71->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(83, 17);
			this->label71->TabIndex = 64;
			this->label71->Text = L"Désignation";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(203, 84);
			this->label72->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(116, 17);
			this->label72->TabIndex = 63;
			this->label72->Text = L"Référence article";
			// 
			// dArticle_p4
			// 
			this->dArticle_p4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dArticle_p4->Location = System::Drawing::Point(551, 63);
			this->dArticle_p4->Margin = System::Windows::Forms::Padding(4);
			this->dArticle_p4->Name = L"dArticle_p4";
			this->dArticle_p4->RowHeadersWidth = 51;
			this->dArticle_p4->Size = System::Drawing::Size(829, 485);
			this->dArticle_p4->TabIndex = 0;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(61, 6);
			this->label73->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(117, 25);
			this->label73->TabIndex = 61;
			this->label73->Text = L"Menu Stock";
			// 
			// panelStatistiques
			// 
			this->panelStatistiques->Controls->Add(this->label70);
			this->panelStatistiques->Controls->Add(this->dProduitsSousSeuil_p5);
			this->panelStatistiques->Controls->Add(this->label61);
			this->panelStatistiques->Controls->Add(this->dArticlesMoinsVendus);
			this->panelStatistiques->Controls->Add(this->label57);
			this->panelStatistiques->Controls->Add(this->dArticlesPlusVendus_p5);
			this->panelStatistiques->Controls->Add(this->label85);
			this->panelStatistiques->Controls->Add(this->label87);
			this->panelStatistiques->Controls->Add(this->dValeurAchatStock_p5);
			this->panelStatistiques->Controls->Add(this->label86);
			this->panelStatistiques->Controls->Add(this->dValeurCo_p5);
			this->panelStatistiques->Controls->Add(this->dPanierMoyen_p5);
			this->panelStatistiques->Controls->Add(this->bRetour_p5);
			this->panelStatistiques->Controls->Add(this->label82);
			this->panelStatistiques->Controls->Add(this->dProduitSousSeuil_p5);
			this->panelStatistiques->Controls->Add(this->label84);
			this->panelStatistiques->Controls->Add(this->dChiffreAffaireMois_p5);
			this->panelStatistiques->Controls->Add(this->dMontantAchatClient_p5);
			this->panelStatistiques->Location = System::Drawing::Point(0, 1);
			this->panelStatistiques->Margin = System::Windows::Forms::Padding(4);
			this->panelStatistiques->Name = L"panelStatistiques";
			this->panelStatistiques->Size = System::Drawing::Size(1389, 688);
			this->panelStatistiques->TabIndex = 13;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(85, 246);
			this->label70->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(277, 17);
			this->label70->TabIndex = 104;
			this->label70->Text = L"Produits sous le seuil d\'approvisionnement";
			// 
			// dProduitsSousSeuil_p5
			// 
			this->dProduitsSousSeuil_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dProduitsSousSeuil_p5->Location = System::Drawing::Point(89, 266);
			this->dProduitsSousSeuil_p5->Margin = System::Windows::Forms::Padding(4);
			this->dProduitsSousSeuil_p5->Name = L"dProduitsSousSeuil_p5";
			this->dProduitsSousSeuil_p5->RowHeadersWidth = 51;
			this->dProduitsSousSeuil_p5->Size = System::Drawing::Size(561, 156);
			this->dProduitsSousSeuil_p5->TabIndex = 103;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(719, 469);
			this->label61->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(167, 17);
			this->label61->TabIndex = 102;
			this->label61->Text = L"Articles les moins vendus";
			// 
			// dArticlesMoinsVendus
			// 
			this->dArticlesMoinsVendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dArticlesMoinsVendus->Location = System::Drawing::Point(723, 487);
			this->dArticlesMoinsVendus->Margin = System::Windows::Forms::Padding(4);
			this->dArticlesMoinsVendus->Name = L"dArticlesMoinsVendus";
			this->dArticlesMoinsVendus->RowHeadersWidth = 51;
			this->dArticlesMoinsVendus->Size = System::Drawing::Size(561, 156);
			this->dArticlesMoinsVendus->TabIndex = 101;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(85, 469);
			this->label57->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(156, 17);
			this->label57->TabIndex = 100;
			this->label57->Text = L"Articles les plus vendus";
			// 
			// dArticlesPlusVendus_p5
			// 
			this->dArticlesPlusVendus_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dArticlesPlusVendus_p5->Location = System::Drawing::Point(89, 487);
			this->dArticlesPlusVendus_p5->Margin = System::Windows::Forms::Padding(4);
			this->dArticlesPlusVendus_p5->Name = L"dArticlesPlusVendus_p5";
			this->dArticlesPlusVendus_p5->RowHeadersWidth = 51;
			this->dArticlesPlusVendus_p5->Size = System::Drawing::Size(561, 156);
			this->dArticlesPlusVendus_p5->TabIndex = 99;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(1049, 133);
			this->label85->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(225, 17);
			this->label85->TabIndex = 98;
			this->label85->Text = L"Chiffre d\'affaire du mois précédent";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(447, 135);
			this->label87->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(156, 17);
			this->label87->TabIndex = 97;
			this->label87->Text = L"Valeur d\'achat du stock";
			// 
			// dValeurAchatStock_p5
			// 
			this->dValeurAchatStock_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dValeurAchatStock_p5->Location = System::Drawing::Point(404, 151);
			this->dValeurAchatStock_p5->Margin = System::Windows::Forms::Padding(4);
			this->dValeurAchatStock_p5->Name = L"dValeurAchatStock_p5";
			this->dValeurAchatStock_p5->RowHeadersWidth = 51;
			this->dValeurAchatStock_p5->Size = System::Drawing::Size(247, 60);
			this->dValeurAchatStock_p5->TabIndex = 96;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(116, 134);
			this->label86->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(189, 17);
			this->label86->TabIndex = 95;
			this->label86->Text = L"Valeur commerciale du stock";
			// 
			// dValeurCo_p5
			// 
			this->dValeurCo_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dValeurCo_p5->Location = System::Drawing::Point(89, 150);
			this->dValeurCo_p5->Margin = System::Windows::Forms::Padding(4);
			this->dValeurCo_p5->Name = L"dValeurCo_p5";
			this->dValeurCo_p5->RowHeadersWidth = 51;
			this->dValeurCo_p5->Size = System::Drawing::Size(247, 60);
			this->dValeurCo_p5->TabIndex = 94;
			// 
			// dPanierMoyen_p5
			// 
			this->dPanierMoyen_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dPanierMoyen_p5->Location = System::Drawing::Point(723, 151);
			this->dPanierMoyen_p5->Margin = System::Windows::Forms::Padding(4);
			this->dPanierMoyen_p5->Name = L"dPanierMoyen_p5";
			this->dPanierMoyen_p5->RowHeadersWidth = 51;
			this->dPanierMoyen_p5->Size = System::Drawing::Size(247, 60);
			this->dPanierMoyen_p5->TabIndex = 92;
			// 
			// bRetour_p5
			// 
			this->bRetour_p5->Location = System::Drawing::Point(5, 4);
			this->bRetour_p5->Margin = System::Windows::Forms::Padding(4);
			this->bRetour_p5->Name = L"bRetour_p5";
			this->bRetour_p5->Size = System::Drawing::Size(49, 28);
			this->bRetour_p5->TabIndex = 1;
			this->bRetour_p5->Text = L"<<";
			this->bRetour_p5->UseVisualStyleBackColor = true;
			this->bRetour_p5->Click += gcnew System::EventHandler(this, &Menu::bRetour_p5_Click);
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(61, 6);
			this->label82->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(168, 25);
			this->label82->TabIndex = 64;
			this->label82->Text = L"Menu Statistiques";
			// 
			// dProduitSousSeuil_p5
			// 
			this->dProduitSousSeuil_p5->AutoSize = true;
			this->dProduitSousSeuil_p5->Location = System::Drawing::Point(719, 246);
			this->dProduitSousSeuil_p5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dProduitSousSeuil_p5->Name = L"dProduitSousSeuil_p5";
			this->dProduitSousSeuil_p5->Size = System::Drawing::Size(191, 17);
			this->dProduitSousSeuil_p5->TabIndex = 63;
			this->dProduitSousSeuil_p5->Text = L"Montant total achat par client";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(789, 132);
			this->label84->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(109, 17);
			this->label84->TabIndex = 62;
			this->label84->Text = L"Panier Moyen ()";
			// 
			// dChiffreAffaireMois_p5
			// 
			this->dChiffreAffaireMois_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dChiffreAffaireMois_p5->Location = System::Drawing::Point(1037, 153);
			this->dChiffreAffaireMois_p5->Margin = System::Windows::Forms::Padding(4);
			this->dChiffreAffaireMois_p5->Name = L"dChiffreAffaireMois_p5";
			this->dChiffreAffaireMois_p5->RowHeadersWidth = 51;
			this->dChiffreAffaireMois_p5->Size = System::Drawing::Size(247, 60);
			this->dChiffreAffaireMois_p5->TabIndex = 61;
			// 
			// dMontantAchatClient_p5
			// 
			this->dMontantAchatClient_p5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dMontantAchatClient_p5->Location = System::Drawing::Point(723, 266);
			this->dMontantAchatClient_p5->Margin = System::Windows::Forms::Padding(4);
			this->dMontantAchatClient_p5->Name = L"dMontantAchatClient_p5";
			this->dMontantAchatClient_p5->RowHeadersWidth = 51;
			this->dMontantAchatClient_p5->Size = System::Drawing::Size(561, 156);
			this->dMontantAchatClient_p5->TabIndex = 60;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// panelSimulation
			// 
			this->panelSimulation->Controls->Add(this->bCalcul_p6);
			this->panelSimulation->Controls->Add(this->label80);
			this->panelSimulation->Controls->Add(this->label79);
			this->panelSimulation->Controls->Add(this->label78);
			this->panelSimulation->Controls->Add(this->label77);
			this->panelSimulation->Controls->Add(this->label76);
			this->panelSimulation->Controls->Add(this->dSimulation_p6);
			this->panelSimulation->Controls->Add(this->cbMarge_p6);
			this->panelSimulation->Controls->Add(this->cbRemiseComm_p6);
			this->panelSimulation->Controls->Add(this->cbDemarque_p6);
			this->panelSimulation->Controls->Add(this->cbTVA_p6);
			this->panelSimulation->Controls->Add(this->bRetour_p6);
			this->panelSimulation->Controls->Add(this->label75);
			this->panelSimulation->Location = System::Drawing::Point(0, 1);
			this->panelSimulation->Margin = System::Windows::Forms::Padding(4);
			this->panelSimulation->Name = L"panelSimulation";
			this->panelSimulation->Size = System::Drawing::Size(1389, 688);
			this->panelSimulation->TabIndex = 14;
			// 
			// bCalcul_p6
			// 
			this->bCalcul_p6->Location = System::Drawing::Point(648, 340);
			this->bCalcul_p6->Name = L"bCalcul_p6";
			this->bCalcul_p6->Size = System::Drawing::Size(104, 46);
			this->bCalcul_p6->TabIndex = 70;
			this->bCalcul_p6->Text = L"Calcul";
			this->bCalcul_p6->UseVisualStyleBackColor = true;
			this->bCalcul_p6->Click += gcnew System::EventHandler(this, &Menu::bCalcul_p6_Click);
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(405, 434);
			this->label80->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(554, 20);
			this->label80->TabIndex = 69;
			this->label80->Text = L"Résultat de la simulation de la variation du prix total du stock commercial";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(1087, 233);
			this->label79->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(184, 24);
			this->label79->TabIndex = 68;
			this->label79->Text = L"Démarque inconnue";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(748, 233);
			this->label78->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(188, 24);
			this->label78->TabIndex = 67;
			this->label78->Text = L"Remise commerciale";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(421, 233);
			this->label77->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(178, 24);
			this->label77->TabIndex = 66;
			this->label77->Text = L"Marge commerciale";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(189, 233);
			this->label76->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(48, 24);
			this->label76->TabIndex = 65;
			this->label76->Text = L"TVA";
			// 
			// dSimulation_p6
			// 
			this->dSimulation_p6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dSimulation_p6->Location = System::Drawing::Point(588, 470);
			this->dSimulation_p6->Margin = System::Windows::Forms::Padding(4);
			this->dSimulation_p6->Name = L"dSimulation_p6";
			this->dSimulation_p6->RowHeadersWidth = 51;
			this->dSimulation_p6->Size = System::Drawing::Size(233, 81);
			this->dSimulation_p6->TabIndex = 0;
			// 
			// cbMarge_p6
			// 
			this->cbMarge_p6->FormattingEnabled = true;
			this->cbMarge_p6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5 %", L"10 %", L"15 %" });
			this->cbMarge_p6->Location = System::Drawing::Point(457, 258);
			this->cbMarge_p6->Margin = System::Windows::Forms::Padding(4);
			this->cbMarge_p6->Name = L"cbMarge_p6";
			this->cbMarge_p6->Size = System::Drawing::Size(109, 24);
			this->cbMarge_p6->TabIndex = 2;
			// 
			// cbRemiseComm_p6
			// 
			this->cbRemiseComm_p6->FormattingEnabled = true;
			this->cbRemiseComm_p6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0 %", L"5 %", L"6 %" });
			this->cbRemiseComm_p6->Location = System::Drawing::Point(787, 258);
			this->cbRemiseComm_p6->Margin = System::Windows::Forms::Padding(4);
			this->cbRemiseComm_p6->Name = L"cbRemiseComm_p6";
			this->cbRemiseComm_p6->Size = System::Drawing::Size(109, 24);
			this->cbRemiseComm_p6->TabIndex = 3;
			// 
			// cbDemarque_p6
			// 
			this->cbDemarque_p6->FormattingEnabled = true;
			this->cbDemarque_p6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2 %", L"3 %", L"5 %" });
			this->cbDemarque_p6->Location = System::Drawing::Point(1123, 258);
			this->cbDemarque_p6->Margin = System::Windows::Forms::Padding(4);
			this->cbDemarque_p6->Name = L"cbDemarque_p6";
			this->cbDemarque_p6->Size = System::Drawing::Size(109, 24);
			this->cbDemarque_p6->TabIndex = 4;
			// 
			// cbTVA_p6
			// 
			this->cbTVA_p6->FormattingEnabled = true;
			this->cbTVA_p6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"20 %", L"10 %", L"5 %" });
			this->cbTVA_p6->Location = System::Drawing::Point(157, 258);
			this->cbTVA_p6->Margin = System::Windows::Forms::Padding(4);
			this->cbTVA_p6->Name = L"cbTVA_p6";
			this->cbTVA_p6->Size = System::Drawing::Size(109, 24);
			this->cbTVA_p6->TabIndex = 1;
			// 
			// bRetour_p6
			// 
			this->bRetour_p6->Location = System::Drawing::Point(5, 4);
			this->bRetour_p6->Margin = System::Windows::Forms::Padding(4);
			this->bRetour_p6->Name = L"bRetour_p6";
			this->bRetour_p6->Size = System::Drawing::Size(49, 28);
			this->bRetour_p6->TabIndex = 5;
			this->bRetour_p6->Text = L"<<";
			this->bRetour_p6->UseVisualStyleBackColor = true;
			this->bRetour_p6->Click += gcnew System::EventHandler(this, &Menu::bRetour_p6_Click);
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(61, 6);
			this->label75->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(158, 25);
			this->label75->TabIndex = 58;
			this->label75->Text = L"Menu Simulation";
			// 
			// bCopie_p3
			// 
			this->bCopie_p3->Location = System::Drawing::Point(75, 447);
			this->bCopie_p3->Name = L"bCopie_p3";
			this->bCopie_p3->Size = System::Drawing::Size(75, 23);
			this->bCopie_p3->TabIndex = 144;
			this->bCopie_p3->Text = L"Copie";
			this->bCopie_p3->UseVisualStyleBackColor = true;
			this->bCopie_p3->Click += gcnew System::EventHandler(this, &Menu::bCopie_p3_Click);

			// 
			// Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1392, 692);
			this->Controls->Add(this->panelSimulation);
			this->Controls->Add(this->panelClient);
			this->Controls->Add(this->panelCommande);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelStatistiques);
			this->Controls->Add(this->panelStock);
			this->Controls->Add(this->panelEmploye);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Menu";
			this->Text = L"Logiciel de gestion";
			this->Load += gcnew System::EventHandler(this, &Menu::Menu_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelMenu->PerformLayout();
			this->panelCommande->ResumeLayout(false);
			this->panelCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailPaiement_p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dDetailCommande_p3))->EndInit();
			this->panelEmploye->ResumeLayout(false);
			this->panelEmploye->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dEmploye_p1))->EndInit();
			this->panelClient->ResumeLayout(false);
			this->panelClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dClient_p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dAdresse_p2))->EndInit();
			this->panelStock->ResumeLayout(false);
			this->panelStock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticle_p4))->EndInit();
			this->panelStatistiques->ResumeLayout(false);
			this->panelStatistiques->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dProduitsSousSeuil_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticlesMoinsVendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dArticlesPlusVendus_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dValeurAchatStock_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dValeurCo_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dPanierMoyen_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dChiffreAffaireMois_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dMontantAchatClient_p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->panelSimulation->ResumeLayout(false);
			this->panelSimulation->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dSimulation_p6))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion

	private: void resetForm(void) {
		this->errorProvider1->Clear();
		this->tBoxMessage_p1->Text = "";
		this->tBoxMessage_p2->Text = "";
		this->tBoxMessage_p3->Text = "";
		this->tBoxMessage_p4->Text = "";
	}

	private: System::Void Menu_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelEmploye->Hide();
		this->panelClient->Hide();
		this->panelCommande->Hide();
		this->panelStatistiques->Hide();
		this->panelStock->Hide();
		this->panelSimulation->Hide();
		this->panelMenu->Show();
	}

	//=====================================	Employe ============================================================================

	private: System::Void buttonEmploye_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelMenu->Hide();
		this->panelEmploye->Show();
		this->gestion = gcnew Services::GestionEmploye();
		this->loadDataEmploye();
	}

	private: void loadDataEmploye(void) {
		this->dEmploye_p1->DataSource = this->gestion->liste(0);
		this->dEmploye_p1->DataMember = "Employe";
	}

	private: void resetEmploye(void) {
		this->tNom_p1->Text = "";
		this->tPrenom_p1->Text = "";
		this->tNomSuperieur_p1->Text = "";
		this->tPrenomSuperieur_p1->Text = "";
		this->tNumVoie_p1->Text = "";
		this->tCompAdresse_p1->Text = "";
		this->tTypeVoie_p1->Text = "";
		this->tNomVoie_p1->Text = "";
		this->tCodePostal_p1->Text = "";
		this->tVille_p1->Text = "";
	}

	private: System::Void bRechercheIDemploye_p1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->resetForm();
			bool find = 0;
			if (Convert::ToInt32(this->tIDemploye_p1->Text->Trim()) > 0) {
				for (int i = 0; i < this->dEmploye_p1->RowCount-1; i++) {
					if (this->tIDemploye_p1->Text->Trim() == this->dEmploye_p1->Rows[i]->Cells[0]->Value->ToString()) {
						this->dEmploye_p1->CurrentCell = this->dEmploye_p1->Rows[i]->Cells[0];
						find = 1;
					}
				}
				if (!find) {
					this->resetEmploye();
					throw gcnew String("Cet employé n'existe pas !");
				}
				else {
					this->tBoxMessage_p1->Text = "Opération réussie !";
				}
			}
			this->tNom_p1->Text = this->dEmploye_p1->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tPrenom_p1->Text = this->dEmploye_p1->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[1];
			this->tNomSuperieur_p1->Text = this->dEmploye_p1->CurrentRow->Cells[2]->Value->ToString()->Split(' ')[0];
			this->tPrenomSuperieur_p1->Text = this->dEmploye_p1->CurrentRow->Cells[2]->Value->ToString()->Split(' ')[1];
			this->tNumVoie_p1->Text = this->dEmploye_p1->CurrentRow->Cells[4]->Value->ToString()->Split(' ')[0];
			this->tCompAdresse_p1->Text = this->dEmploye_p1->CurrentRow->Cells[4]->Value->ToString()->Split(' ')[1];
			this->tTypeVoie_p1->Text = this->dEmploye_p1->CurrentRow->Cells[5]->Value->ToString()->Split(' ')[0];
			this->tNomVoie_p1->Text = this->dEmploye_p1->CurrentRow->Cells[5]->Value->ToString()->Split(' ')[1];
			this->tCodePostal_p1->Text = this->dEmploye_p1->CurrentRow->Cells[6]->Value->ToString()->Split(' ')[0];
			this->tVille_p1->Text = this->dEmploye_p1->CurrentRow->Cells[6]->Value->ToString()->Split(' ')[1];
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bRechercheIDemploye_p1, e);
		}
		catch (FormatException^) {
			this->errorProvider1->SetError(this->bRechercheIDemploye_p1, "Un ID doit être un réel !");
		}
	}

	private: System::Void bAjouter_p1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionEmploye(this->tNom_p1->Text->Trim(), this->tPrenom_p1->Text->Trim(), this->tNomSuperieur_p1->Text->Trim(), this->tPrenomSuperieur_p1->Text->Trim(), DateTime::Today, gcnew Adresse(this->tNumVoie_p1->Text->Trim(), this->tCompAdresse_p1->Text->Trim(), this->tTypeVoie_p1->Text->Trim(), this->tNomVoie_p1->Text->Trim(), this->tCodePostal_p1->Text->Trim(), this->tVille_p1->Text->Trim()));
			this->gestion->ajouter();
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p1, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p1->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p1->Text = "Opération échouée !";
			}
		}
		this->loadDataEmploye();
	}

	private: System::Void bSupprimer_p1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionEmploye(this->tNom_p1->Text->Trim(), this->tPrenom_p1->Text->Trim());
			this->gestion->supprimer();
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p1, e);
		}
		catch (SqlException^) {
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p1->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p1->Text = "Opération échouée !";
			}
		}
		this->loadDataEmploye();
	}

	private: System::Void bMaj_p1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			bool find = 0;
			if (Convert::ToInt32(this->tIDemploye_p1->Text->Trim()) > 0) {
				for (int i = 0; i < this->dEmploye_p1->RowCount - 1; i++) {
					if (this->tIDemploye_p1->Text->Trim() == this->dEmploye_p1->Rows[i]->Cells[0]->Value->ToString()) {
						find = 1;
					}
				}
				if (!find) {
					this->resetEmploye();
					throw gcnew String("Cet employé n'existe pas !");
				}
				this->gestion = gcnew Services::GestionEmploye(this->tNom_p1->Text->Trim(), this->tPrenom_p1->Text->Trim(), this->tNomSuperieur_p1->Text->Trim(), this->tPrenomSuperieur_p1->Text->Trim(), DateTime::Today, gcnew Adresse(this->tNumVoie_p1->Text->Trim(), this->tCompAdresse_p1->Text->Trim(), this->tTypeVoie_p1->Text->Trim(), this->tNomVoie_p1->Text->Trim(), this->tCodePostal_p1->Text->Trim(), this->tVille_p1->Text->Trim()));
				this->gestion->modifier(this->tIDemploye_p1->Text);
			}
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p1, e);
		}
		catch (FormatException^) {
			this->errorProvider1->SetError(this->bRechercheIDemploye_p1, "Un ID doit être un réel !");
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p1->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p1->Text = "Opération échouée !";
			}
		}
		this->loadDataEmploye();
	}

	//=====================================	Client ============================================================================

	private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelMenu->Hide();
		this->panelClient->Show();
		this->gestion = gcnew Services::GestionClient();
		this->loadDataClient();
		for (int i = 0; i < this->dClient_p2->RowCount - 1; i++) {
			if (this->dClient_p2->Rows[i]->Cells[2]->Value->ToString()->Substring(0,2) == Convert::ToString(DateTime::Today)->Substring(0,2) && this->dClient_p2->Rows[i]->Cells[2]->Value->ToString()->Substring(2, 2) == Convert::ToString(DateTime::Today)->Substring(2, 2)) {
				this->tBoxMessage_p2->Text += "C'est l'anniversaire de " + this->dClient_p2->Rows[i]->Cells[1]->Value->ToString() + " aujourd'hui !\n";
			}
		}
	}

	private: void loadDataClient(void) {
		this->dClient_p2->DataSource = this->gestion->liste(0);
		this->dClient_p2->DataMember = "Client";
		this->dAdresse_p2->DataSource = nullptr;
	}

	private: void loadDataClientAll(void) {
		this->dClient_p2->DataSource = this->gestion->liste(1);
		this->dClient_p2->DataMember = "Client";
		this->dAdresse_p2->DataSource = this->gestion->liste(2);
		this->dAdresse_p2->DataMember = "Client";
	}

	private: void resetClient(void) {
		this->tNom_p2->Text = "";
		this->tPrenom_p2->Text = "";
		this->tDateNaissance_p2->Text = "";
		this->tNumVoie_p2->Text = "";
		this->tCompAdresse_p2->Text = "";
		this->tTypeVoie_p2->Text = "";
		this->tNomVoie_p2->Text = "";
		this->tCodePostal_p2->Text = "";
		this->tVille_p2->Text = "";
	}

	private: System::Void bRechecher_p2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		this->loadDataClient();
		try {
			bool find = 0;
			if (Convert::ToInt32(this->tNumClient_p2->Text->Trim()) > 0) {
				for (int i = 0; i < this->dClient_p2->RowCount - 1; i++) {
					if (this->tNumClient_p2->Text->Trim() == this->dClient_p2->Rows[i]->Cells[0]->Value->ToString()) {
						this->dClient_p2->CurrentCell = this->dClient_p2->Rows[i]->Cells[0];
						find = 1;
					}
				}
				if (!find) {
					this->resetClient();
					throw gcnew String("Ce client n\'existe pas !");
				}
			}
			this->tNom_p2->Text = this->dClient_p2->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tPrenom_p2->Text = this->dClient_p2->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[1];
			this->tDateNaissance_p2->Text = this->dClient_p2->CurrentRow->Cells[2]->Value->ToString()->Split(' ')[0];
			this->gestion = gcnew Services::GestionClient(this->tNom_p2->Text, this->tPrenom_p2->Text);
			this->loadDataClientAll();
			this->tNumVoie_p2->Text = this->dAdresse_p2->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tCompAdresse_p2->Text = this->dAdresse_p2->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[1];
			this->tTypeVoie_p2->Text = this->dAdresse_p2->CurrentRow->Cells[2]->Value->ToString()->Split(' ')[0];
			this->tNomVoie_p2->Text = this->dAdresse_p2->CurrentRow->Cells[2]->Value->ToString()->Split(' ')[1];
			this->tCodePostal_p2->Text = this->dAdresse_p2->CurrentRow->Cells[3]->Value->ToString()->Split(' ')[0];
			this->tVille_p2->Text = this->dAdresse_p2->CurrentRow->Cells[3]->Value->ToString()->Split(' ')[1];
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bRechecher_p2, e);
		}
		catch (FormatException^) {
			this->errorProvider1->SetError(this->bRechecher_p2, "Un ID doit être un réel !");
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p2->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p2->Text = "Opération échouée !";
			}
		}
	}

	private: System::Void bAjouter_p2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionClient(this->tNom_p2->Text->Trim(), this->tPrenom_p2->Text->Trim(), Convert::ToDateTime(this->tDateNaissance_p2->Text->Trim()), gcnew Adresse(this->tNumVoie_p2->Text->Trim(), this->tCompAdresse_p2->Text->Trim(), this->tTypeVoie_p2->Text->Trim(), this->tNomVoie_p2->Text->Trim(), this->tCodePostal_p2->Text->Trim(), this->tVille_p2->Text->Trim()));
			this->gestion->ajouter();
		}
		catch (FormatException^) {
			this->errorProvider1->SetError(this->bAjouter_p2, "La date n\'est pas valide !");
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p2, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p2->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p2->Text = "Opération échouée !";
			}
		}
		this->loadDataClientAll();
	}

	private: System::Void bSupprimer_p2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionClient(this->tNom_p2->Text->Trim(), this->tPrenom_p2->Text->Trim());
			this->gestion->supprimer();
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p2, e);
		}
		catch (SqlException^) {
			this->errorProvider1->SetError(this->bAjouter_p2, "Ce client est liée avec certaines commandes encore existantes !");
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p2->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p2->Text = "Opération échouée !";
			}
		}
		this->loadDataClient();
	}

	private: System::Void bMaj_p2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			bool find = 0;
			if (Convert::ToInt32(this->tNumClient_p2->Text->Trim()) > 0) {
				for (int i = 0; i < this->dClient_p2->RowCount - 1; i++) {
					if (this->tNumClient_p2->Text->Trim() == this->dClient_p2->Rows[i]->Cells[0]->Value->ToString()) {
						find = 1;
					}
				}
				if (!find) {
					this->resetClient();
					throw gcnew String("Ce client n\'existe pas !");
				}
				this->gestion = gcnew Services::GestionClient(this->tNom_p2->Text->Trim(), this->tPrenom_p2->Text->Trim(), Convert::ToDateTime(this->tDateNaissance_p2->Text->Trim()), gcnew Adresse(this->tNumVoie_p2->Text->Trim(), this->tCompAdresse_p2->Text->Trim(), this->tTypeVoie_p2->Text->Trim(), this->tNomVoie_p2->Text->Trim(), this->tCodePostal_p2->Text->Trim(), this->tVille_p2->Text->Trim()));
				this->gestion->modifier(this->tNumClient_p2->Text->Trim());
			}
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p2, e);
		}
		catch (FormatException^) {
			this->errorProvider1->SetError(this->bRechecher_p2, "Un ID doit être un réel !");
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p2->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p2->Text = "Opération échouée !";
			}
		}
		this->loadDataClientAll();
	}

	//=====================================	Commande ============================================================================

	private: System::Void buttonCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelMenu->Hide();
		this->panelCommande->Show();
		this->gestion = gcnew Services::GestionCommande();
		this->loadDataCommande();
	}

	private: void loadDataCommande(void) {
		this->dDetailCommande_p3->DataSource = this->gestion->liste(0);
		this->dDetailCommande_p3->DataMember = "Commande";
		this->dCommande->DataSource = nullptr;
		this->dDetailPaiement_p3->DataSource = nullptr;
	}

	private: void loadDataCommandeAll(void) {
		this->dDetailCommande_p3->DataSource = this->gestion->liste(1);
		this->dDetailCommande_p3->DataMember = "Commande";
		this->dCommande->DataSource = this->gestion->liste(2);
		this->dCommande->DataMember = "Commande";
		this->dDetailPaiement_p3->DataSource = this->gestion->liste(3);
		this->dDetailPaiement_p3->DataMember = "Commande";
	}

	private: void resetCommande(void) {
		this->tNom_p3->Text = "";
		this->tPrenom_p3->Text = "";
		this->tDateLivraison_p3->Text = "";
		this->tDatePaiement_p3->Text = "";
		this->tDernierSolde_p3->Text = "";
		this->tNumVoieFacturation_p3->Text = "";
		this->tComplementFacturation_p3->Text = "";
		this->tTypeVoieFacturation_p3->Text = "";
		this->tNomVoieFacturation_p3->Text = "";
		this->tCodePostalFacturation_p3->Text = "";
		this->tCodePostalLivraison_p3->Text = "";
		this->tVilleFacturation_p3->Text = "";
		this->tNumVoieLivraison_p3->Text = "";
		this->tComplementLivraison_p3->Text = "";
		this->tTypeVoieLivraison_p3->Text = "";
		this->tNomVoieLivraison_p3->Text = "";
		this->tCodePostalLivraison_p3->Text = "";
		this->tVilleLivraison_p3->Text = "";
		this->tRefArticle_p3->Text = "";
		this->tQuantiteArticle_p3->Text = "";
		this->tMoyenPaiement_p3->Text = "";
	}

	private: System::Void bCopie_p3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tNumVoieFacturation_p3->Text = this->tNumVoieLivraison_p3->Text;
		this->tComplementFacturation_p3->Text = this->tComplementLivraison_p3->Text;
		this->tTypeVoieFacturation_p3->Text = this->tTypeVoieLivraison_p3->Text;
		this->tNomVoieFacturation_p3->Text = this->tNomVoieLivraison_p3->Text;
		this->tCodePostalFacturation_p3->Text = this->tCodePostalLivraison_p3->Text;
		this->tVilleFacturation_p3->Text = this->tVilleLivraison_p3->Text;
	}

	private: System::Void bRechercherCommande_p3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		this->loadDataCommande();
		try {
			bool find = 0;
			for (int i = 0; i < this->dDetailCommande_p3->RowCount - 1; i++) {
				if (this->tRechercheCommande_p3->Text->Trim() == this->dDetailCommande_p3->Rows[i]->Cells[0]->Value->ToString()) {
					this->dDetailCommande_p3->CurrentCell = this->dDetailCommande_p3->Rows[i]->Cells[0];
					find = 1;
				}
			}
			if (!find) {
				this->resetCommande();
				throw gcnew String("Cette commande n\'existe pas !");
			}
			this->tNom_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tPrenom_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[1];
			this->gestion = gcnew Services::GestionCommande(this->tRechercheCommande_p3->Text->Trim(), this->tNom_p3->Text->Trim(), this->tPrenom_p3->Text->Trim());
			this->loadDataCommandeAll();
			this->tNom_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tPrenom_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[1]->Value->ToString()->Split(' ')[1];
			this->tDateLivraison_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[2]->Value->ToString()->Split(' ')[0];
			this->tDatePaiement_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[3]->Value->ToString()->Split(' ')[0];
			this->tDernierSolde_p3->Text = this->dDetailCommande_p3->CurrentRow->Cells[3]->Value->ToString()->Split(' ')[0];
			this->tNumVoieFacturation_p3->Text = this->dDetailPaiement_p3->Rows[0]->Cells[0]->Value->ToString()->Split(' ')[0];
			this->tComplementFacturation_p3->Text = this->dDetailPaiement_p3->Rows[0]->Cells[0]->Value->ToString()->Split(' ')[1];
			this->tTypeVoieFacturation_p3->Text = this->dDetailPaiement_p3->Rows[0]->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tNomVoieFacturation_p3->Text = this->dDetailPaiement_p3->Rows[0]->Cells[1]->Value->ToString()->Split(' ')[1];
			this->tCodePostalFacturation_p3->Text = this->dDetailPaiement_p3->Rows[0]->Cells[2]->Value->ToString()->Split(' ')[0];
			this->tVilleFacturation_p3->Text = this->dDetailPaiement_p3->Rows[0]->Cells[2]->Value->ToString()->Split(' ')[1];
			this->tNumVoieLivraison_p3->Text = this->dDetailPaiement_p3->Rows[1]->Cells[0]->Value->ToString()->Split(' ')[0];
			this->tComplementLivraison_p3->Text = this->dDetailPaiement_p3->Rows[1]->Cells[0]->Value->ToString()->Split(' ')[1];
			this->tTypeVoieLivraison_p3->Text = this->dDetailPaiement_p3->Rows[1]->Cells[1]->Value->ToString()->Split(' ')[0];
			this->tNomVoieLivraison_p3->Text = this->dDetailPaiement_p3->Rows[1]->Cells[1]->Value->ToString()->Split(' ')[1];
			this->tCodePostalLivraison_p3->Text = this->dDetailPaiement_p3->Rows[1]->Cells[2]->Value->ToString()->Split(' ')[0];
			this->tVilleLivraison_p3->Text = this->dDetailPaiement_p3->Rows[1]->Cells[2]->Value->ToString()->Split(' ')[1];
			this->tRefArticle_p3->Text = this->dCommande->Rows[0]->Cells[0]->Value->ToString();
			this->tQuantiteArticle_p3->Text = this->dCommande->Rows[0]->Cells[2]->Value->ToString();
			this->tMoyenPaiement_p3->Text = this->dDetailCommande_p3->Rows[0]->Cells[4]->Value->ToString();
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bRechercherCommande_p3, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p3->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p3->Text = "Opération échouée !";
			}
		}
	}

	private: System::Void bAjouter_p3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionCommande(this->tRechercheCommande_p3->Text->Trim(), this->tNom_p3->Text->Trim(), this->tPrenom_p3->Text->Trim(), Convert::ToDateTime(this->tDernierSolde_p3->Text->Trim()), Convert::ToDateTime(tDateLivraison_p3->Text->Trim()), gcnew Adresse(this->tNumVoieLivraison_p3->Text->Trim(), this->tComplementLivraison_p3->Text->Trim(), this->tTypeVoieLivraison_p3->Text->Trim(), this->tNomVoieLivraison_p3->Text->Trim(), this->tCodePostalLivraison_p3->Text->Trim(), this->tVilleLivraison_p3->Text->Trim()), gcnew Adresse(this->tNumVoieFacturation_p3->Text->Trim(), this->tComplementFacturation_p3->Text->Trim(), this->tTypeVoieFacturation_p3->Text->Trim(), this->tNomVoieFacturation_p3->Text->Trim(), this->tCodePostalFacturation_p3->Text->Trim(), this->tVilleFacturation_p3->Text->Trim()), this->tRefArticle_p3->Text->Trim(), this->tQuantiteArticle_p3->Text->Trim(), Convert::ToDateTime(this->tDatePaiement_p3->Text->Trim()), this->tMoyenPaiement_p3->Text->Trim());
			this->gestion->ajouter();
		}
		catch (SqlException^) {
			this->errorProvider1->SetError(this->bAjouter_p3, "Erreur de donnée !");
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p3, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p3->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p3->Text = "Opération échouée !";
			}
		}
		this->loadDataCommandeAll();
	}

	private: System::Void bSupprimer_p3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionCommande(this->tRechercheCommande_p3->Text->Trim(), this->tNom_p3->Text->Trim(), this->tPrenom_p3->Text->Trim());
			this->gestion->supprimer();
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p3, e);
		}
		catch (SqlException^) {
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p3->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p3->Text = "Opération échouée !";
			}
		}
		this->loadDataCommande();
	}

	private: System::Void bMaj_p3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			bool find = 0;
			for (int i = 0; i < this->dDetailCommande_p3->RowCount - 1; i++) {
				if (this->tRechercheCommande_p3->Text->Trim() == this->dDetailCommande_p3->Rows[i]->Cells[0]->Value->ToString()) {
					find = 1;
				}
			}
			if (!find) {
				this->resetCommande();
				throw gcnew String("Cette commande n\'existe pas !");
			}
			this->gestion = gcnew Services::GestionCommande(this->tRechercheCommande_p3->Text->Trim(), this->tNom_p3->Text->Trim(), this->tPrenom_p3->Text->Trim(), Convert::ToDateTime(this->tDernierSolde_p3->Text->Trim()), Convert::ToDateTime(tDateLivraison_p3->Text->Trim()), gcnew Adresse(this->tNumVoieLivraison_p3->Text->Trim(), this->tComplementLivraison_p3->Text->Trim(), this->tTypeVoieLivraison_p3->Text->Trim(), this->tNomVoieLivraison_p3->Text->Trim(), this->tCodePostalLivraison_p3->Text->Trim(), this->tVilleLivraison_p3->Text->Trim()), gcnew Adresse(this->tNumVoieFacturation_p3->Text->Trim(), this->tComplementFacturation_p3->Text->Trim(), this->tTypeVoieFacturation_p3->Text->Trim(), this->tNomVoieFacturation_p3->Text->Trim(), this->tCodePostalFacturation_p3->Text->Trim(), this->tVilleFacturation_p3->Text->Trim()), this->tRefArticle_p3->Text->Trim(), this->tQuantiteArticle_p3->Text->Trim(), Convert::ToDateTime(this->tDatePaiement_p3->Text->Trim()), this->tMoyenPaiement_p3->Text->Trim());
			this->gestion->modifier(this->tRechercheCommande_p3->Text->Trim());
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p3, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p3->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p3->Text = "Opération échouée !";
			}
		}
		this->loadDataCommandeAll();
	}

	//=====================================	Article ============================================================================

	private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelMenu->Hide();
		this->panelStock->Show();
		this->gestion = gcnew Services::GestionArticle();
		this->loadDataStock();
	}

	private: void loadDataStock(void) {
		this->dArticle_p4->DataSource = this->gestion->liste(0);
		this->dArticle_p4->DataMember = "Article";
	}

	private: void resetArticle(void) {
		this->tDesignation_p4->Text = "";
		this->tReferenceArticle_p4->Text = "";
		this->tSeuilReap_p4->Text = "";
		this->tQuantiteStock_p4->Text = "";
		this->tPrixHT_p4->Text = "";
		this->tTauxTVA_p4->Text = "";
	}

	private: System::Void bRechercheArticle_p4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->resetForm();
			bool find = 0;
			for (int i = 0; i < this->dArticle_p4->RowCount - 1; i++) {
				if (this->tRechercheArticle_p4->Text->Trim() == this->dArticle_p4->Rows[i]->Cells[0]->Value->ToString()) {
					this->dArticle_p4->CurrentCell = this->dArticle_p4->Rows[i]->Cells[0];
					find = 1;
				}
			}
			if (!find) {
				this->resetArticle();
				throw gcnew String("Cet article n'existe pas !");
			}
			else {
					this->tBoxMessage_p4->Text = "Opération réussie !";
			}
			this->tDesignation_p4->Text = this->dArticle_p4->CurrentRow->Cells[1]->Value->ToString();
			this->tReferenceArticle_p4->Text = this->dArticle_p4->CurrentRow->Cells[0]->Value->ToString();
			this->tSeuilReap_p4->Text = this->dArticle_p4->CurrentRow->Cells[3]->Value->ToString();
			this->tQuantiteStock_p4->Text = this->dArticle_p4->CurrentRow->Cells[2]->Value->ToString();
			this->tPrixHT_p4->Text = this->dArticle_p4->CurrentRow->Cells[4]->Value->ToString()->Split(' ')[0];
			this->tTauxTVA_p4->Text = this->dArticle_p4->CurrentRow->Cells[5]->Value->ToString()->Split(' ')[0];
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bRechercheArticle_p4, e);
		}
	}

	private: System::Void bAjouter_p4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionArticle(this->tReferenceArticle_p4->Text->Trim(), this->tDesignation_p4->Text->Trim(), this->tQuantiteStock_p4->Text->Trim(), this->tSeuilReap_p4->Text->Trim(), this->tPrixHT_p4->Text->Trim(), this->tTauxTVA_p4->Text->Trim());
			this->gestion->ajouter();
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p4, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p4->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p4->Text = "Opération échouée !";
			}
		}
		this->loadDataStock();
	}

	private: System::Void bSupprimer_p4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			this->gestion = gcnew Services::GestionArticle(this->tReferenceArticle_p4->Text->Trim());
			this->gestion->supprimer();
		}
		catch (SqlException^) {
			this->errorProvider1->SetError(this->bAjouter_p4, "Supprimez d'abord les commandes le contenant !");
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p4, e);
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p4->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p4->Text = "Opération échouée !";
			}
		}
		this->loadDataStock();
	}

	private: System::Void bMaj_p4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			bool find = 0;
			for (int i = 0; i < this->dArticle_p4->RowCount - 1; i++) {
				if (this->tRechercheArticle_p4->Text->Trim() == this->dArticle_p4->Rows[i]->Cells[0]->Value->ToString()) {
					find = 1;
				}
			}
			if (!find) {
				this->resetArticle();
				throw gcnew String("Cet article n'existe pas !");
			}
			this->gestion = gcnew Services::GestionArticle(this->tReferenceArticle_p4->Text->Trim(), this->tDesignation_p4->Text->Trim(), this->tQuantiteStock_p4->Text->Trim(), this->tSeuilReap_p4->Text->Trim(), this->tPrixHT_p4->Text->Trim(), this->tTauxTVA_p4->Text->Trim());			this->gestion->modifier(this->tRechercheArticle_p4->Text);
			this->gestion->modifier(this->tRechercheArticle_p4->Text);
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bAjouter_p1, e);
		}
		catch (SqlException^) {
		}
		catch (bool^ e) {
			if (e) {
				this->tBoxMessage_p1->Text = "Opération réussie !";
			}
			else {
				this->tBoxMessage_p1->Text = "Opération échouée !";
			}
		}
		this->loadDataStock();
	}

	//=====================================	Reste ============================================================================

	private: void loadStat(void) {
		this->dValeurCo_p5->DataSource = this->gestion->stat1();
		this->dValeurCo_p5->DataMember = "Article";
		this->dValeurAchatStock_p5->DataSource = this->gestion->stat2();
		this->dValeurAchatStock_p5->DataMember = "Article";
		this->dPanierMoyen_p5->DataSource = this->gestion->stat3();
		this->dPanierMoyen_p5->DataMember = "Article";
		this->dChiffreAffaireMois_p5->DataSource = this->gestion->stat4();
		this->dChiffreAffaireMois_p5->DataMember = "Article";
		this->dProduitsSousSeuil_p5->DataSource = this->gestion->stat5();
		this->dProduitsSousSeuil_p5->DataMember = "Article";
		this->dMontantAchatClient_p5->DataSource = this->gestion->stat6();
		this->dMontantAchatClient_p5->DataMember = "Article";
		this->dArticlesPlusVendus_p5->DataSource = this->gestion->stat7();
		this->dArticlesPlusVendus_p5->DataMember = "Article";
		this->dArticlesMoinsVendus->DataSource = this->gestion->stat8();
		this->dArticlesMoinsVendus->DataMember = "Article";
	}

	private: System::Void buttonStatistiques_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelMenu->Hide();
		this->gestion = gcnew Services::GestionArticle();
		this->panelStatistiques->Show();
		this->loadStat();
	}

	private: System::Void buttonSimulation_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelMenu->Hide();
		this->gestion = gcnew Services::GestionArticle();
		this->cbTVA_p6->SelectedIndex = 0;
		this->cbMarge_p6->SelectedIndex = 0;
		this->cbRemiseComm_p6->SelectedIndex = 0;
		this->cbDemarque_p6->SelectedIndex = 0;
		this->panelSimulation->Show();
	}

	private: System::Void bRetour_p1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelEmploye->Hide();
		this->resetEmploye();
		this->panelMenu->Show();
	}

	private: System::Void bRetour_p2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelClient->Hide();
		this->resetClient();
		this->panelMenu->Show();
	}

	private: System::Void bRetour_p3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelCommande->Hide();
		this->resetCommande();
		this->panelMenu->Show();
	}

	private: System::Void bRetour_p4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelStock->Hide();
		this->resetArticle();
		this->panelMenu->Show();
	}

	private: System::Void bRetour_p5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelStatistiques->Hide();
		this->panelMenu->Show();
	}

	private: System::Void bRetour_p6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelSimulation->Hide();
		this->panelMenu->Show();
	}

	private: System::Void bCalcul_p6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resetForm();
		try {
			DataSet^ (*fonction) (double, double, double, double, Services::Gestion^) = &simulation;
			this->dSimulation_p6->DataSource = (*fonction)(Convert::ToDouble(this->cbTVA_p6->SelectedItem->ToString()->Split(' ')[0]->Trim()), Convert::ToDouble(this->cbMarge_p6->SelectedItem->ToString()->Split(' ')[0]->Trim()), Convert::ToDouble(this->cbRemiseComm_p6->SelectedItem->ToString()->Split(' ')[0]->Trim()), Convert::ToDouble(this->cbDemarque_p6->SelectedItem->ToString()->Split(' ')[0]->Trim()), this->gestion);
			this->dSimulation_p6->DataMember = "Article";
		}
		catch (FormatException^) {
			this->errorProvider1->SetError(this->bCalcul_p6, "Les parametres doivent être des réels !");
		}
		catch (String^ e) {
			this->errorProvider1->SetError(this->bCalcul_p6, e);
		}
	}
};
}