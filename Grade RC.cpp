#include<iostream>// preprocessor directive
using namespace std;

int main()     // /Main function
{
 int Numbers;
cout<<"Enter your numbers=";   //Take Input from user 
cin>>Numbers;                 //store it in Numbers
if(Numbers>=90)             //apply condition
{
cout<<"Your grade is =A+";                // print the grade
}
else if(Numbers>=80)       //apply condition
{
cout<<"Your grade is =A";           
}
else if(Numbers>=70)     //apply condition
{
cout<<"Your grade is =B";        // print the grade
}
else if(Numbers>=60)        //apply another condition
{
cout<<"Your grade is =C";           // print the grade      
}
else if(Numbers>=50)          //apply another condition
{
cout<<"Your grade is =D";              // print the grade
}
else
{ 
cout<<"you are Fail";           // print the grade
}
    return 0;           //end the program
}
