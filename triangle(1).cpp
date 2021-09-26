#include <iostream>
using namespace std;

int main(){
	int num,s;
	
	cout <<"Enter number : ";
    cin >> num;
    
    for(int i = 1, k = 0; i <= num; ++i, k = 0){
    	for(s = 1; s <= num-i; ++s){
    		cout <<" ";
		}
		while(k != 2*i-1){
			cout << "*";
			k++;
		}
		cout<<endl;
	}
	return 0;
}
