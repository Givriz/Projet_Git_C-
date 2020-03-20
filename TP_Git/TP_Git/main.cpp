#include "Clerc.h"
#include "Berserker.h"

int main() {
	// création de nos personnages
	Berserker *alexis = new Berserker("Sasuno3000");
	Clerc *florent = new Clerc("Araasthor");

	// présentation des personnages
	alexis->sePresenter();
	florent->sePresenter();

	// attaque
	alexis->attaquer(florent);
	florent->attaquer(alexis);

	florent->afficherVie(); // alexis fait 5 de dégats, il doit donc rester 90 pv à florent
	alexis->afficherVie(); // florent fait 5 de dégats, il doit donc rester 95 pv à alexis

	// on essaye de soigner alexis (cela devrait échouer)
	florent->soigner(alexis);

	alexis->afficherVie(); // le soin ayant échoué, alexis doit toujours avoir 95 pv

	// on va donc lui baisser sa vie pour pouvoir être soignée
	alexis->attaquer(alexis); // 85 pv
	alexis->attaquer(alexis); // 75 pv
	alexis->attaquer(alexis); // 65 pv

	// on réessaye le soin !
	florent->soigner(alexis);

	alexis->afficherVie(); // florent ayant soigné alexis de 10 pv, alexis doit avoir 75 pv

	// mort d'un personnage
	alexis->attaquer(alexis); // 65 pv
	alexis->attaquer(alexis); // 55 pv
	alexis->attaquer(alexis); // 45 pv
	alexis->attaquer(alexis); // 35 pv
	alexis->attaquer(alexis); // 25 pv
	alexis->attaquer(alexis); // 15 pv
	alexis->attaquer(alexis); // 5 pv
	florent->attaquer(alexis); // florent tue alexis cheh

	// on regarde si l'objet alexis (tu es un objet miskine) est bien détruit
	alexis->sePresenter(); // le programme doit planter ne trouvant pas l'objet, une fois le test effectué, commenter la ligne

	// on vérifie qu'on peut utiliser le constructeur alternatif
	Berserker *alexisUpgraded = new Berserker("Sasuno3000", 25); // alexis a maintenant 25 de force au lieu de 10 par défaut

	alexisUpgraded->attaquer(florent); // florent avait 90 pv, il doit donc lui en rester 65

	florent->afficherVie(); // on vérifie cela

	return 0;
}