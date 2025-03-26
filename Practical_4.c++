#include <iostream>
using namespace std;

int main() {
    int score;
    cout<<"Enter your score: "<<endl;
    cin>>score;
    if(score>=50){
        cout<<"Almost, try again"<<endl;
    }
    else{
        cout<<"You lost"<<endl;
    }

}