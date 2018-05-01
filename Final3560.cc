// Reilly Zink
// May 1st, 2018
// CS3560 Final

#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void countLine(char* pName){

    int line = 0;

    if(pName == "")
        pName = "Ohio University";
    else if(pName == "\n")
        line++;

    cout<< line << " Lines" << endl;
    
}

void countChar(char* pName){

    int count = 0;

    if(pName == "")
        pName = "Athens";
    else if(pName == " ")
        count++;

    cout<< count << " Characters" << endl;
}

int main(){

    char* pName;

    cout<< "enter a string: " << endl;
    cin>> pName;
    countLine(pName);
    countChar(pName); 

    return 0;
}
