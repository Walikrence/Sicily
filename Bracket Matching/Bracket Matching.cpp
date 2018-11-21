#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		string str;
		stack<char> s1;
		int flag = 1;
		cin >> str;
		for(int j=0;j<str.size();j++){
			if(str[j]=='(' || str[j]=='[' || str[j]=='{')
				s1.push(str[j]);
			else if (str[j]==')' || str[j]==']' || str[j]=='}')
			{
				if (str[j]==')' && s1.top()=='(')
					s1.pop();
				else if (str[j]==']' && s1.top()=='[')
					s1.pop();
				else if (str[j]=='}' && s1.top()=='{')
					s1.pop();
				else {
					cout << "No" <<endl;
					flag = 0;
				}
			}
		}
		if(flag)
			cout << "Yes" <<endl;
	}
}