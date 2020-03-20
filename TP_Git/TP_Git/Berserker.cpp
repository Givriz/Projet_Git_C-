#include "Berserker.h"

Berserker::Berserker(string nom, int force) : Personnage(nom), _force(force)
{
}

Berserker::~Berserker()
{
}

void Berserker::sePresenter() const
{
	Personnage::sePresenter();
	cout << "J'ai �galement " << _force << " points de force" << endl;
	cout << "Ma devise : l'attaque est la meilleure des d�fenses" << endl << endl;
}

void Berserker::attaquer(Personnage* cible) const
{
	cible->recevoirDegats(_force);
}