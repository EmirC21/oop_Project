
#pragma once
//Point sinifi
class Point
{
private:
	double x, y, z;
public:
	Point();
	~Point();
	void setX(double x);
	double getX() const;
	void setY(double y);
	double getY() const;
	void setZ(double z);
	double getZ() const;
	bool operator==(Point &P) const;
	double distance(const Point&) const;
};

