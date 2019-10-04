#include <iostream>
#include <vector>
#include "functions.h"

int main() {
	bool play = true;

	while (play) {

	std::string codeword;
	std::string answer = "";
	int misses = 0;

	std::vector<char> incorrect;
	bool guess = false;
	char letter;

	codeword = start();

	for (int i = 0; i < codeword.length(); i++) {
		answer += "_";
	}
		while (answer != codeword && misses < 7) {
			display_misses(misses);
			display_status(incorrect, answer);

			std::cout << "\n\nPlease enter your guess: ";
			std::cin >> letter;

			for (int i = 0; i < codeword.length(); i++) {
				if (letter == codeword[i]) {

					answer[i] = letter;
					guess = true;

				}
			}
			if (guess) {

				std::cout << "----------------------------------------------\n";
				std::cout << "\n\n\n\n\nCorrect! You're closer to cracking the codeword.\n";

			}
			else {

				std::cout << "----------------------------------------------\n";
				std::cout << "\n\n\n\n\nIncorrect! The tractor beam pulls the person in further.\n";
				incorrect.push_back(letter);
				misses++;

			}
			guess = false;
		}

		play = end_game(answer, codeword);
	}

}