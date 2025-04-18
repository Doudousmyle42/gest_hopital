#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include"personne.h"
#include <iostream>
using namespace std;

class Patient : public Personne{
    private:
        string maladie;
        int num_cham;

    public:
        Patient(string nom, string prenom, int age, string maladie, int num_cham);
        void setmaladie(string maladie);
        void setnum_cham(int num_cham);
        string getmaladie();
        int getnum_cham();

        void affiche_infos();
};


#endif // PATIENT_H_INCLUDED
