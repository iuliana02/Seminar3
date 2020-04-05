#include <iostream>
#include <cassert>
#include "Rental.h"

using namespace std;

int main()
{
	Rental r;
	Auto a1(1, "a", "aa"), a2(2,"b","bb"), a3(3,"c","cc");
	Kunde c1(1, "Andrei"), c2(2, "Bogdan"), c3(3, "Mihai");
	r.add_auto(a1);
	r.add_auto(a2);
	r.add_auto(a3);
	assert(r.size_auto()==3);

	r.add_clients(c1);
	r.add_clients(c2);
	r.add_clients(c3);
	assert(r.size_clients() == 3);

	r.update_client(c1, "numeNou");
	assert(c1.get_name()=="numeNou");

	r.delete_auto(a1);
	r.delete_auto(a2);
	assert(r.size_auto() == 1);

	r.delete_client(c1);
	assert(r.size_clients() == 2);

	cout << "Teste ok\n";
}