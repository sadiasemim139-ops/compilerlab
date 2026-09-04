
#include<iostream>
#include<string>
using namespace std;
int main() {
string input;
cin>>input;
//cout<<"identifier"<<endl;
for(int i=0; i<=input.length(); i++){
    if(input[i]>= 'a' && input[i]<='z'){
        string n=" ";
        while(input[i]>= 'a' && input[i]<='z'){
                n+=input[i];
        i++;
            /*cout<<n<<endl;
            i--;*/
        }
        cout<<n<<endl<<"Identifier"<<endl<<endl;
            i--;

    }
    //cout<<"\noperator"<<endl;
    else if(input[i]=='='){
        cout<<input[i]<<endl<<"Assignment "<<endl<<endl;
    }
    else if(input[i]=='+' | input[i]=='*' | input[i]=='/' ){
        cout<<endl<<input[i]<<endl<<"Operator ="<<endl<<endl;
    }
    else{
            if(input[i]>='0' && input[i]<='9'){
                string num=" ";
                while(input[i]>='0' && input[i]<='9'){
                    num+=input[i];
                    i++;
                }
                cout<<num<<endl<<"numeric number"<<endl;
                i--;
            }
       //cout<<input[i]<<endl<<"numeric number"<<endl;
    }
}
}
