#include<iostream>
using namespace std;
int main (){
    for(int i=1; i <= 100; i++){
        if(i % 2 != 0){
            cout<<i<<endl;
        }
        for(int a=1; a<=100;a++){
            if (a % 2 == 0){
                cout<<a<<endl;
            }
        }
    }
    return 0;
}
