#include <iostream>
using namespace std;

class goingPoop {
public:
    string name;
    bool needsToPoop;

    goingPoop(string pooperName, bool gottaGo) {
        name = pooperName;
        needsToPoop = gottaGo;
    }
    void pooping() {
        string response;
        
        cout << "Lets poop " << name << "!" << endl;
        cout << "Type your pre-poop catchphrase and then press enter to start pooping!" << endl;
        cin >> response;
        if (needsToPoop == true) {
            cout << "*plop* *plop*\nGood job! You pooped!\nIm so proud of you!" << endl;
        }
        else {
            cout << "Im sorry...\nYou didn't poop\nBetter luck next time..." << endl;
        }
    }
};

int main()
{
   
    int needToPoopReponse;
    int nameResponse;
    
    goingPoop eric("Eric", true);
    goingPoop natalie("Natalie", false);
    goingPoop mark("Mark", true);
    goingPoop dexter("Dexter", false);

    cout << "======================\n";
    cout << "Do you need to poop???\n";
    cout << "======================\n ";

    cout << "Type 1 for Yes, and 2 for No:  \n ";
    cin >> needToPoopReponse;
    if (needToPoopReponse == 1) {
        cout << "======================\n";
        cout << " 1- Eric\n 2- Natalie\n 3- Mark\n 4- Dexter\n";
        cout << "======================\n ";

        cout << "Who are you?: ";
        cin >> nameResponse;

        switch (nameResponse) {
        case 1:
            eric.pooping();
            break;
        case 2:
            natalie.pooping();
            break;
        case 3:
            mark.pooping();
            break;    
        case 4:
            cout << "Ok!\nLets go for a walk!\n";
            break;
        default:
            cout << "Invalid choice\nRestart the program\n";
        }
    }
    else if (needToPoopReponse == 2) {
        cout << "Ok\nCome back when you need to poop!\n";
    }
    else {
        cout << "Please restart the program wise guy\n";
    }
    

    return 0;
}

  
