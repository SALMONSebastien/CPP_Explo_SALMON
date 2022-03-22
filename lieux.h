#ifndef LIEUX_H
#define LIEUX_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Lieu {

   protected:
        string _name ;
        string _description ;
        int _difficulty;
       

    public:

        Lieu();
        Lieu(string _name,string _description, int difficulty);

            string getName();
                
            string getDescription();
    

            int getDifficulty();
                //renvoie la difficulté

            int setDifficulty();
                //modifie la difficulté

            void deplacement();

           


};

#endif