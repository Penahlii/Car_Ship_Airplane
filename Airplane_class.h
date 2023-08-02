#pragma once

class Airplane : Transporter
{
	ush engine_count;
	ush passanger_capacity;

public:

	// Construcctros

	Airplane() : Transporter() {}
	Airplane(string marka, string model, Engine engine, ush engine_count, ush passanger_capacity) : Transporter(marka, model, engine)
	{
		this->set_engine_count(engine_count);
		this->set_passanger_count(passanger_capacity);
	}

	// Set Methods

	void set_engine_count(ush engine_count)
	{
		if (engine_count > 0 && engine_count <= 5)
			this->engine_count = engine_count;
		else
			assert(!"Engine count is not correct !!!");
	}

	void set_passanger_count(ush passanger_capacity)
	{
		if (passanger_capacity > 50 && passanger_capacity <= 300)
			this->passanger_capacity = passanger_capacity;
		else
			assert(!"Passanger capacity is not correct !!!");
	}

	// Get Methods

	inline ush get_engne_count() const { return this->engine_count; }
	inline ush get_passanger_capacity() const { return this->passanger_capacity; }

	// cout 

	friend ostream& operator<<(ostream& os, const Airplane& airplane);
	friend ostream& operator<<(ostream& os, const Airplane* airplane);
};

// cout 

ostream& operator<<(ostream& os, const Airplane& airplane)
{
	os << "Marka: " << airplane.get_marka() << endl;
	os << "Model: " << airplane.get_model() << endl;
	cout << airplane.get_engine();
	os << "Engine count: " << airplane.get_engne_count() << endl;
	os << "Passanger capacity: " << airplane.get_passanger_capacity() << endl;

	return os;
}

ostream& operator<<(ostream& os, const Airplane* airplane)
{
	os << "Marka: " << airplane->get_marka() << endl;
	os << "Model: " << airplane->get_model() << endl;
	cout << airplane->get_engine();
	os << "Engine count: " << airplane->get_engne_count() << endl;
	os << "Passanger capacity: " << airplane->get_passanger_capacity() << endl;

	return os;
}