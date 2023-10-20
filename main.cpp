#include <iostream>
#include "book.h"
#include <bits/stdc++.h>
using namespace std;

double calprice(book b1,book b2){
	
	return (b1.getprice() + b2.getprice());
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	book b1(12,1200.2,"Book1");
	book b2(12,200.2,"Book2");
	
	double ans = calprice(b1,b2);
	
		
	//double ans = calprice(b1,b2);
	
	
	return 0;
}
