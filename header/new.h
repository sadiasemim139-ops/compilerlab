#include<bits/stdc++.h>
using namespace std;

int jog(int a, int b){
return a+b;


}
int biyog(int a, int b){
    return a-b;
}
int gun(int a, int b){
    return a*b;
}
string vag(int a, int b){
    if(b==0){
        return "Invalid";
    }
    else{

    return to_string(a/b);
    }
}

