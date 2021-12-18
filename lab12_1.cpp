#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
    int r;
    string x;
    srand(time(0));
    r = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0 ; i<3 ; i++){
        cin.get();
    }
    if(r==0) x="A";
    if(r==1) x="B+";
    if(r==2) x="B";
    if(r==3) x="C+";
    if(r==4) x="C";
    if(r==5) x="D+";
    if(r==6) x="D";
    if(r==7) x="F";
    if(r==8) x="W";
    cout << "You will get " << x << " in this 261102.";
    return 0;
}