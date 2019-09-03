#include "audio.h"

audio::audio()
{
	if (!audioFile.loadFromFile("point.wav"))
		std::cout << "Failed to load audio file";
	else sound.setBuffer(audioFile);
}

void audio::playPass()
{
	sound.play();
}
