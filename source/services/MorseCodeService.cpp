/*
 * MorseCodeService.cpp
 *
 *  Created on: 18. 10. 2020
 *      Author: milan
 */

#include <services/MorseCodeService.h>

const int NUM_CHARS = 36;

char regularCharacters[NUM_CHARS] = { '0', '1', '2', '3', '4', '5',
                            '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
                            'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                            'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
                          };

std::string morse[NUM_CHARS] = {
                            "-----", ".----", "..---", "...--",
                            "....-", ".....", "-....", "--...",
                            "---..", "----.", ".-", "-...",
                            "-.-.", "-..", ".", "..-.",
                            "--.", "....", "..", ".---",
                            "-.-", ".-..", "--", "-.",
                            "---", ".--.", "--.-", ".-.",
                            "...", "-", "..-", "...-",
                            ".--", "-..-", "-.--", "--.."
                          };

MorseCodeService::MorseCodeService() {
	// TODO Auto-generated constructor stub

}

MorseCodeService::~MorseCodeService() {
	// TODO Auto-generated destructor stub
}

std::string MorseCodeService::toMorse(char ch)
{
    int index = 0;
    std::string morseValue;

    while (index < NUM_CHARS && ch != regularCharacters[index]) {
    	index++;
    }

    if(index > NUM_CHARS) {
    	//TODO toto sa este dohodnut ake to ma mat spravanie
    	morseValue = "UNDEFINED";
    } else {
    	morseValue = morse[index];
    }

    return morseValue;
}

