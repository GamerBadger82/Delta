#include "StdAfx.h"
#include "Controller.h"
#include <iostream>


Controller::Controller(void)
{
}


Controller::~Controller(void)
{
}


void Controller::start(void)
{
	process();
}


void Controller::process(void)
{
	int counter(0);
	while (counter < 10000)
	{
		std::cout << counter << " " << std::endl;
		++counter;
	}
}