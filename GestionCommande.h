#pragma once
#include "pch.h"
#include "Gestion.h"
#include "CAD.h"
#include "MapCommande.h"

namespace Services {
	ref class GestionCommande : public Gestion {
	public:
		GestionCommande(void);
		GestionCommande(String^, String^, String^);
		GestionCommande(String^, String^, String^, DateTime^, DateTime^, Adresse^, Adresse^, String^, String^, DateTime^, String^);
		virtual DataSet^ liste(int) override;
		virtual void ajouter(void) override;
		virtual void supprimer(void) override;
		virtual void modifier(String^) override;
	private:
		Composants::MapCommande^ _commande;
	};
}