#include <iostream>
#include <cmath>       
#include <math.h> 
using namespace std;

int main() {
   int amountOfPeople;
   int largePizzas;
   int medRemainder;
   int medPizzas;
   int smallRemainder;
   int smallPizzas;
   int totalCostRounded;
   double sqInLg;
   double sqInMd;
   double sqInSm;
   double sqInPizza;
   double sqInPerGuest;
   double tipPcent;
   double tipPcentMult;
   double totalCost;
   const int pPerLarge = 7;
   const int pPerMedium = 3;
   const int pPerSmall = 1;
   const int lgDia = 20;
   const int medDia = 16;
   const int smDia = 12;
   const double lgCst = 14.68;
   const double mdCst = 11.48;
   const double smCst = 7.28;
   const double PI = 3.14159265;
   
   //Obtaining user input. 
   cout << "Please enter how many guests to order for: " << endl;
   cin >> amountOfPeople;
   
   //Math to figure out how many pizzas and what sizes.
   largePizzas = amountOfPeople / pPerLarge;
   medRemainder = amountOfPeople % pPerLarge;
   medPizzas = medRemainder / pPerMedium;
   smallRemainder = medRemainder % pPerMedium;
   smallPizzas = smallRemainder / pPerSmall;
   
   //Outputting pizza amount
   cout << largePizzas << " large pizzas, " << medPizzas << " medium pizzas, " << "and " << smallPizzas << " small pizzas will be needed." << endl << endl;
   
   //Math to figure out how many square inches of pizza.
   sqInLg = largePizzas * (lgDia / 2) * (lgDia / 2) * PI;
   sqInMd = medPizzas * (medDia / 2) * (medDia / 2) * PI;
   sqInSm = smallPizzas * (smDia / 2) * (smDia / 2) * PI;
   sqInPizza = sqInSm + sqInMd + sqInLg; 
   sqInPerGuest = sqInPizza / amountOfPeople;
   
   //Outputting amount of square inches. 
   cout << "A total of " << sqInPizza << " square inches of pizza will be ordered (" << sqInPerGuest << " per guest)." << endl << endl; 
   
   //Obtaining user input. 
   cout << "Please enter the tip as a percentage (i.e. 10 means 10%): " << endl;
   cin >> tipPcent;
   
   //Calculatinf tip and total cost.
   tipPcentMult = (tipPcent * .01) + 1;
   totalCost = ((largePizzas * lgCst) + (medPizzas * mdCst) + (smallPizzas * smCst)) * tipPcentMult;
   totalCostRounded = round(totalCost);//Rounding the total cost.
   
   //Outputting total cost rounded
   cout << "The total cost of the event will be: $" << totalCostRounded << endl;
   
   return 0;
}
