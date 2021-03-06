#include "RectF.h"

RectF::RectF(const Vec2 & topleft, const Vec2 & bottomright)
{
	RectF(topleft.x, topleft.y, bottomright.x, bottomright.y);
}

RectF::RectF(const Vec2 & topleft, float width, float height)
{
	RectF(topleft, topleft + Vec2(width, height));
}

RectF RectF::GetRectCenter(const Vec2 & center, float halfwidth, float halfheight)
{
	Vec2 half = Vec2(halfwidth, halfwidth);
	return RectF(center - half, center + half);
}

bool RectF::isOverLap(const RectF & rect) const
{
	return left < rect.right
		&& right > rect.left
		&& bottom < rect.top
		&& top > rect.bottom;
}
