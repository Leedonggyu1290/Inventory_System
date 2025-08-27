#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item(string name_ = "default", double price_ = 1000) {
	this->name_ = name_;
	this->price_ = price_;
}

Item::~Item() {

}

// Getter
string Item::GetName() {
	return name_;
}

double Item::GetPrice() {
	return price_;
}

// Setter
void Item::SetName(string name_) {
	this->name_ = name_;
}

void Item::SetPrice(double price_) {
	this->price_ = price_;
}

void const Item::PrintInfo() {
	cout << "[이름: " << name_ << ", 가격: " << price_ << "G]" << endl;
}