#include <iostream> 
using namespace std;

string encryption(string text, int shift) {
	string result = "";

	for (int i = 0; i < text.length(); i++)	{
		if (isupper(text[i]))
			result += char(int(text[i] + shift - 65) % 26 + 65);

		else
			result += char(int(text[i] + shift - 97) % 26 + 97);
	}
	return result;
}

string decryption(string text, int shift) {
	string result = "";

	for (int i = 0; i < text.length(); i++) {
		if (isupper(text[i]))
			result += char(int(text[i] - shift - 65) % 26 + 65);

		else
			result += char(int(text[i] - shift - 97) % 26 + 97);
	}
	return result;
}

int main() {
	string text = "";
	int shift = 3;
	cout << "시저 암호" << endl;
	cout << "평문 입력(대소문자 구분) : ";
	cin >> text;
	cout << "암호문 : " << encryption(text, shift) << endl;;
	cout << "암호문 입력(대소문자 구분) : ";
	cin >> text;
	cout << "평문 : " << decryption(text, shift);	

	return 0;
}