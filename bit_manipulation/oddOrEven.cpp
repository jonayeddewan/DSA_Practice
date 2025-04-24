#include<bits/stdc++.h>
using namespace std;

void oddOrEven(int num){
    if(!(num&1))
    cout<<"even\n";
    else
    cout<<"odd\n";
}

int main(){
    oddOrEven(5);
    oddOrEven(6);
    return 0;
}