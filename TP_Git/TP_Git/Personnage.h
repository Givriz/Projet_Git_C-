#pragma once

#include <iostream>
#include <string>

using namespace std;

class Personnage // notre classe mère
{
public:
	// constructeur, destructeur
	Personnage(string nom);
	~Personnage();

	// accesseurs
	int getVie() const { return _vie; }
	string getNom() const { return _nom; }

	// autres fonctions
	void sePresenter() const;
	void afficherVie() const;
	void attaquer(Personnage* cible) const;
	void recevoirDegats(int degats);
	void recevoirSoins(int soins);

protected:
	int _vie;
	string _nom;

};