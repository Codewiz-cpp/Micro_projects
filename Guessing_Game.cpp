#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int main(int k){
    srand(time(0));
    int random=rand() % 100 + 1;
    int guess,attempts;
    int max_attempts=10;
    int n,response;
    cout<<"Welcome User,"<<endl
        <<"This is a Guessing Game in which you have to guess the random number."<<endl
        <<"In Short THE UTIMATE TEST OF LUCK"<<endl
        <<"You will get "<<max_attempts<<" attempts."<<endl
        <<"Best of Luck. Let's Begin"<<endl;
    for(int i=1;i<=10;i++){
        cout<<"Enter Your Guess:";
        cin>>guess;
        attempts++;
        if(guess<0 || guess>100){
            cout<<"Please Enter the Guess[0,100] only. Try again"<<endl;
            attempts--;
        }
        if(guess==random){
            cout<<"CONGRATULATIONS! You have guessed the number "<<guess<<" in "<<attempts<<" attempts."<<endl
                <<"Score: You Won"<<endl;
            break;
        }
        if(guess != random && attempts==10){
            cout<<"You were not able to guess the number in "<<max_attempts<<" attempts"<<endl
                <<"Score: You Lose"<<endl<<"Better Luck next time."<<endl;
        }
        if(guess>random && (guess>=0 && guess<=100)){
            cout<<"Too High. Try again"<<endl;
        }
        if(guess<random && (guess>=0 && guess<=100)){
            cout<<"Too Low. Try again."<<endl;
        }
    }
    cout<<"Do you want to play again(1 for yes/0 for no):";
    cin>>response;
    if(response==1){
        main(1);
    }
    else{
        cout<<"Thank You For Playing"<<endl;
        }
}