#pragma once

class Ship : Transporter
{
	bool has_sail;

public:

	// Constructors

	Ship() : Transporter() {}
	Ship(string marka, string model, Engine engine, bool has_sail) : Transporter(marka, model, engine) { this->has_sail = has_sail; }

	// Get Method

	inline void get_has_sail() const { cout << (this->has_sail ? "* Ship has Sail" : "* Ship does not have Sail") << endl; }

	// cout

	friend ostream& operator<<(ostream& os, const Ship& ship);
	friend ostream& operator<<(ostream& os, const Ship* ship);
};

// cout

ostream& operator<<(ostream& os, const Ship& ship)
{
	os << "Marka: " << ship.get_marka() << endl;
	os << "Model: " << ship.get_model() << endl;
	cout << ship.get_engine();
	ship.get_has_sail();
	os << endl;

	return os;
}

ostream& operator<<(ostream& os, const Ship* ship)
{
	os << "Marka: " << ship->get_marka() << endl;
	os << "Model: " << ship->get_model() << endl;
	cout << ship->get_engine();
	ship->get_has_sail();
	os << endl;

	return os;
}