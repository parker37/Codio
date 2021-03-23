/* 
 * Code by: Ronte' Parker
 * For: Howard University's Unix Lab Course
 * Date: March 18th 2021
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(int argc, char** argv) {
	
	string message;
	cout << "Enter the message you want to encrypt: \n";
	getline(cin, message);

	string encrMsg = "";

	for(int i = 0; i < message.length(); i++) {
		if(encrMsg.length() % 5 == 0 && encrMsg.length() != 0) {
			encrMsg += " ";
		}
		char l = char(message[i]) + atoi(argv[1]);
    char curr = char(message[i]);

		if (curr >= 97 && curr <= 122) {
			if (l > 'z') {
				encrMsg += char(l - 26 - 32);
			} else {
				encrMsg += char(l - 32);
			}
		} else if (curr >= 65 && curr <= 90) {
			if (l > 'Z') {
				encrMsg += char(l - 26);
			} else {
				encrMsg += char(l);
			}
		}
	}

	cout << encrMsg << endl;

	return 0;
}
