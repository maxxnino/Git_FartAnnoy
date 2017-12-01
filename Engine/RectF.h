#pragma once

#include "Vec2.h"

class RectF
{
public:
	RectF() = default;
	RectF(float left, float top, float right, float bottom)
		:
		left(left),
		top(top),
		right(right),
		bottom(bottom)
	{}
	RectF(const Vec2& topleft, const Vec2& bottomright);
	RectF(const Vec2& topleft, float width, float height);
	static RectF GetRectCenter(const Vec2 & center, float halfwidth, float halfheight);
	bool isOverLap(const RectF& rect) const;

public:
	float left;
	float right;
	float top;
	float bottom;
};