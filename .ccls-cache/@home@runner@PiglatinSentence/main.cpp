#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

/* Stack Overflow https://stackoverflow.com/a/53878 */

vector<string> split(const char *str, char c = ' ')
{
	vector<string> result;
  do {
    const char *begin = str;
		while(*str != c && *str) str++;
    result.push_back(string(begin, str));
  } while (0 != *str++);
  return result;
}

int main() {
	string strToSplit;
	vector<string> convIn;
	string toConv;
	string allButFirst;
	string first;
	string convOut;
	string final;
	
	cout << "Igpay Atinlay Onvertercay" << endl;
	cout << "Inputyay ayay entencesay oryay ordway" << endl;
	getline(cin, strToSplit);

	int n = strToSplit.length();
	char charToSplit[n + 1];

	strcpy(charToSplit, strToSplit.c_str());

	convIn = split(charToSplit, ' ');

	for (int i = 0; i < convIn.size(); i++) {
		toConv = convIn.at(i);
		allButFirst = toConv;
		allButFirst = allButFirst.erase(0, 1);
		first = toConv[0];
		if (first == "a" || first == "e" || first == "i" || first == "o" || first == "u" || first == "A" || first == "E" || first == "I" || first == "O" || first == "U") {
			convOut = first + allButFirst + "yay";
		} else {
			convOut = allButFirst + first + "ay";
		}

		final = final + convOut + " ";
	}

	cout << final << endl;

	return 0;
}