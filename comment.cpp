#include<iostream>
using namespace std;
int main() {
string line;
cout << " enter the line:- ";

getline(cin, line);

 if (line.substr(0, 2)=="//"){
        cout<<"it's a single line";
    }

else if (line.substr(0, 2)=="/*" &&
    line.substr(line.length()-2)=="*/"){
        cout<<"it's a multiple line";
    }
    else{
        cout<<"it's not a comment"<<endl;
    }
    return 0;
}
