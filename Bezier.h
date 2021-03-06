#ifndef __BEZIER_H__
#define __BEZIER_H__
#include "LineGeometry.h"

class Bezier
{
public:
	void getBezier(const std::vector<GVCoord>& controlPoints, std::vector<GVCoord>* bezierPoints);
};
#endif