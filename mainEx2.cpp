#include <string>
#include <vector>
#include <iostream>



using namespace std;



int main() {

    bool gameOver = false;
    string lieu1 = "Foret Kokiri";
    string lieu2 = "Chateau d'Hyrule";
    string lieu3 = "Vallée Gerudo";
    string choix = "";
    int localisation = 1;

    cout << "Vous vous trouvez au milieu des plaines d'Hyrule, vous pouvez vous rendre dans la [ForetKokiri] ou au [ChateauHyrule]" << endl;
    cout << "Quelle destination ?" << endl;
    cin >> choix;

    if ( choix == "ForetKokiri" ){

            cout << "Vous vous trouvez maintenant dans la Foret Kokiri." << endl;

        }
       
    if ( choix == "ChateauHyrule" ){

        cout << "Le Chateau d'Hyrule est maintenant devant vous." << endl;

    }


    };
