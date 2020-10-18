/*
 * MorseCodeService.h
 *
 *  Created on: 18. 10. 2020
 *      Author: milan
 */

#ifndef SERVICES_MORSECODESERVICE_H_
#define SERVICES_MORSECODESERVICE_H_
#include <string>


class MorseCodeService {
public:
	MorseCodeService();
	virtual ~MorseCodeService();
	std::string toMorse(char ch);
};

#endif /* SERVICES_MORSECODESERVICE_H_ */
