#pragma once

class Transporter
{
	int id;
	string marka;
	string model;
	Engine engine;

protected:

	// Constructors

	Transporter() { this->id = global_id++; }
	Transporter(string marka, string model, Engine engine)
	{
		this->id = global_id++;
		this->engine = engine;
		this->set_marka(marka);
		this->set_model(model);
	}

public:

	// Set Methods

	void set_marka(string marka)
	{
		if (marka.length() >= 3 && marka.length() <= 30)
			this->marka = marka;
		else
			assert(!"Marka is not correct !!!");
	}

	void set_model(string model)
	{
		if (model.length() >= 3 && marka.length() <= 30)
			this->model = model;
		else
			assert(!"Model is not correct !!!");
	}

	// Get Methods

	virtual inline int get_id() const { return this->id; }
	virtual inline string get_marka() const { return this->marka; }
	virtual inline string get_model() const { return this->model; }
	virtual inline Engine get_engine() const { return this->engine; }
};