#include <iostream>
using namespace std;
int main () {
    int score1, score2, score3, score4, score5;
    cout << "EXAMINATION SCORE"<<endl;
    cout << "Enter score for 5 students ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    cout << "SCORE 1"<< '\t' <<"SCORE 2" << '\t' <<"SCORE 3" << '\t' <<"SCORE 4 "<< "SCORE 5" << endl;

    cout << score1 << '\t' <<score2 << '\t' <<score3 << '\t' <<score4 << '\t' <<score5 << endl;
    // cout << "4"<< '\t' <<"7" << '\t' <<"6" << '\t' <<"6" << '\t' << "4" << endl;
    // cout << "5"<< '\t' <<"5" << '\t' <<"7" << '\t' <<"7" << '\t' << "5" << endl;
    return 0;
}