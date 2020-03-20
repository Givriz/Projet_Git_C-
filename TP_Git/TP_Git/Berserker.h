#pragma once

#include "Personnage.h"

class Berserker : public Personnage
{
public:
	Berserker(string nom, int force = 10);
	~Berserker();

	void sePresenter() const;
	void attaquer(Personnage* cible) const;

private:
	int _vie;
	string _nom;
	int _force;

};