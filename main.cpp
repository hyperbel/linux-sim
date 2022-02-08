#include <iostream>
#include "commands.h"
#include "global.h"
#include "main.h"

int main() {
	initValues();
	//Command inp
	while (true) {
	}
	return 0;
}

void initValues() {

	std::cout << "What shall your simulated PC be called?\n";
	std::cin >> pc;
	std::cout << "And what is your name?\n";
	std::cin >> user;
	PS1 ="["+user+"@"+pc+"]$";
}
