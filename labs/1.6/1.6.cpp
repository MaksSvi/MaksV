#include "iostream"

using namespace std;

/*
* Done by
* Student name: Svicharov Maksim
* Student group: 121
* Variant: 14
* Lab 1.6
*/
int main()
{
	//Part 1
	char CONST1 = 'U';
	char chVar1 = '*';
	const char chVar2 = '6';
	char CONST2 = 0x7b;//{
	char chVar3 = 0x4c;//L
	const char chVar4 = 0x18;//CAN

	//Part 2
	//Опису змінних типів int, float, unsigned short
	int nA;
	float fltB;
	unsigned short wC;

	//Ініціювання змінних, що описанні в п.1 даного
	nA = 5876;
	fltB = 21.09;
	wC = 333;

	//Опису змінних типів double, int, char.
	double dblD;
	int nE;
	char chF;

	//Ініціювання змінних 
	// за допомогою неявного приведення типів
	dblD = nA;
	nE = fltB;
	chF = wC;

	//за допомогою явного приведення
	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	//з обходом суворої типізації
	double* pdblD;
	pdblD = (double*)&nA;
	dblD = *pdblD;
	
	int* pnE;
	pnE = (int*)&fltB;
	nE = *pnE;

	char* pchF;
	pchF = (char*)&wC;
	chF = *pchF;
}