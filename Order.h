#pragma once
class Order {
	int quantity, payment, price;
public:
	Order()
	{
		quantity = 0;
		payment = 0;
		price = 0;
	}
	Order(int quan)
	{
		quantity = quan;
		payment = 0;
		price = 0;
	}
	void setQuantity(int i)
	{
		quantity = i;
	}
	int getQuantity()const
	{
		return quantity;
	}
	void CalculatePayment() {
		payment += price * getQuantity();
	}
	int getPayment()const
	{
		return payment;
	}
	void setPrice(int p)
	{
		price = p;
	}
	int getPrice()const
	{
		return price;
	}
};