#ifndef __CONVERT__H__
#define __CONVERT__H__

#include <opencv2/core/core.hpp>

#include "AddressLib/vopio.h"

class Convert {

public:
	static void ipl2momvop( cv::Mat const & src, MomVop* dst );
	static void setShape( cv::Mat& mask, MomVop* img, int val, int fval = 255, cv::Rect* roi = 0 );
	static void setShape( cv::Mat& mask, MomVop* img, int val, int bval = 0, int fval = 255, cv::Rect* roi = 0 );

	// Set all the values of the mask (a_chan) to fval
	static void setMaskValue( MomVop* img, int fval = 255 );
};

#endif

