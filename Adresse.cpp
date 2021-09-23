#include "Adresse.h"

Adresse::Adresse(void) {
	this->_numeroDeVoie = "";
	this->_complementDeNumero = "";
	this->_typeDeVoie = "";
	this->_nomDeVoie = "";
	this->_codePostal = "";
	this->_nomDeCommune = "";
}

Adresse::Adresse(String^ numeroDeVoie, String^ complementDeNumero, String^ typeDeVoie, String^ nomDeVoie, String^ codePostal, String^ nomDeCommune) {
	this->set_numeroDeVoie(numeroDeVoie);
	this->set_complementDeNumero(complementDeNumero);
	this->set_typeDeVoie(typeDeVoie);
	this->set_nomDeVoie(nomDeVoie);
	this->set_codePostal(codePostal);
	this->set_nomDeCommune(nomDeCommune);
}

Adresse::Adresse(Adresse^ adresse) {
	this->set_numeroDeVoie(adresse->get_numeroDeVoie());
	this->set_complementDeNumero(adresse->get_complementDeNumero());
	this->set_typeDeVoie(adresse->get_typeDeVoie());
	this->set_nomDeVoie(adresse->get_nomDeVoie());
	this->set_codePostal(adresse->get_codePostal());
	this->set_nomDeCommune(adresse->get_nomDeCommune());
}

void Adresse::set_numeroDeVoie(String^ numeroDeVoie) {
	if (numeroDeVoie == "") {
		throw gcnew String("Le numéro de voie doit être rempli !");
	}
	try {
		if (Convert::ToInt32(numeroDeVoie) > 0) {
			this->_numeroDeVoie = numeroDeVoie;
		} else {
			throw gcnew String("Un numéro de voie ne peut pas être en dessous de 1 !");
		}
	}
	catch (FormatException^) {
		throw gcnew String("Un numéro de voie doit être numérique !");
	}
}

void Adresse::set_complementDeNumero(String^ complementDeNumero) {
	this->_complementDeNumero = complementDeNumero;
}

void Adresse::set_typeDeVoie(String^ typeDeVoie) {
	if (typeDeVoie != "") {
		this->_typeDeVoie = typeDeVoie;
	} else {
		throw gcnew String("Il doit y avoir un type de voie !");
	}
}

void Adresse::set_nomDeVoie(String^ nomDeVoie) {
	if (nomDeVoie != "") {
		this->_nomDeVoie = nomDeVoie;
	} else {
		throw gcnew String("Il doit y avoir un nom de voie !");
	}
}

void Adresse::set_codePostal(String^ codePostal) {
	if (codePostal != "" && Convert::ToInt32(codePostal) > 0) {
		if ((codePostal->Length).CompareTo(5) == 0) {
			this->_codePostal = codePostal;
		} else {
			throw gcnew String("Un code postal doit comporter 5 chiffres !");
		}
	} else {
		throw gcnew String("Un code postal ne peut pas être alpahnumérique, vide ou négatif !");
	}
}

void Adresse::set_nomDeCommune(String^ nomDeCommune) {
	if (nomDeCommune != "") {
		this->_nomDeCommune = nomDeCommune;
	} else {
		throw gcnew String("Un nom de commune ne peut pas être vide !");
	}
}

String^ Adresse::get_numeroDeVoie(void) {
	return this->_numeroDeVoie;
}

String^ Adresse::get_complementDeNumero(void) {
	return this->_complementDeNumero;
}

String^ Adresse::get_typeDeVoie(void) {
	return this->_typeDeVoie;
}

String^ Adresse::get_nomDeVoie(void) {
	return this->_nomDeVoie;
}

String^ Adresse::get_codePostal(void) {
	return this->_codePostal;
}

String^ Adresse::get_nomDeCommune(void) {
	return this->_nomDeCommune;
}