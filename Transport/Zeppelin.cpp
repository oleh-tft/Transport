#include "Zeppelin.h"

Zeppelin::Zeppelin() : Aerial()
{
	envelopeColor = "";
}

Zeppelin::Zeppelin(string m, int max, bool civil, int ms, int en, float fuel, string color)
	: Aerial(m, max, civil, ms, en, fuel)
{
	envelopeColor = color;
}

void Zeppelin::Output() const
{
	Aerial::Output();
	cout << "Envelope color: " << envelopeColor << endl;
}

void Zeppelin::Input()
{
	Aerial::Input();
	cout << "Envelope color: ";
	cin >> envelopeColor;
}

string Zeppelin::GetEnvelopeColor() const
{
	return envelopeColor;
}

void Zeppelin::SetEnvelopeColor(string color)
{
	envelopeColor = color;
}
