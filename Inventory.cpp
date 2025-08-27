#include "Inventory.h"
#include "Item.h"
#include <iostream>

using namespace std;

template <typename T>
Inventory<T>::Inventory(int capacity_) {
	if (capacity_ <= 0) {
		capacity_ = 1;
	}
	this->capacity_ = capacity_;

	pItems_ = new T[this->capacity_];
}

template <typename T>
Inventory<T>::Inventory(const Inventory<T>& other) {
	Assign(other);
	cout << "인벤토리 복사 완료" << endl;
}

template <typename T>
Inventory<T>::~Inventory() {
	delete[] pItems_;

	pItems_ = nullptr;
}

template <typename T>
void Inventory<T>::AddItem(const T& item) {
	if (size_ >= capacity_) {
		Resize(capacity_ * 2);
	}

	pItems_[size_] = item;
	++size_;
}

template <typename T>
void Inventory<T>::RemoveLastItem() {
	if (size_ > 0) {
		size_--;
	}
	else {
		cout << "인벤토리가 비어있습니다." << endl;
	}
}

template <typename T>
int const Inventory<T>::GetSize() {
	return size_;
}

template <typename T>
int const Inventory<T>::GetCapacity() {
	return capacity_;
}

template <typename T>
void const Inventory<T>::PrintAllItems() {
	if (size_ <= 0) {
		cout << "인벤토리가 비어있습니다." << endl;
	}

	for (int i = 0; i < size_; i++) {
		Item* item = dynamic_cast<Item*>(&pItems_[i]);

		if (nullptr != item) {
			item->PrintInfo();
		}
	}
}

template <typename T>
void Inventory<T>::Assign(const Inventory<T>& other) {
	capacity_ = other.capacity_;
	size_ = other.size_;
	pItems_ = new T[capacity_];
	for (int i = 0; i < size_; ++i) {
		pItems_[i] = other.pItems_[i];
	}
}

template <typename T>
void Inventory<T>::Resize(int newCapacity) {
	capacity_ = newCapacity;

	T* tmp_I = new T[capacity_];

	for (int i = 0; i < size_; i++) {
		tmp_I[i] = pItems_[i];
	}

	delete[] pItems_;

	pItems_ = nullptr;

	pItems_ = tmp_I;
}

static bool compareItemsByPrice(const Item& a, const Item& b)
{
	return a.GetPrice() < b.GetPrice();
}

template <typename T>
void Inventory<T>::SortItems() {
	sort(pItems_[0], pItems_[size_], compareItemsByPrice);
}