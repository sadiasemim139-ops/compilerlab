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
string vagsesh(int a,int b){
if(b==0){
    return "Modulus by 0 is not possible";

}
else{
   return to_string (a%b);
}

}
float power(float a){
return sqrt(a);
}

int absuulate(int a){
return abs(a);
}

int borosonggkha(int a, int b){
    return max(a,b);
}

int chotosonggkha(int a, int b){
    return min(a,b);
}

float gor(float a, float b){
    return (a+b)/2;
}

long long ultagun(int a){
    long long res=1;
    for(int i=1;i<=a; i++){
       res*=i;
    }
    return res;
}


int akbarao(int a){
return a+1;
}

int akkomao(int a){
return a-1;
}

bool jor(int a){
return a%2==0;
}

bool bijor(int a){
return a%2!=0;
}

bool akok(int a){
    for(int i=2; i*i<=a; i++){
        if(a%i==0){

return false;
    }
}
return true;
}

void ulta(int &a,int&b){
int temp=a;
a=b;
b=temp;

}

int backora(int a){
int backs=0;
while(a!=0){
    backs=backs*10+a%10;
    a/=10;
}
return backs;
}


void sajao(int &a, int &b) {
if (a > b) {
int temp = a;
a = b;
b = temp;
}
}

bool beshi(int a, int b) {
return a > b;
}


bool kom(int a, int b) {
return a < b;
}

bool milao(int a, int b) {
return a == b;

}

int borgo(int a) {
return a * a;
}


int ghono(int a) {
return a * a * a;
}
