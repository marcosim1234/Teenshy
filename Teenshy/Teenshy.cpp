#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <stdlib.h>

using namespace std;



void gc(void) { cout << "GC: NITR0 STRING DETECTED\n\n"; }
void gc2(void) { cout << "GC: ASCENDENCY STRING DETECTED\n\n"; }
void ce(void) { cout << "GT: CHEAT ENGINE STRING DETECTED\n\n"; }


void msgbox(void) {
	system("cls");
	cout << "ERROR 406 \n\nNot Acceptable \nThe file must exist with a valid address, have a .txt extension and no spaces \n\nRestart the Program";
}

int main()
{
	system("color 6");
	system("Title TEENSHY SS TOOL FOR BEDROCK EDITION -MADE BY HSM CLAN");

	ifstream inputfile;
	string line;
	string filename;
	bool fulfilled = false;

	cout << "TEENSHY 1.0 BY HSM CLAN\n";
	cout << "THIS VERSION ONLY DETECT CHEAT ENGINE\n\n";
	cout << "File: ";
	cin >> filename;
	cout << "\n";
	inputfile.open(filename.c_str());
	system("cls");

	if (inputfile.fail())
		msgbox();

	while (getline(inputfile, line)) {
		if (line.find("!1970/01/01:00:00:00!6bad9!") != std::string::npos) {
			fulfilled = true;
			ce();

		}
		else if (line.find("!1970/01/01:00:00:00!e2e832!") != std::string::npos) {
			fulfilled = true;
			ce();


		}
		else if (line.find("!1970/01/01:00:00:00!e37cbf!") != std::string::npos) {
			fulfilled = true;
			ce();
		}
		else if (line.find("2021/10/28:07:01:12") != std::string::npos) {
			fulfilled = true;
			gc();

		}
		else if (line.find("2021/10/04:02:34:44") != std::string::npos) {
			fulfilled = true;
			gc();

		}
	}


	inputfile.close();
	if (!fulfilled) {
		cout << "\n\nNOTHING WAS FOUND\n\n";
	}
	system("pause");
	cin.get();
}
