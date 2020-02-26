/* Write a program that allows a user to input an integer representing total cents, and that outputs the number of quarter, dime, nickel, 
and penny coins that equals that total, using the fewest coins (i.e., using the most possible of a larger coin first). 
Use one function to compute the coins, having one input (pass-by-value) parameter and four output (pass-by-reference) parameters.*/

#include <iostream>
using namespace std;

void TotalCents(int cents)
{
    int origCents = cents;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    while (cents != 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            quarters++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            dimes++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            nickles++;
        }
        else
        {
            cents -= 1;
            pennies++;
        }
    }
    cout << origCents << " cents is equal to: " << quarters << " quarter(s) " << dimes << " dime(s) " << nickles << " nickle(s) " << pennies
        << " pennies" << endl;
}

int main()
{
    int cents;

    cout << "Please enter a random number of cents: ";
    cin >> cents;

    TotalCents(cents);
}

