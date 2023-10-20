#include "book.h"
//#include <bits/stdc++.h>
using namespace std;

book::book(int id,double price,string name)
{
	this->id = id;
	this->price = price;
	this->name = name;
}
void book::setid(int id){
			this->id = id;
}
		
void book::setprice(double price){
			this->price = price;
		}
void book::setname(string name){
			this->name = name;
			}
		
		
		

//book::~book()
//{
//}
