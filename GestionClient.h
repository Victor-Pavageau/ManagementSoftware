#pragma once
#include "pch.h"
#include "Gestion.h"
#include "CAD.h"
#include "MapClient.h"

namespace Services {
	ref class GestionClient : public Gestion {
	public:
		GestionClient(void);
		GestionClient(String^, String^);
		GestionClient(String^, String^, DateTime^, Adresse^);
		virtual DataSet^ liste(int) override;
		virtual void ajouter(void) override;
		virtual void supprimer(void) override;
		virtual void modifier(String^) override;
	private:
		Composants::MapClient^ _client;
	};
}