#pragma once
#ifndef VECTOR2_H
#define VECTOR2_H

#if _MSC_VER > 1000
	#pragma once
#endif

#include "CrossPlatformController.h"

#define ZERO Vector2(0, 0) public

class Vector2
{
private:
	float32 m_x, m_y;
	float32 m_theta;

public:
	Vector2();
	Vector2(float32 x, float32 y);
	~Vector2();
};

#endif // VECTOR2_H