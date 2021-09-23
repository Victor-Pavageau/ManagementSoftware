#pragma once
#include "pch.h"
#include "Gestion.h"
#include "CAD.h"
#include "MapEmploye.h"

namespace Services {
	ref class GestionEmploye : public Gestion {
	public:
		GestionEmploye(void);
		GestionEmploye(String^, String^);
		GestionEmploye(String^, String^, String^, String^, DateTime^, Adresse^);
		virtual DataSet^ liste(int) override;
		virtual void ajouter(void) override;
		virtual void supprimer(void) override;
		virtual void modifier(String^) override;	
	private:
		Composants::MapEmploye^ _employe;
	};
}