#pragma once
#include "pch.h"
#include "Map.h"
#include "Adresse.h"

namespace Composants {
	ref class MapClient : public Map {
	public:
		MapClient(void);
		MapClient(String^, String^);
		MapClient(String^, String^, DateTime^, Adresse^);
		virtual String^ SELECT(int) override;
		virtual String^ INSERT(int) override;
		virtual String^ DELETE(void) override;
		virtual String^ UPDATE(String^) override;
		void set_ID(int);
		void set_nom(String^);
		void set_prenom(String^);
		void set_dateNaissance(DateTime^);
		void set_adresse(Adresse^);
		int get_ID(void);
		String^ get_nom(void);
		String^ get_prenom(void);
		DateTime^ get_dateNaissance(void);
		Adresse^ get_adresse(void);
	private:
		int _ID;
		String^ _nom;
		String^ _prenom;
		DateTime^ _dateNaissance;
		Adresse^ _adresse;
	};
}