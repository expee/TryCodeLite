#include "DisplayManager.h"
#include <cstdlib> // NULL 

DisplayManager* DisplayManager::ms_instance = NULL;

DisplayManager::DisplayManager()
{
}

DisplayManager::~DisplayManager()
{
}

DisplayManager* DisplayManager::Instance()
{
	if (ms_instance == NULL) {
		ms_instance = new DisplayManager();
	}
	return ms_instance;
}

void DisplayManager::Release()
{
	if (ms_instance) {
		delete ms_instance;
	}
	ms_instance = NULL;
}

