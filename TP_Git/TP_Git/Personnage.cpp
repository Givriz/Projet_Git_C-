#include "Personnage.h"

Personnage::Personnage(string nom) : _vie(100)
{
	_nom = nom;
}

Personnage::~Personnage()
{
}

void Personnage::sePresenter() const
{
	cout << "Bonjour, mon nom est " << _nom << endl;
	cout << "J'ai " << _vie << " points de vie" << endl;
}

void Personnage::afficherVie() const
{
	cout << "La vie de " << getNom() << " est à " << getVie() << endl << endl;
}

void Personnage::recevoirDegats(int degats)
{
	_vie -= degats;

	if (_vie <= 0)
	{
		cout << _nom << " est mort" << endl << endl;
		delete this;
	}
}

void Personnage::attaquer(Personnage* cible) const
{
	cible->recevoirDegats(5);
}

void Personnage::recevoirSoins(int soins)
{
	_vie += soins;
	cout << _nom << " se sent revigoré" << endl << endl;
	if (_vie > 100)
	{
		_vie = 100;
	}
}