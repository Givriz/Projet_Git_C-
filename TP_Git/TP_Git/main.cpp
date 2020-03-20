#include "Clerc.h"
#include "Berserker.h"

int main() {
	// cr�ation de nos personnages
	Berserker *alexis = new Berserker("Sasuno3000");
	Clerc *florent = new Clerc("Araasthor");

	// pr�sentation des personnages
	alexis->sePresenter();
	florent->sePresenter();

	// attaque
	alexis->attaquer(florent);
	florent->attaquer(alexis);

	florent->afficherVie(); // alexis fait 5 de d�gats, il doit donc rester 90 pv � florent
	alexis->afficherVie(); // florent fait 5 de d�gats, il doit donc rester 95 pv � alexis

	// on essaye de soigner alexis (cela devrait �chouer)
	florent->soigner(alexis);

	alexis->afficherVie(); // le soin ayant �chou�, alexis doit toujours avoir 95 pv

	// on va donc lui baisser sa vie pour pouvoir �tre soign�e
	alexis->attaquer(alexis); // 85 pv
	alexis->attaquer(alexis); // 75 pv
	alexis->attaquer(alexis); // 65 pv

	// on r�essaye le soin !
	florent->soigner(alexis);

	alexis->afficherVie(); // florent ayant soign� alexis de 10 pv, alexis doit avoir 75 pv

	// mort d'un personnage
	alexis->attaquer(alexis); // 65 pv
	alexis->attaquer(alexis); // 55 pv
	alexis->attaquer(alexis); // 45 pv
	alexis->attaquer(alexis); // 35 pv
	alexis->attaquer(alexis); // 25 pv
	alexis->attaquer(alexis); // 15 pv
	alexis->attaquer(alexis); // 5 pv
	florent->attaquer(alexis); // florent tue alexis cheh

	// on regarde si l'objet alexis (tu es un objet miskine) est bien d�truit
	alexis->sePresenter(); // le programme doit planter ne trouvant pas l'objet, une fois le test effectu�, commenter la ligne

	// on v�rifie qu'on peut utiliser le constructeur alternatif
	Berserker *alexisUpgraded = new Berserker("Sasuno3000", 25); // alexis a maintenant 25 de force au lieu de 10 par d�faut

	alexisUpgraded->attaquer(florent); // florent avait 90 pv, il doit donc lui en rester 65

	florent->afficherVie(); // on v�rifie cela

	return 0;
}