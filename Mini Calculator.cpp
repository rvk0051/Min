#include<iostream>
using namespace std;
class calc{
	double a,b,result;
	char ch;
	public:
		void input(){
			cout<<"Enter operands";
			cin>>a>>b;
			cout<<"Enter operator";
			cin>>ch;
		}
		void output(){
			cout<<"Answer= "<<result;
		}
		void menu(){
			switch(ch){
				case '+':
					result=a+b;
					break;
				case '-':
					result=a-b;
					break;
				case '*':
					result=a*b;
					break;
				case'/':
				    result=a/b;
				    break;
			}
		}
};
main(){
	calc c;
	c.input();//Recieves operands and operators as input.
	c.menu();//Does the operation.
	c.output();//Displays the result.
	return 0;
}
