#include "MainMenu.h"
#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;
using namespace std;

/// main function 
int main()
{
	RenderWindow window(VideoMode(1200, 800), "SFML Works!", Style::Close | Style::Titlebar);



	Game game(1200, 800);
	SoundBuffer soundBuffer = game.Background_sound();
	Sound sound;
	sound.setBuffer(soundBuffer);
	sound.play();
	while (window.isOpen())
	{

		game.Render(window);
		game.update(window);
	}
	// Function to convert UTC time to local time
	std::tm localtime(std::chrono::system_clock::time_point time) {
		std::time_t currentTime = std::chrono::system_clock::to_time_t(time);
		std::tm localTime;
		localtime_s(&localTime, &currentTime);
		return localTime;
	};

	MainMenu* m = new MainMenu();
	sf::Text timeText;

	tm currentTimeLocal = localtime(std::chrono::system_clock::now());

	// Format the time string
	char timeStr[9];
	std::strftime(timeStr, sizeof timeStr, "%T", &currentTimeLocal);

	// Set the time string in the SFML text
	timeText.setString(timeStr);


	// Wait for one second before updating the time again
	std::this_thread::sleep_for(std::chrono::seconds(1));

	m->run(timeText);
	return 0;
}