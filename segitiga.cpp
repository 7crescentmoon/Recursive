#include <iostream>
using namespace std;

void triangle(int amount, int tri = 0){
    //membuat bintang sesuai dengan var tri
    int i = 0;
    while (i < tri){
        cout<<"*";
        i++;
    }cout<< endl;
    tri++;
    //jika nilai var tri tidak sama dengan amount
    //maka akan menjalankan fungsinya lagi
    if (tri != amount +1){
        triangle(amount,tri);
    }   
}
int main(){
    int amount;
    //menginputkan jumlah segitiga yg ingin dibuat
    cout<<"masukan jumlah segitiga : ";
    cin>>amount;
    //fungsi srgitiga
    triangle(amount); 
}