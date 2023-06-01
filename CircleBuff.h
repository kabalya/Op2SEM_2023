#pragma once
#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
class CircleBuffer
{
private:
	size_t _size, _capacity;
	T* _data = nullptr;
public:
	class Iterator : public std::iterator<std::input_iterator_tag, T>
	{
	private:
		T* iterator;
	public:
		using difference_type = typename std::iterator<std::input_iterator_tag,
			T>::difference_type;
		Iterator() = default;
		explicit Iterator(T* it) : iterator(it)
		{
		}
		Iterator(const Iterator& other) : iterator(other.iterator)
		{
		};
		T& operator*() const
		{
			return *iterator;
		}
		Iterator& operator++()
		{
			++iterator;
			return *this;
		}
		Iterator& operator--()
		{
			--iterator;
			return *this;
		}
		Iterator operator+(difference_type it) const
		{
			return Iterator(iterator + it);
		}
		Iterator operator-(difference_type it) const
		{
			return Iterator(iterator - it);
		}
		difference_type operator-(const Iterator& it) const
		{
			return iterator - it.iterator;
		}
		bool operator==(const Iterator& other) const
		{
			return iterator == other.iterator;
		}
		bool operator!=(const Iterator& other) const
		{
			return iterator != other.iterator;
		}
		bool operator> (const Iterator& other) const
		{
			return iterator > other.iterator;
		}
		bool operator< (const Iterator& other) const
		{
			return iterator < other.iterator;
		}
	};
	CircleBuffer(size_t c)
		: _capacity(c)
		, _data(new T[_capacity])
	{
	}
	CircleBuffer(const CircleBuffer& other)
		:_size(other._size)
		, _capacity(other._capacity)
		, _data(other.data)
	{
	}
	~CircleBuffer()
	{
		delete _data;
	}
	Iterator begin() const
	{
		return Iterator(_data);
	}
	Iterator end() const
	{
		return Iterator(_data + _size);
	}
	size_t capacity() const
	{
		return this->_capacity;
	}
	size_t size() const
	{
		return this->_size;
	}
	void pushBack(T x)
	{
		if (_size < _capacity)
		{
			_data[_size] = x;
			_size++;
		}
		else
		{
			for (size_t i = 1; i < _capacity; i++)
			{
				_data[i - 1] = _data[i];
			}
			_data[_capacity - 1] = x;
		}
	}
	void popBack()
	{
		if (_size > 0) _size--;
	}
	void pushFront(T x)
	{
		if (_size < _capacity)
		{
			for (size_t i = _size; i >= 1; i--)
			{
				_data[i] = _data[i - 1];
			}
			_data[0] = x;
			_size++;
		}
		else
		{
			for (size_t i = _capacity - 1; i >= 1; i--)
			{
				_data[i] = _data[i - 1];
			}
			_data[0] = x;
		}
	}
	void popFront()
	{
		for (size_t i = 0; i < _size - 1; i++)
			_data[i] = _data[i + 1];
		_size--;
	}
	void insert(size_t ind, T x)
	{
		_data[ind % _capacity] = x;
	}
	void insert(Iterator ind, T x)
	{
		
		*(ind) = x;
	}
	void remove(size_t ind)
	{
		for (size_t i = ind + 1; i < _size; i++)
		{
			_data[(i - 1) % _capacity] = _data[i % _capacity];
		}
		_size--;
	}
	void resize(size_t new_capacity)
	{
		T* new_data = new T[new_capacity];
		_size = std::min(_size, new_capacity);
		for (int i = 0; i < _size; i++)
		{
			new_data[i] = _data[i];
		}
		delete _data;
		_data = new_data;
		_capacity = new_capacity;
	}
	void info_buf()
	{
		cout << "capacity: " << capacity() << endl;
		cout << "size: " << size() << endl;
	}
};
void result(CircleBuffer<int>& buf)
{
	buf.info_buf();
	for (int i : buf)
		cout << i << ' ';
	cout << endl << endl;
}