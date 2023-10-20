#include<iostream>

class book {
	public : int bookid;
			string name;
			double price;
			
	book (int bookid, string name, double price)
	{
		this->bookid=bookid;
		this->name=name;
		this->price=price;
	} 
	virtual calprice()=0;
};
	
