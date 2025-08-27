#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item() {
	this->name_ = "";
	this->price_ = 0;
}

Item::Item(string name_, double price_) {
	this->name_ = name_;
	this->price_ = price_;
}

// Getter
string Item::GetName() {
	return name_;
}

double Item::GetPrice() const{
	return price_;
}

// Setter
void Item::SetName(string name_) {
	this->name_ = name_;
}

void Item::SetPrice(double price_) {
	this->price_ = price_;
}

void Item::PrintInfo() const {
	cout << "[이름: " << name_ << ", 가격: " << price_ << "G]" << endl;
}