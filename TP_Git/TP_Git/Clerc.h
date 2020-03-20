#pragma once

#include "Personnage.h"

class Clerc : public Personnage
{
public:
	Clerc(string nom, int intelligence = 10);
	~Clerc();

	void sePresenter() const;
	void soigner(Personnage* cible) const;
private:
	int _vie;
	string _nom;
	int _intelligence;

};