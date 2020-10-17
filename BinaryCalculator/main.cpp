#include "includes.h"

class Binary
{
public:

	inline void makeArray(int value)
	{
		while (value > 0)
		{
			arrayBinary[arrayValue] = value % 2;
			value = value / 2;
			arrayValue++;
		}
	}

	inline void decimalToBinary(int value)
	{
		makeArray(value);

		for (int binCalc = arrayValue - 1; binCalc >= 0; binCalc--)
			cout << arrayBinary[binCalc];
	}

	inline void binaryToDecimal(int value)
	{
		while (value) {
			int lastDigit = value % 10;
			value = value / 10;
			decimalValue += lastDigit * decimalBase;
			decimalBase = decimalBase * 2;
		}

		cout << decimalValue << endl;
	}

}binary;

void DecToBinary()
{
	system("cls");
	cout << "[!] Insert an number to convert in binary code: ";
	cout << "\n[>] ";

	cin >> decimalWait;

	cout << "\n[Success]: "; binary.decimalToBinary(decimalWait);
}

void BinToDec()
{
	system("cls");
	cout << "[!] Insert an binary code to convert in decimal: ";
	cout << "\n[>] ";

	cin >> binaryWait;

	cout << "\n[Success]: "; binary.binaryToDecimal(binaryWait);
}

int main()
{
	#ifdef _WIN32
		
		cout << "[!] Please select an option: \n";
		cout << "[1] Decimal to Binary.\n";
		cout << "[2] Binary to decimal.\n";
		cout << "\n[>] ";

		cin >> selectedOption;
		
		if (selectedOption == 1)
			DecToBinary();
		else
			BinToDec();

	#endif
}
