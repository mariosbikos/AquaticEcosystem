// AquaticEcosystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ocean.h"

int main()
{
	Ocean ocean(25, 25);


	sf::RenderWindow ApplicationWindow(sf::VideoMode(800, 600), "Aquatic Ecosystem");

	ApplicationWindow.setFramerateLimit(60);
	
	while (ApplicationWindow.isOpen())
	{
		sf::Event event;
		while (ApplicationWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				ApplicationWindow.close();




		}
	

		//shape.rotate(1.0f);
		//CLEAR VIEWPORT
		ApplicationWindow.clear();

		//RENDERING 
		//ApplicationWindow.draw(background);
		
		//FORCE DISPLAY NEW THINGS ON SCREEN
		ApplicationWindow.display();


	}



    return 0;
}

