#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
void again(int x){
    srand(time(0));
    int random=rand() % 100 + 1;
    int guess,attempts;
    int max_attempts=10;
    int n,response,rep;
    cout<<"Welcome Back User,"<<endl
        <<"You already know the rules"<<endl;
    cout<<"Enter 1 to repeat the rules or 0 to continue:";
    cin>>rep;
    if(rep==1){
        cout<<"This is Guessing Game in which you have to guess the random number."<<endl
            <<"In Short THE ULTIMATE TEST OF LUCK"<<endl
            <<"You will get "<<max_attempts<<" attempts to guess the number."<<endl
            <<"Best of Luck. Let's Begin again"<<endl;
    }
    else{
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
    cout<<"Do you want to play again(1 for yes/0 for no):";
    cin>>response;
    if(response==1){
        again(1);
    }
    else{
        cout<<"Thank You For Playing"<<endl;
        }
    }
}
int main(){
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
    cout<<"Do you want to play again(1 for yes/0 for no):";
    cin>>response;
    if(response==1){
        again(1);
    }
    else{
        cout<<"Thank You For Playing"<<endl;
        }
}