#include <iostream>
#include <windows.h>
#include "intelligent.h"
#include "cv.h"
#include "concombre.h"

using namespace std;

cv cvob;
intelligent intob;
concombre conob;

int main()

{

    //menu & choix de personnage (ou quitter le jeu)
    cout << "bonjour & bienvenue au JEU!!!\nce jeu est TRE BON!!!\nvou avez des CHOUA:\n";
    cout << "a)avoir un personnage con\nb)avoir un personnage pas con\nc)ne pas jouer au JEU!!\n";
    cout << "veuillez entrer une LETTRE comme REPONSE!!!\n";

    cvob.isValidState = true;

    while(cvob.isValidState)
    {
        cin >> cvob.x;
        switch(cvob.x) {

    case 'a':
        cvob.line();
        cout << "BON OK C CORREC MON GRAND(e)!! LE JEU COMMENCE!!!11111" << endl;
        cvob.intl = 1;
        cvob.isValidState = false;
        break;

    case 'b':
        cvob.line();
        cout << "BRAVO TU A CHOUASI DAVOIR PERSONNAGE PAS CON!!!\nOK LE JEU COMMENCE!!!11111" << endl;
        cvob.intl = 0;
        cvob.isValidState = false;
        break;

    case 'c':
        cvob.line();
        cout << "OH OK!!";
            return 0;
            break;

    default:
        cout << "PAS DANS LES CHOUA!!! RECHOUA!!!!1" << endl;
        break;

        }
        if (cvob.isValidState == false)
            break;

    }


    cvob.lines();
    cout << "c une tre belle journer dans le ville de GRATINO!!1\ntu a plusieur CHOUA:\na)aller au EPICERI pour pogner BOUF\n";
    cout << "b)aller au gym pour wORK OUTRE!!\nc)rester MAISON\nd)etre INTELIGEN :ddd\n";
    cvob.lines();
    cvob.isValidState = true;

    //choix d'endroit
    if (cvob.intl == 1)
        conob.endroit();
    if (cvob.intl == 0)
        intob.endroit();

    cvob.isValidState = true;

    //endroit choisi
    if (cvob.c == 1)
    {
        if (cvob.intl == 1)
            conob.epicerie();
        if (cvob.intl == 0)
            intob.epicerie();
    }

    if (cvob.c == 2)
    {
        if (cvob.intl == 1)
            conob.gym();
        if (cvob.intl == 0)
            intob.gym();

    }

    if (cvob.c == 3)
    {
        if (cvob.intl == 1)
            conob.maison();
        if (cvob.intl == 0)
            intob.maison();
    }

    if (cvob.c == 4)
    {
        intob.intello();
    }

}
