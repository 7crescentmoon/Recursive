#include <iostream>
using namespace std;

void triangle(int amount, int tri = 0){
    int i = 0;
    while (i < tri){
        cout<<"*";
        i++;
    }cout<< endl;
    tri++;

    if (tri != amount +1){
        triangle(amount,tri);
    }   
}
int main(){
    int amount;
    cout<<"masukan jumlah segitiga : ";
    cin>>amount;
    triangle(amount); 
}