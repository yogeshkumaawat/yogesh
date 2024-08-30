//Nuber guessing game

#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout<<"Welcome to the Game"<<endl;
    cout<<"I have a random number between 1 to 100. Guess it."<<endl;
    
    do{
        cout<<"Enter your the number : ";
        cin>>guess;
        attempts++;

        if(guess > randomNumber){
            cout<<"Enter number is too high. Try again."<<endl;
        } else if(guess < randomNumber){
            cout<<"Enter number is too small. Try again."<<endl;
        } else{
            cout<<"Congratulations! You gussed the correct number in "<<attempts<<" attempts."<<endl;
        }
    } while(guess != randomNumber);

    return 0;
}