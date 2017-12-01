#include "Brick.h"

void Brick::Draw(Graphics & gfx)
{
	gfx.DrawRect(rect, c);
}

void Brick::Update(const Vec2 & target)
{
}
