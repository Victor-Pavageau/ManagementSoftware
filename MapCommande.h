#pragma once
#include "pch.h"
#include "Map.h"
#include "Adresse.h"

namespace Composants {
	ref class MapCommande : public Map {
	public:
		MapCommande(void);
		MapCommande(String^, String^, String^);
		MapCommande(String^, String^, String^, DateTime^, DateTime^, Adresse^, Adresse^, String^, String^, DateTime^, String^);
		virtual String^ SELECT(int) override;
		virtual String^ INSERT(int) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(String^) override;
		void set_ID(int);
		void set_reference(String^);
		void set_nomClient(String^);
		void set_prenomClient(String^);
		void set_dateDernierSolde(DateTime^);
		void set_dateLivraison(DateTime^);
		void set_adresseLivraison(Adresse^);
		void set_adressePaiement(Adresse^);
		void set_referenceObjet(String^);
		void set_quantite(String^);
		void set_datePaiement(DateTime^);
		void set_moyenDePaiement(String^);
		int get_ID(void);
		String^ get_reference(void);
		String^ get_nomClient(void);
		String^ get_prenomClient(void);
		DateTime^ get_dateDernierSolde(void);
		DateTime^ get_dateLivraison(void);
		Adresse^ get_adresseLivraison(void);
		Adresse^ get_adressePaiement(void);
		String^ get_referenceObjet(void);
		String^ get_quantite(void);
		DateTime^ get_datePaiement(void);
		String^ get_moyenDePaiement(void);
	private:
		int _ID;
		String^ _reference;
		String^ _nomClient;
		String^ _prenomClient;
		DateTime^ _dateDernierSolde;
		DateTime^ _dateLivraison;
		Adresse^ _adresseLivraison;
		Adresse^ _adressePaiement;
		String^ _referenceObjet;
		String^ _quantite;
		DateTime^ _datePaiement;
		String^ _moyenDePaiement;
	};
}