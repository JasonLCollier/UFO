#include <iostream>
#include <vector>

std::string start() {
	std::string codeword;

	system("CLS");
	std::cout << "=============\n";
	std::cout << "UFO: The Game\n";
	std::cout << "=============\n";
	std::cout << "Instructions:\t* Save your friend from alien abduction by guessing the letters in the codeword.\n";
	std::cout << "\t\t* Player 1 enter a codeword (lower case): ";
	std::cin >> codeword;
	std::cout << "\n\t\t* Player 2 begin!\n";
	return codeword;
}

bool end_game(std::string answer, std::string codeword) {
	char input = 'n';
	bool play = false;

	std::cout << "The codeword was: " << codeword << "\n";

	if (answer == codeword) {
		std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
	}
	else {
		std::cout << "Oh no! The UFO just flew away with another person!\n";
	}
	std::cout << "Play again? Type 'y' to replay or 'n' to end game: ";
	std::cin >> input;
	if (input == 'y') {
		play = true;
	}
	else if (input == 'n') {
		play = false;
	}
	return play;

}

void display_status(std::vector<char> incorrect, std::string answer) {

	std::cout << "\nIncorrect Guesses:\n";

	for (int i = 0; i < incorrect.size(); i++) {
		std::cout << incorrect[i] << ' ';
	}

	std::cout << "\nCodeword:\n";

	for (int i = 0; i < answer.length(); i++) {
		std::cout << answer[i] << ' ';
	}

}

void display_misses(int misses) {

	if (misses == 0 || misses == 1) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /   0   \\      / `-----------'  \n";
		std::cout << "            /  --|--  \\    /                 \n";
		std::cout << "           /     |     \\                     \n";
		std::cout << "          /     / \\     \\                   \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 2) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  0  \\        (  Send help! ) \n";
		std::cout << "             / --|-- \\      / `-----------'  \n";
		std::cout << "            /    |    \\    /                 \n";
		std::cout << "           /    / \\    \\                    \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 3) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 3) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 4) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  |  \\        (  Send help! ) \n";
		std::cout << "             /  / \\  \\      / `-----------' \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 5) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              / / \\ \\        (  Send help! )\n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 6) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}

}