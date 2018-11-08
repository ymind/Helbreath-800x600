/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/


/*** Put here global data for your server ***/
#define NAME_WORLDNAME			"WS1" // Name for default (1st) server
#define MSG_WORLDNAME1			"ABADDON Server" // Long name for 1st server...
#define MSG_HOMEPAGE			"http://www.helbreath.com"
#define DEF_UPPERVERSION		3
#define DEF_LOWERVERSION		82
#define DEF_SERVER_IP                   "10.0.10.1"
#define DEF_SERVER_PORT			2848
#define DEF_STATS_LIMIT                 200
#define DEF_MAKE_ACCOUNT
//#define DEF_USE_DNS
//#define DEF_SERVER_DNS                "helbreathserver.no-ip.org"

//#define _DEBUG

#ifndef _DEBUG
	#undef DEF_WINDOWED_MODE
#endif