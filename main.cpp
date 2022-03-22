#include <string>
#include <vector>
#include <iostream>

#include "lieux.cpp"
#include "lieux.h"

using namespace std;



int main() {

    // erreur lors de la création des lieux

    // Lieu * lieu1 = new Lieu("Forêt Kokiri","Ils sont petits ici",2);
    // Lieu * lieu2 = new Lieu("Chateau d'Hyrule","Les gardes sont pas gentils",6);
    // Lieu * lieu3 = new Lieu("Valée Gerudo","Attention, elles vont t'enfermer",8);
    // Lieu * lieu4 = new Lieu("Ranch Lonlon","Y a une petite fille qui chante tout le temps",0);
    // Lieu * lieu5 = new Lieu("Temple de l'eau","Il est pas si difficile",13);
    // Lieu * lieu6 = new Lieu("Mont du péril","Entre en éruption toutes les 5 minutes",16);

    
    bool gameOver = false;
    bool repos = false;
    
    string choixLieu = "";
    std::string strArr[] = {"Foret Kokiri", "Chateau d'Hyrule", "Vallée Gerudo", "Ranch Lonlon", "Temple de l'eau", "Mont du Péril"};
    int localisation = 1;
    int endurance = 100;
    string action = "";

    //Choix de la destination 

    if ( localisation == 1 ) {
            
        cout << "Vous vous trouvez au milieu des plaines d'Hyrule" << endl;
        cout << "Que faire ?" << endl;
        cout << "Endurance :" << endurance << endl;
        cout << "[Deplacement]/[Etablir un Campement]" << endl;

        cin >> action;

        if (action == "Deplacement"){

            cout << "Vous pouvez vous rendre dans la [ForetKokiri] ou au [ChateauHyrule]" << endl;
            
                cin >> choixLieu;

                if ( choixLieu == "ForetKokiri" ){

                    cout << "Vous vous trouvez maintenant dans la Foret Kokiri." << endl;
                    localisation = 2;
                    endurance -= 2;
                    // cout << lieu1->getDescription() << endl;
                    cout << "Endurance :" << endurance << endl;

                }
                
                if ( choixLieu == "ChateauHyrule" ){

                    cout << "Le Chateau d'Hyrule est maintenant devant vous." << endl;
                    localisation = 3;
                    endurance -= 6;
                    // cout << lieu2->getDescription() << endl;
                    cout << "Endurance :" << endurance << endl;

                }


        }

        
        //
        if ( localisation == 3 ) {
                
            cout << "Vous pouvez vous rendre dans le [MontDuPeril] ou au [RanchLonlon]" << endl;
            cout << "Que faire ?" << endl;

            cout << "Endurance :" << endurance << endl;
            
            cin >> choixLieu;

            if ( choixLieu == "MontDuPeril" ){

                cout << "Vous vous trouvez maintenant dans le Mont du Peril." << endl;
                // cout << "Vous vous trouvez maintenant dans lieu6->getName()" << endl;
                localisation = 6;
                endurance -= 16;
                // cout << lieu6->getDescription() << endl;
                cout << "Endurance :" << endurance << endl;

                }
            
            if ( choixLieu == "RanchLonLon" ){

                cout << "Voici le Ranch Lonlon. Y a une petite fille qui chante tout le temps. Il y a un campement dans ce lieu. Voulez-vous vous reposer ? OUI/NON" << endl;
                localisation = 4;
                string choixouinon = "";

                
                // cout << lieu2->getDescription() << endl;
                cout << "Endurance :" << endurance << endl;

                if (choixouinon == "OUI"){

                    endurance = 100;

                }

                if (choixouinon == "NON"){

                    
                    
                }

            }


        }

    }

};
