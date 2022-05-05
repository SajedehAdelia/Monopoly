#ifndef _PLATEAU_H_
#define _PLATEAU_H_

#include "Case.h"

class Plateau {

private:
    Case* tab[10];
    int taille;

public:
    Plateau();
    ~Plateau();

    int getTaille();

    void afficherPlateau(Case* caseJoueur);

    Case* getCase(int);

};


#endif // _PLATEAU_H_
