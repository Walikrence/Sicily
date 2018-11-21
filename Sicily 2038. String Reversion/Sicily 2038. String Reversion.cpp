#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		string str;
		int flag = 0;
		cin >> str;
		for (int j = 0; j < str.size(); j++){
			if (str[j] == '_'){//find '_'
				flag = 1;
				for(int k = j-1; k >= 0; k--){
					cout << str[k];
				}
				cout << '_';
				for(int k = str.size()-1; k > j; k--){
					cout << str[k];
				}
				cout << endl;
				break;
			}
		}
		if(!flag){
			for(int j = str.size()-1; j >= 0; j--){
				cout << str[j];
			}
			cout << endl;
		}
	}
	return 0;
}