#include <iostream>
using namespace std;

//count of zero

int countOfZero(int arr[], int length,int i = 0,int zero = 0){
	if (i != length){
		//jika nilai indexnya "0" / = 0, maka var zero akan bertambah 1
		//dan begitu juga jelanjutnya
		if(arr[i] == 0){
			zero++;
		}
		i++;
		countOfZero(arr,length,i,zero);
	}
	//dan jika smua sudah di cari / di cek maka akan
	//mengembalikan nilai yang di dapat
	else{
		return zero;
	}
}
//driver main
int main(){
	int arr[] = {1,2,0,7,8,0,5,0,10,0,0};
	int length = sizeof(arr) / sizeof(arr[0]);	
	cout<<"count of zero is : "<<countOfZero(arr,length);
}