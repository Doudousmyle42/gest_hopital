#include"personne.h"
#include "medecin.h"
#include "patient.h"
#include <iostream>
using namespace std;

int main() {
    Medecin med("Fall", "Aminata", 35, "Cardiologue", 350000);
    med.se_presenter();
    med.affiche_infos();

    cout << endl;

    Patient pat("Ba", "Moussa", 42, "Paludisme", 20);
    pat.se_presenter();
    pat.affiche_infos();

    return 0;
}


