#include<iostream>

class Figures
{
public:
	Figures() : Figures(0)
	{}

	int Setter()
	{
		return number_sides;
	}

protected:
	Figures(int sides)
	{
		number_sides = sides;
	}

private:
	int number_sides;
};

class Triangle : public Figures
{
public:
	Triangle():Figures(3)
	{
	}
};

class Quadrilateral : public Figures
{
public:
	Quadrilateral() :Figures(4)
	{ }
};

int main()
{
	Figures figures;
	Triangle triangle;
	Quadrilateral quadrilateral;
	std::cout << "Figures: " << figures.Setter() << std::endl;
	std::cout << "Triangle: " << triangle.Setter() << std::endl;
	std::cout << "Quadrilateral: " << quadrilateral.Setter() << std::endl;
	return EXIT_SUCCESS;
}