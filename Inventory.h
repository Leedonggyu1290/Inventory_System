#pragma once

using namespace std;

template <typename T>
class Inventory {
protected:
	T* pItems_ = new T[];
	int capacity_ = 0;
	int size_ = 0;
public:
	Inventory(int capaticy_ = 0);
	Inventory(const Inventory<T>& other);
	~Inventory();

	void AddItem(const T& item);
	void RemoveLastItem();
	int const GetSize();
	int const GetCapacity();
	void const PrintAllItems();
	void Assign(const Inventory<T>& other);
	void Resize(int newCapacity);
	void SortItems();
};
