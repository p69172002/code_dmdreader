#include <queue>

#include "dmdsource.h"

using namespace std;

class PNGSource : public DMDSource{
public:

	virtual DMDFrame getNextFrame() override;

	virtual bool isFinished() override;
	virtual bool isFrameReady() override;

	virtual bool configureFromPtree(boost::property_tree::ptree pt_general, boost::property_tree::ptree pt_source) override;

private:

	queue<DMDFrame> frames;
	int currentFrame = 0;

};