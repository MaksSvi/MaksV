#include <iostream>
#include <locale>
#include <cstdlib> 
#include <ctime> 
#include <string>

using namespace std;

struct Tree {
	int height;

	Tree(int h) : height(h) {}

	// Метод для отримання випадкового кольору
	string getRandomColor() {
		int colorCode = rand() % 8 + 30;
		return "\033[" + to_string(colorCode) + "m";
	}

	// Метод для скидання кольору
	string resetColor() {
		return "\033[0m";
	}

	// Метод для побудови ялинки
	void draw() {
		for (int i = 1; i <= height; i++) {
			// Виведення пробілів перед символами ялинки
			for (int n = 0; n < height - i; n++) {
				cout << " ";
			}
			// Виведення символів ялинки з випадковим кольором
			for (int m = 0; m < i * 2 - 1; m++) {
				char randomChar = '!' + rand() % 94;
				cout << getRandomColor() << randomChar << resetColor();
			}
			cout << endl;
		}
	}
};

int main() {
	setlocale(0, "");
	srand(time(0));

	int height;
	cout << "Висота ялинки: ";
	cin >> height;

	Tree tree(height);
	tree.draw();

	return 0;
}
