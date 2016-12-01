#include <iostream>

#include "Batiment.h"
#include "Hero.h"
#include "Armure.h"
#include "Inventaire.h"
#include <typeinfo>

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    
//    Batiment b("Hotêl de ville","Permet de former vos héros.",1000);
//    b.affiche();
//    Hero galargh("Galargh le terrible", 1000);
//    cout << galargh.getNom() << endl;
//    
    Armure armure("Chapeau du paysan", TypeArmure::Casque, 1, 3);
    Armure armure2("Casque du chasseur", TypeArmure::Casque, 3, 8);
//    galargh.Equiper(&armure);
//    Equipement* eq = galargh.Equiper(&armure);
//    cout << "Equiper -- OK" << endl;
//    cout << eq->getNom() << endl;
//    
    
/////// FILTRES ////////////
    bool ressource = 1;
    bool casque = 1;
    bool epaules = 1;
    bool torse = 1;
    bool gants = 1;
    bool jambes = 1;
    bool bottes = 1;
    
    bool filtres[7] = {ressource, casque, epaules, torse, gants, jambes, bottes};
////////////////////////////
    
    
    
    Inventaire i;
    i.ajouterEqipements(&armure);
    i.ajouterEqipements(&armure2);
    i.afficheInventaire(filtres);
    
//    }
    
    return 0;
}

