#include "arbre.h"

int main() {
    Noeud* racine = new Noeud(7);

    racine->setGauche(new Noeud(9));
    racine->setDroite(new Noeud(67));

    racine->getGauche()->setGauche(new Noeud(1));
    racine->getGauche()->setDroite(new Noeud(28));
    racine->getGauche()->getDroite()->setGauche(new Noeud(29));
    racine->getGauche()->getDroite()->setDroite(new Noeud(2));

    racine->getDroite()->setGauche(new Noeud(8));
    racine->getDroite()->setDroite(new Noeud(10));
    racine->getDroite()->getGauche()->setGauche(new Noeud(57));
    racine->getDroite()->getGauche()->setDroite(new Noeud(40));
    racine->getDroite()->getDroite()->setDroite(new Noeud(6));

    parcoursLargeur(racine);

    delete racine;
    return 0;
}
