#pragma once

class DisplayManager
{
	static DisplayManager* ms_instance;

public:
	static DisplayManager* Instance();
	static void Release();

private:
	DisplayManager();
	~DisplayManager();

};

