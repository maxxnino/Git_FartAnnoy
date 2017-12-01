#include "Ball.h"

void Ball::DoCollisionWalls(const RectF& walls)
{
	RectF rect = GetRect();
	if (rect.left < walls.left)
	{
		vec.x += walls.left - rect.left;
		RebounceX();
	}
	else if (rect.right > walls.right)
	{
		vec.x -= rect.right - walls.right;
		RebounceX();
	}
	if (rect.top < walls.top)
	{
		vec.x += walls.top - rect.top;
		RebounceY();
	}
	else if (rect.bottom > walls.bottom)
	{
		vec.x -= rect.bottom - walls.bottom;
		RebounceY();
	}
}

void Ball::RebounceX()
{
	vel.x = -vel.x;
}

void Ball::RebounceY()
{
	vel.y = -vel.y;
}

void Ball::Draw(Graphics & gfx) const
{
	SpriteCodex::DrawBall(vec, gfx);
}


void Ball::Update(const float dt)
{
	vec += vel*dt;
}

RectF Ball::GetRect()
{
	RectF rect = RectF::GetRectCenter(vec, rad, rad);
	return rect;
}
