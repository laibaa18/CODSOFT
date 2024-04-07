#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main() {

    int number;
    number = rand() % 80+1;
    int guess;
    srand (time(0));

    cout<<"play number guessing game \n";
    do {
    cout<<"enter your guess  " ;
    cin>>guess;
    if (guess<number)
        cout<<"your guess is too low" <<endl;

    else if (guess>number)
        cout<<"your guess is too high, keep trying" <<endl;

    else
         cout<<"your guess is correct" <<endl;
}
   while (guess!=number);
   return 0;
}