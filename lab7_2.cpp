#include <iostream>
#include <string>
using namespace std;

int main(){
    string name ;
    string movie ;
    string date ;
    string word ;
    string bot = "Fahsai";
    int urid,gear ;
    cout << bot << ": Sawadee ka...Can you tell me your name?\n" << "?????: " ;
    getline(cin, name) ;
    cout << bot << ": Wow!!! " << name << " is a really cool name.\n" ;
    cout << bot << ": I think you are an Engineering student. What is your student ID?\n" ;
    cout << name << ": " ;
    cin >> urid ;
    cin.ignore() ;
    gear = (urid/10000000) - 12 ;
    cout << bot << ": I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n" ;
    cout << bot << ": Let's go to the cinema together!!!\n" << bot << ": What movie do you want to watch?\n" << name << ": " ;
    getline(cin, movie) ;
    cout << bot << ": So....which day are you free to go with me?\n" << name << ": " ;
    getline(cin, date) ;
    cout << bot << ": " << date << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n" << name << ": " ;
    getline(cin, word) ;
    cout << bot << ": 555+ see you " << date << "." << " Bye Bye \\(^ ^)/\n" ;
    return 0;
}
