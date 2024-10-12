#include "Boat.h"

Boat::Boat() : Aquatic()
{
	material = "";
}

Boat::Boat(string m, int max, bool civil, int ms, bool en, string nav, bool abr, string mat)
	: Aquatic(m, max, civil, ms, en, nav, abr)
{
	material = mat;
}

void Boat::Output() const
{
	Aquatic::Output();
	cout << "Material: " << material << endl;
}

void Boat::Input()
{
	Aquatic::Input();
	cout << "Material: ";
	cin >> material;
}

string Boat::GetMaterial() const
{
	return material;
}

void Boat::SetMaterial(string mat)
{
	material = mat;
}
