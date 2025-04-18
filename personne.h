#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <iostream>
using namespace std;

class Personne {
    protected:
        string nom;
        string prenom;
        int age;

    public:
        //constructeur
        Personne(string nom, string prenom, int age);
        //setters
        void setnom(string nom);
        void setprenom(string prenom);
        //getters
        string getnom();
        string getprenom();
        int getage();
        //methodes
        void se_presenter();
        void affiche_infos();
};

#endif // PERSONNE_H_INCLUDED
