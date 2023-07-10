#include "dmdsource.hpp"
#include "../dmd/dmdframe.hpp"

DMDFrame DMDSource::getNextFrame()
{
	return DMDFrame();
}

bool DMDSource::isFinished()
{
	return true;
}

bool DMDSource::isFrameReady()
{
	return false;
}

bool DMDSource::configureFromPtree(boost::property_tree::ptree pt_general, boost::property_tree::ptree pt_source) {
	return false;
}

SourceProperties DMDSource::getProperties() {
	throw std::logic_error("Function not yet implemented");	
}

void DMDSource::close()
{
}

void DMDSource::start()
{
}

int DMDSource::getDroppedFrames()
{
	return 0;
}

SourceProperties::SourceProperties(int width, int height, int bitsperpixel)
{
	this->width = width;
	this->height = height;
	this->bitsperpixel = bitsperpixel;
}

SourceProperties::SourceProperties(DMDFrame& f)
{
	width = f.getWidth();
	height = f.getHeight();
	bitsperpixel = f.getBitsPerPixel();
}
