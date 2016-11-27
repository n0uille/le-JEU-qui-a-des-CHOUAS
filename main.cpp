#include <iostream>
#include <algorithm>
#include <windows.h>
#include <iso646.h>
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
    cout << "veuillez entrer SEULEMENT UNE LETTRE comme REPONSE!!!\n";

    cvob.isValidState = true;

    while(cvob.isValidState)
    {
        cin >> cvob.x;
        switch(cvob.x) {

    case 'a':
        cout << "BON OK C CORREC MON GRAND(e)!! LE JEU COMMENCE!!!11111" << endl;
        cvob.intellicon = 1;
        cvob.isValidState = false;
        break;

    case 'b':
        cout << "BRAVO TU A CHOUASI DAVOIR PERSONNAGE PAS CON!!!\nOK LE JEU COMMENCE!!!11111" << endl;
        cvob.intellicon = 0;
        cvob.isValidState = false;
        break;

    case 'c':
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
    cvob.dejafait1 = false;
    cvob.dejafait2 = false;
    cvob.dejafait3 = false;
    cvob.dejafait4 = false;

    //choix d'endroit
    while (cvob.dejafait1 == false || cvob.dejafait2 == false || cvob.dejafait3 == false)
    {
    cvob.isValidState = true;
    if (cvob.intellicon == 1)
        conob.endroit();
    if (cvob.intellicon == 0)
        intob.endroit();

    cvob.isValidState = true;

    //endroit choisi
    if (cvob.c == 1)
    {
        if (cvob.dejafait1 == true){
            cvob.line();
            cout << "HEY DEJA FAIT FCRIST" << endl;
            cvob.line();
        break;
        }
        if (cvob.intellicon == 1)
            conob.epicerie();
        if (cvob.intellicon == 0)
            intob.epicerie();
        cvob.dejafait1 = true;
        break;
    }

    if (cvob.c == 2)
    {
        if (cvob.intellicon == 1)
            conob.gym();
        if (cvob.intellicon == 0)
            intob.gym();
        cvob.dejafait2 = true;
    }

    if (cvob.c == 3)
    {
        if (cvob.intellicon == 1)
            conob.maison();
        if (cvob.intellicon == 0)
            intob.maison();
        cvob.dejafait3 = true;
    }

    if (cvob.c == 4 && cvob.dejafait4 == false)
    {
        intob.intello();
        cvob.dejafait4 = true;
        if (cvob.dejafait4 == true)
            break;
    }
    continue;

    }
    cvob.lines();
    cout << "oh non! ! que vois-tu en sortant de le chose!! c'est le" << endl;
    cout << "MEME ABSURDE PAS VRAIMENT DROLE MAIS DUQUEL ON RIT PAREIL" << endl;
    cout << "!!! tu va deovir le battre parcque pourquoi pa!!!1" << endl;
}
