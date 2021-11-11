#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <stdlib.h>

using namespace std;


void gc(void) { cout << "GC: NITR0 STRING DETECTED\n\n"; }
void gc2(void) { cout << "GC: ASCENDENCY STRING DETECTED\n\n"; }
void ce(void) { cout << "GT: CHEAT ENGINE STRING DETECTED\n\n"; }

void msgbox(void);
void gc(void);
void gc2(void);
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
	}


	inputfile.close();
	if (!fulfilled) {
		cout << "\n\nNOTHING WAS FOUND\n\n";
	}
	system("pause");
	cin.get();
}

  

