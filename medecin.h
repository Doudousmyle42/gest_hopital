#ifndef MEDECIN_H_INCLUDED
#define MEDECIN_H_INCLUDED

#include"personne.h"
#include <iostream>
using namespace std;

class Medecin : public Personne{

    private:
        string specialite;
        int salaire  ;

    public:
        Medecin(string nom, string prenom, int age, string specialite, int salaire);
        void setspecialite(string specialite);
        void setsalaire(int salaire);
        int getSalaire();
        string getspecialite();
        void affiche_infos();
};

#endif // MEDECIN_H_INCLUDED
