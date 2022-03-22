#include <string>
#include <vector>
#include <iostream>



using namespace std;



int main() {

    bool gameOver = false;
    string lieu1 = "Foret Kokiri";
    string lieu2 = "Chateau d'Hyrule";
    string lieu3 = "Vallée Gerudo";
    int choix = 0;
    int localisation = 1;

    cout << "Vous vous trouvez au milieu des plaines d'Hyrule, vous pouvez vous rendre dans la [Foret Kokiri] ou au [Chateau d'Hyrule]" << endl;
    cout << "1 : [Foret Kokiri]" << endl;
    cout << "2 : [Chateau Hyrule]" << endl;
    cin >> choix;

    if ( choix == 1 ){

            cout << "Vous vous trouvez maintenant dans la Foret Kokiri." << endl;

        }
       
    if ( choix == 2 ){

        cout << "Le Chateau d'Hyrule est maintenant devant vous." << endl;

    }


    };
