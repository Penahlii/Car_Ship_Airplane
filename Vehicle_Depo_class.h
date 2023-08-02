#pragma once

class Vehicle_Depo
{
	string depo_name;

public:

	// Stack fields

	Stack<Car> cars;
	Stack<Ship> ships;
	Stack<Airplane> airplanes;

	// Constructor

	Vehicle_Depo(string name) { this->set_name(name); }
	
	// Set Method

	void set_name(string name)
	{
		if (name.length() >= 3)
			this->depo_name = name;
		else
			assert(!"Name is not correct !!!");
	}

	// Get Method

	inline string get_name() const { return this->depo_name; }

	// Show ALl Vehicles;

	void show_all_vehicles() const
	{
		cout << "Depo Name: " << this->depo_name << endl;
		cout << "\t\tCars\n";
		if (this->cars.isEmpty())
			cout << "There is not Car in the Depo Yet :)" << endl;
		cout << this->cars << endl;
		cout << "\t\tShips\n";
		if (this->ships.isEmpty())
			cout << "There is not any Ship in the Depo Yet :)" << endl;
		cout << this->ships << endl;
		cout << "\t\tAirplanes\n";
		if (this->airplanes.isEmpty())
			cout << "There is not any Airplane in the Depo Yet :)" << endl;
		cout << this->airplanes << endl;
	}

	friend ostream& operator<<(ostream& os, const Vehicle_Depo& depo);
};

ostream& operator<<(ostream& os, const Vehicle_Depo& depo)
{
	depo.show_all_vehicles();

	return os;
}