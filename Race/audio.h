#pragma once
#include<SFML/Audio/Sound.hpp>
#include<SFML/Audio/SoundBuffer.hpp>
#include<iostream>

class audio
{
private:
	sf::SoundBuffer audioFile;
	sf::Sound sound;
public:
	audio();
	void playPass();
};

