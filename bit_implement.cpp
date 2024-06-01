#include "bit.hpp"

Bit::Bit() : m_value{0}  {
}

Bit::~Bit() {

}

Bit::Bit(const int value) {
	m_value = value;
}

Bit::Bit(const Bit& other) {
	m_value = other.m_value;
}

void Bit::setValue(const int value) {
	m_value = value;
}

int Bit::getValue() const {
	return m_value;
}

void Bit::get_Value_bit() const {
	int value = m_value;
	int nbits = sizeof(value) * 8;
	for (int i = nbits - 1; i >= 0; --i) {
		std::cout << ((value >> i) & 1);
	}
}

void Bit::set(const int pos) {
	m_value |= 1 << pos;
}

void Bit::reset(const int pos) {
	m_value &= ~(1 << pos); 
}

void Bit::flip(const int pos) {
	m_value ^= (1 << pos);
}

bool Bit::test(const int pos) {
	return (m_value & (1 << pos)) != 0; 
}

bool Bit::all() const {
    return (m_value == std::numeric_limits<int>::max());
}

bool Bit::any() const {
	return m_value != 0;
}

bool Bit::none() const {
	return m_value == 0;
}

int Bit::count() const {
	int count = 0;
	int value = m_value;
	while (value != 0) {
		count += value & 1;
		value >>= 1;
	}
	return count;
}