#pragma once
#include <string>

using namespace std;

class Item {
protected:
	string name_;
	double price_;
public:
	Item(string name_ = "default", double price_ = 1000);
	~Item();

	// Getter
	string GetName();
	double GetPrice();

	// Setter
	void SetName(string name_);
	void SetPrice(double price_);

	void const PrintInfo();
};