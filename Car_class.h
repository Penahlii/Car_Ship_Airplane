#pragma once

class Car : public Transporter
{
	bool has_spoiler;

public:

	// All constructors

	Car() : Transporter() { this->has_spoiler = false; }
	Car(string marka, string model, Engine engine, bool has_spoiler) : Transporter(marka, model, engine) { this->has_spoiler = has_spoiler; }

	// Get Method

	inline void get_has_spoiler() const { cout << (this->has_spoiler ? "* Car has spoiler" : "* Car does not have spoiler") << endl; }

	// cout

	friend ostream& operator<<(ostream& os, const Car* car);
	friend ostream& operator<<(ostream& os, const Car& car);
};

// cout

ostream& operator<<(ostream& os, const Car* car)
{
	os << "ID: " << car->get_id() << endl;
	os << "Marka: " << car->get_marka() << endl;
	os << "Model: " << car->get_model() << endl;
	cout << car->get_engine();
	car->get_has_spoiler();

	return os;
}

ostream& operator<<(ostream& os, const Car& car)
{
	os << "ID: " << car.get_id() << endl;
	os << "Marka: " << car.get_marka() << endl;
	os << "Model: " << car.get_model() << endl;
	cout << car.get_engine();
	car.get_has_spoiler();

	return os;
}