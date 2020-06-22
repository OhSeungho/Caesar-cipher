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
	cout << "���� ��ȣ" << endl;
	cout << "�� �Է�(��ҹ��� ����) : ";
	cin >> text;
	cout << "��ȣ�� : " << encryption(text, shift) << endl;;
	cout << "��ȣ�� �Է�(��ҹ��� ����) : ";
	cin >> text;
	cout << "�� : " << decryption(text, shift);	

	return 0;
}