#include "Industry.h"
#include "EVIndustry.h"
#include "VGIndustry.h"
#include "AirlinesIndustry.h"
#include "TechIndustry.h"
#include "User.h"
#include "BuySellMenu.h"
#include "ProfileMenu.h"

int main(){

  srand(time(NULL)); // seeding the random var

  User u1 = User();

  ProfileMenu m1 = ProfileMenu(u1);

  m1.showMenu();

  BuySellMenu bsm = BuySellMenu(u1);

  bsm.showMenu();

  return 0;

}
