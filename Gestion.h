#pragma once
#include "pch.h"
#include "CAD.h"
#include "Map.h"

namespace Services {
	ref class Gestion {
	public:
		virtual DataSet^ liste(int) abstract;
		virtual void ajouter(void) abstract;
		virtual void supprimer(void) abstract;
		virtual void modifier(String^) abstract;
		DataSet^ stat1(void);
		DataSet^ stat2(void);
		DataSet^ stat3(void);
		DataSet^ stat4(void);
		DataSet^ stat5(void);
		DataSet^ stat6(void);
		DataSet^ stat7(void);
		DataSet^ stat8(void);
		DataSet^ simulation(double, double, double, double);
	protected:
		void initGestion(void);
		Composants::CAD^ _cad;
		DataSet^ _ds;
	};
}