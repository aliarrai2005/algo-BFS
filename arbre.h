#ifndef ARBRE_H
#define ARBRE_H

#include <iostream>
#include <queue>

class Noeud {
private:
    int valeur;
    Noeud* gauche;
    Noeud* droite;

public:
    explicit Noeud(int v) : valeur(v), gauche(nullptr), droite(nullptr) {}

    ~Noeud() {
        delete gauche;
        delete droite;
    }

    int getValeur() const { return valeur; }
    Noeud* getGauche() const { return gauche; }
    Noeud* getDroite() const { return droite; }

    void setGauche(Noeud* n) { gauche = n; }
    void setDroite(Noeud* n) { droite = n; }
};

// Parcours en largeur : affiche les noeuds niveau par niveau
inline void parcoursLargeur(Noeud* racine) {
    if (racine == nullptr) return;

    std::queue<Noeud*> file;
    file.push(racine);

    std::cout << "Parcours en largeur : ";
    while (!file.empty()) {
        Noeud* courant = file.front();
        file.pop();
        std::cout << courant->getValeur() << " ";

        if (courant->getGauche() != nullptr) file.push(courant->getGauche());
        if (courant->getDroite() != nullptr) file.push(courant->getDroite());
    }
    std::cout << std::endl;
}

#endif
