#pragma once
#include <string>

using namespace std;

class Item {
protected:
	string name_;
	double price_;
public:
	Item();
	Item(string name_ = "default", double price_ = 1000);

	// Getter
	string GetName();
	double GetPrice() const;

	// Setter
	void SetName(string name_);
	void SetPrice(double price_);

	void PrintInfo() const;
};