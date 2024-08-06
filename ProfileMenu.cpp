#include "ProfileMenu.h"
#include "common.h"

string ProfileMenu::menuIntro = "Welcome to Thor's Trading App!";

ProfileMenu::ProfileMenu(User& user) : user(user) {} // constructor with initializer list
                                                     
void ProfileMenu::showMenu(){
  cout << endl << endl << "---------------------------------------------------------------------------------------------------------------------------" << endl;
  cout << menuIntro << endl << endl;
  int userInput = 0;

  while(true){
    cout << "Please select from the following options: " << endl;
    cout << "1. Create a new portfolio." << endl << "2. Display an existing portfolio." << endl << endl;
    userInput=getUserInput();

    if(userInput==1){
      createPortfolio();
      return;
    }
    else if(userInput==2){
      bool readStatus;

      // could include error handling for if there isn't an existing portfolio

      readStatus = loadProfile();

      if(readStatus==true){
        cout << "Closing Portfolio and Exiting Application." << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------" << endl;
        exit(1);
      }

      cout << "There is no existing portfolio. Please create one first." << endl;
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
    }
    else{
      cout << "Invalid input. Try again." << endl << endl;
    }
  }
}




