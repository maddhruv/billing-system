#include <iostream>
#include <cstring>
#include "ruchi.h"
using namespace std;

int main(){
	using encode::encode;
	cout<<"-------Ruchi Selection----------\n--------------------------------";
	char price[100], mrp[4];
	int hund, tens, ones;
	cout<<"\nEnter the price of all the items:\n";
	//entering the prices
	int j(0), y;
	do{
		cin>>price[j];
		if(price[j]=='='){
			break;
		}
		j++;
	}
	while(j<100);
	int length = strlen(price)-1;
	int numOfItems = length/3;
	int r(0), v;
	int rate[30];
	for(y=0; y<numOfItems; y++){
		v=y*3;
		hund = encode(price[v]);
		tens = encode(price[v+1]);
		ones = encode(price[v+2]);
		rate[r] =  encode::increment(hund, tens, ones);
		cout<<price[v]<<price[v+1]<<price[v+2]<<" :\t"<<rate[r]<<endl;
		r++;
	}
	int totalPrice(0);
	for(int w=0; w<r; w++){
		totalPrice += rate[w];
	}
	cout<<"Total Price of "<<numOfItems<< " items is :\t"<<totalPrice<<" Rupees"<<endl;
	int discount(0);
	cout<<"Any discount: \n";
	cin>>discount;
	int amount;
	amount = totalPrice - (totalPrice/discount);
	cout<<"Amount payable for "<<numOfItems<<" items is:\t"<<amount<<" Rupees"<<endl;
	return 0;
}
