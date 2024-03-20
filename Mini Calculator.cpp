#include<iostream>
using namespace std;
class calc{
	double a,b,result;
	char ch;
	public:
		void input(){
			cout<<"Enter operands";
			cin>>a>>b;
		}
		void output(){
			cout<<"Answer= "<<result;
		}
		void menu(){
			cout<<"Enter operator";
			cin>>ch;
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
	c.input();
	c.menu();
	c.output();
	return 0;
}