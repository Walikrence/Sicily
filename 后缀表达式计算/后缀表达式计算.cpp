#include <stack>
#include <iostream>
#include <string>
#include<stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		stack<double> s;
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			double n1,n2;
			if(str[j]>96 && str[j]<123)
				s.push(str[j]-96);
			else {
				n1=s.top();
				s.pop();
				n2=s.top();
				s.pop();
			}
			switch(str[j]){
				case '+':
					s.push(n1+n2);
					break;
				case '-':
					s.push(n1-n2);
					break;
				case '*':
					s.push(n1*n2);
					break;
				case '/':
					s.push(n1/n2);
					break;
			}
		}
		printf("%.2lf\n",s.top());
	}
	return 0;
}
