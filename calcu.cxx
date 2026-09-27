#include<iostream>
using namespace std;
int main(){
	 int a, b; 
	 char op;
	 cout<<"Enter value a ";
	 cin>>a;
	 cout<<"+,-,*,/";
	 cin>> op;
	 cout<<"Enter value b ";
	 cin>>b;
	 switch(op){
	 	case '+':
	 	cout<<"Answer "<< a+b;
	 	break;
	case '-':
	 	cout<<"Answer "<< a-b;
	 	break;
	 	case '*':
	 	cout<<"Answer "<< a*b;
	 	break;
	 	case'/':
	 	if(b!=0)
	 	cout<<"Answer "<<a/b;
	 	else
	 	cout<<"can not divide by zero";
	 	break;	
	 default:
	 cout<<"invalid operator";
	 }
	 return 0;
}
	 