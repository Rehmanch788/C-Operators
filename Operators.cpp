#include<iostream>
using namespace std;
int main()
{
	int x=3; int y=6;      //declare and assign value
	++x;                    //increment operator
   cout<<x<<"\n";            //use escape sequence and display result
	--y;                       //decrement operator
	cout<<y<<"\n";             // use escape sequence and display
	cout<<(x>y)<<"\n";         //use comparison operator
	cout<<(x<y)<<"\n";        //use comparison operator
	cout<<(x==y)<<"\n";      // use equal operatore 
	cout<<(x>y||y>x)<<"\n";    // use logical and comparison operator
	cout<<(x>y&&y>x)<<"\n";    //use logical and comparison operator
	cout<<!(x>y);            //use Not operator 
	return 0;
}
