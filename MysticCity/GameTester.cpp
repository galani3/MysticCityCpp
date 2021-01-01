#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Direction.h"
#include "Place.h"
#include "Game.h"

std::vector<std::string> split(const std::string& s, char delimiter);

int main()
{

	std::string line;

	/*Place a(1, "First Room", "Dark Room");
	Place b(2, "Second room", "Well lit room");
	Place c(3, "Third Room", "Small room");
	Place d(4, "Fourth Room", "Large Room");

	Direction x(1, a, b, "N");
	Direction y(2, a, c, "E");
	Direction z(3, a, d, "S");

	a.addDirection(x);
	a.addDirection(y);
	a.addDirection(z);*/

	//a.print();


	Game g;
	Place b(2, "Second room", "Well lit room");

	std::fstream file("sixRooms.gdf");

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::size_t pos = line.find('/');
			if (pos != std::string::npos && line.substr(0, pos) != "") {
				std::string filteredCommentLine = line.substr(0, pos);
				std::cout << filteredCommentLine << std::endl;

				std::string magicWord;

			}
			else if(line[0] == '*'){
				std::cout << line << std::endl;
			}
		}

		file.close();

		g.print();
	}
	else
	{
		std::cout << "Failed to open file" << std::endl;
	}

	return 0;
}


std::vector<std::string> split(const std::string& s, char delimiter) {
	std::vector<std::string>tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter))
	{
		tokens.push_back(token);
	}

	return tokens;
}