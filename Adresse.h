#pragma once
#include "pch.h"

ref class Adresse {
public:
	Adresse(void);
	Adresse(String^, String^, String^, String^, String^, String^);
	Adresse(Adresse^);
	void set_numeroDeVoie(String^);
	void set_complementDeNumero(String^);
	void set_typeDeVoie(String^);
	void set_nomDeVoie(String^);
	void set_codePostal(String^);
	void set_nomDeCommune(String^);
	String^ get_numeroDeVoie(void);
	String^ get_complementDeNumero(void);
	String^ get_typeDeVoie(void);
	String^ get_nomDeVoie(void);
	String^ get_codePostal(void);
	String^ get_nomDeCommune(void);
private:
	String^ _numeroDeVoie;
	String^ _complementDeNumero;
	String^ _typeDeVoie;
	String^ _nomDeVoie;
	String^ _codePostal;
	String^ _nomDeCommune;
};

