/*
 * File:		DecentEngine.h
 * Description:		Header file that holds basic version information and other simple functions
 *
 * Created:		2018-11-3
 * By:			Jon Santmyer
 * 			jonsantmyer@gmail.com
 *
 * Used Compiler:	gcc -std=c++17
*/

#ifndef DECENTENGINE_H
#define DECENTENGINE_H

#include "Logger.h"

namespace DecentEngine {
	
	#define VERSION "0.9.1"

    extern Logger baseLogger;

	/**
	 * @brief Logs the version of the engine that the game is using
	 */
    extern void engine_init();
    extern void engine_postgl_init();

};

#endif
