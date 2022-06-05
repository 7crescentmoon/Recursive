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
    char choice; 
    do
    {
        cout<<"masukan jumlah segitiga : ";
        cin>>amount;
        triangle(amount); ;
        cout<<"Lagi ( y / n)";
        cin>>choice;

    } while (choice != 'n');
    return false;  
}
