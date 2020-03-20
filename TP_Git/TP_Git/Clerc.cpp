#include "Clerc.h"

Clerc::Clerc(string nom, int intelligence) : Personnage(nom), _intelligence(intelligence)
{
}

Clerc::~Clerc()
{
}

void Clerc::sePresenter() const
{
	Personnage::sePresenter();
	cout << "J'ai également " << _intelligence << " points d'intelligence" << endl;
	cout << "Ma devise : la défense est la meilleure des attaques" << endl << endl;
}

void Clerc::soigner(Personnage* cible) const
{
	if (cible->getVie() >= 70) // si le personnage se faisant soigner a 70 pv ou plus, on considère qu'il n'a pas besoin de soin
	{
		cout << cible->getNom() << " n'a pas besoin de soins pour le moment" << endl << endl;
	}
	else // sinon on le soigne
	{
		cible->recevoirSoins(_intelligence);
	}
}