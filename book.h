#ifndef BOOK_H
#define BOOK_H
#include <bits/stdc++.h>
using namespace std;
class book
{
	private:
		int id;
		double price;
		string name;
	public:
		book(int id,double price,string name);
		
		void setid(int id);
		void setprice(double price);
		void setname(string name);
		
		int getid(){
			return id;
		}
			double getprice(){
			return price;
		}
			string getname(){
			return name;
		}
		

		
		//~book()
	protected:
};

#endif
