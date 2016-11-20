#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*	A.M 1115201300269
	Name Rodica Bulgac	*/
		
// class Atom represents an atom	//
class Atom
{
	private:
		Nucleus nucleus;
		Electron electrons;
		
	public:
		Atom(int protons, int neutrons, int electrons): nucleus{protons+neutrons}, electrons{electrons}	{ }		// Constructor of class Atom
		~Atom();							// Destructor
		//int get_atom_number();				// Function which returns the Atomic Number of Atom
	//	int get_mass_number();				// Function which returns the Mass Number of Atom
	//	int get_electric_charge();			// Function which calculates and return the Electric Charge of Atom
		void print();						// Function which prints all the information has an Atom
};

//class represents nucleus of an atom

class Nucleus
{
	private:
		Proton protons;
		Neutron neutrons;
	public:
		Nucleus(int p, int n): protons(p), neutrons(n) { }
};
