#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int main(){
    srand(time(0));
    int random=rand() % 100 + 1;
    int guess,attempts;
    int max_attempts=10;
    int n;
    cout<<"Welcome User,"<<endl
        <<"This is a Guessing Game in which you have to guess the random number."<<endl
        <<"You will get "<<max_attempts<<" attempts."<<endl
        <<"Best of Luck. Let's Begin"<<endl;
    for(int i=1;i<=10;i++){
        cout<<"Enter Your Guess:";
        cin>>guess;
        attempts++;
        if(guess<0 || guess>100){
            cout<<"Please Enter the Guess[0,100] only. Try again";
            attempts--;
        }
        if(guess==random){
            cout<<"The Guessed number "<<guess<<" is Correct."<<endl
                <<"Score: You Won"<<endl;
            break;
        }
        if(guess>random){
            cout<<"Too High. Try again"<<endl;
        }
        else{
            cout<<"Too Low. Try again."<<endl;
        }
    }
    cout<<"Thank You For Playing"<<endl;
}