class Integer
{
private:
	int number;

public:
	Integer() : Integer(0) {}
	Integer(int number);

	Integer add(Integer in);
	Integer sub(Integer in);
	Integer mult(Integer in);
	Integer div(Integer in);
	Integer mod(Integer in);

	int getNumber();
	void setNumber(int number);
};