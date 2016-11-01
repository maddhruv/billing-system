#include <iostream>
#include <cstring>
#include <string>
#include "ruchi.h"
using namespace std;

int main(){
	cout<<"-----------Ruchi Selection----------\n------------------------------------";
	char price[100];
	int hund, tens, ones;
	string mrp;
	cout<<"\nEnter the price of all the items:\n";
	//entering the prices
	for(y=0; y<100; y++){
		ge
		hund = encode::encode(price[v]);
		tens = encode::encode(price[v+1]);
		ones = encode::encode(price[v+2]);
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