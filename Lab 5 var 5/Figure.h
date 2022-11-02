#pragma once
class Figure
{
protected:
	float area;
public:
	Figure() { area = 0; }
	~Figure() {}
	virtual float Area() = 0;
};
class Rectangle : public Figure
{
private:
	float a;
	float b;
public:
	Rectangle(float tA, float tB)
	{
		a = tA;
		b = tB;
	}
	~Rectangle() {}
	virtual float Area()
	{
		area = a * b;
		return area;
	}
};
class Circle : public Figure
{
private:
	float r;
public:
	Circle(float tR) { r = tR; }
	~Circle() {}
	virtual float Area()
	{
		area = 3.14 * r * r;
		return area;
	}
};
class RightTriangle : public Figure
{
private:
	float a;
	float b;
public:
	RightTriangle(float tA, float tB)
	{
		a = tA;
		b = tB;
	}
	~RightTriangle() {}
	virtual float Area()
	{
		area = 0.5 * a * b;
		return area;
	}
};
class Trapeze : public Figure
{
private:
	float a;
	float b;
	float h;
public:
	Trapeze(float tA, float tB, float tH)
	{
		a = tA;
		b = tB;
		h = tH;
	}
	~Trapeze() {}
	virtual float Area()
	{
		area = ((a + b) / 2.0) * h;
		return area;
	}
};