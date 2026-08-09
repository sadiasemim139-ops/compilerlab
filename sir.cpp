#include<bits/stdc++.h>
using namespace std;

int main(){
string input;
getline(cin,input);
cout<< input;
int n=input.length();
cout<<n<<endl;
if(input[0]=='/' && input[1]=='/'){
    cout<<"comment";

}

else if(input[0]=='/' && input[1]=='*' && input[n-1]=='/' && input[n-2]=='*'){
    cout<<"it's a multiple line";
}
else{
    cout<<"it's not cmt";
}
}
