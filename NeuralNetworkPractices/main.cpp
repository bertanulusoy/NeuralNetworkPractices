#include <iostream>
#include <memory>


struct Base
{
	virtual void do_thing() = 0;
	virtual ~Base() = default;
	Base() = default;
	Base(const Base &) = default;
	Base(Base &&) = default;
	auto operator=(const Base &) -> Base & = default;
	auto operator=(Base &&) -> Base & = default;

	int data{};
};

struct Derived :Base
{
	void do_thing() override {}
};

auto main() -> int 
{
 	//std::unique_ptr<Base> b = std::unique_ptr<Base>(new Derived());
	Derived d;
	d.do_thing();
	//delete b;
}
