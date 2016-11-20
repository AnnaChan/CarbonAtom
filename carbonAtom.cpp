#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*	A.M 1115201300269
	Name Rodica Bulgac	*/
	
// Class Up_Quark represents an up_quark

class Up_Quark
{
	private:
		double electric_charge;
		string mass;
		double spin;
		string statistics;
	public:
		Up_Quark();		// Constructor of an up_quark
		~Up_Quark();	// Destructor of an up_quark
		void print();	// Prints information of an up_quark
	
};

// Class Down_Quark represents an down quark

class Down_Quark
{
	private:
		double electric_charge;
		string mass;
		double spin;
		string statistics;
	public:
		Down_Quark();		// Constructor of a down quark
		~Down_Quark();		// Destructor of a down quark
		void print();		// Prints information of a down quark  
		
};
	
// Implementation of class Gluon

class Gluon
{
	private:
		double electric_charge;
		string mass;
		double spin;
		string statistics;
	public:
		Gluon();		// Constructor of a gluon
		~Gluon();		// Destructor of a gluon
		void print();	// Prints information of a gluon
};

// Class Proton represents a proton //

class Proton
{
	private: 
		Up_Quark up_quarks;
		Down_Quark down_quarks;
		Gluon gluons;
		string mass;
		double spin;
		double electric_charge;
		string statistics;
	public:
		Proton(); //: up_quarks(2), down_quarks(1), gluons(3) {}
		~Proton();
		//double get_proton_charge();																		// Destructor of class Proton
		void print();																	// Function print() prints the information of a proton				
};

// Class Neutron represents a neutron

class Neutron
{
	private: 
		int up_quarks;
		int down_quarks;
		int gluons;
		
		string mass;
		double spin;
		double electric_charge;
		string statistics;
	public:
		Neutron(); // Constructor of a neuton
		~Neutron();		// Destructor of a neutron
		void print();	// Prints the information of a neutron
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


// Implementation of class Electron
  

class Electron
{
	private:
		double electric_charge;
		string mass;
		double spin;
		string statistics;
	public:
		Electron();		// Constructor of an electron
		~Electron();	// Destructor of an electron
	//	double get_electron_charge();
		void print();	// Prints information of an electron
};

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

// Implementation of Constructor of Class Atom //

Atom::Atom(int protons, int neutrons, int electrons)
{

	cout << "An atom has been constructed.\n";
	cout <<"The carbon atom has " <<protons<<" protons and "<<neutrons<<" neutrons\n";
		
}

// Implementation of Destructor of class Atom //

Atom::~Atom()
{
	cout << "An atom will be destroyed with Atomic Number " << get_atom_number() << " and Mass Number " << get_mass_number() <<"\n";
}

// Implementation of member function get_atom_number of class Atom //

/*int Atom::get_atom_number()
{
	return protons;
}

// Implementation of member fuction get_mass_number of class Atom //

int Atom::get_mass_number()
{
	return protons + neutrons;	
}

// Implementation of member function get_electric_charge of class Atom //

int Atom::get_electric_charge()
{
	Proton p;
	Electron e;
	return (protons*p.get_proton_charge()- electrons*e.get_electron_charge());
}

// Implementation of member function print() of class Atom //*/

void Atom::print()
{
	
//	cout << "Mass Number:" << get_mass_number()<<"\t" << "Atomic Number:" << get_atom_number() <<"\t" << "Electric Charge:" << get_electric_charge()
//	<<"\tNeutrons:"<< neutrons << "\tElectrons:" << electrons<<"\n\n";

}

//Implementation of Constructor of class Nucleus
Nucleus::Nucleus(int p, int n)
{
	protons = p;
	this->neutrons = neutrons;
	Atom(protons+neutrons);
}
// Implementation of Constructor of class Up_Quark

Up_Quark::Up_Quark()
{
	electric_charge = 2/3;
	mass = "2.01 MeV/c^2";
	spin = 1/2;
	statistics = "Fermi-Dirac";
	cout << "An up quark has been constructed \n";
}

// Implementation of Constructor of class Proton

Proton::Proton()
{
	up_quarks = 2;
	down_quarks = 1;
	gluons = 3;
	mass = "1007u";
	spin = 1/2;
	electric_charge = +1;
	statistics = "Fermi-Dirac";
	cout << " A proton has been constructed.";	
}

// Implementation of Destructor of class Proton
Proton::~Proton()
{
	cout << " A proton will be destroyed.\n";
}

// Implementation of member function print() of class Proton

void Proton::print()
{
	cout <<"\nMass of proton:" << mass<<"u" <<"\tSpin of proton:"<< spin << "\tElectric charge of proton:"<<electric_charge<<"e"<<"\tStatistics of proton:"<<statistics<<"\tUp quarks:"
	<<up_quarks<<"\tDown quarks:"<<down_quarks<<"\tGluons:"<< gluons;
}

//Implementation of member function get_proton_charge() of class Proton

double Proton::get_proton_charge()
{
	return electric_charge;
}
// Implementation of COnstructor of class Neutron

Neutron::Neutron()
{
	up_quarks = 1;
	down_quarks = 2;
	gluons = 3;
	mass = "10085u";
	spin = 1/2;
	electric_charge = 0;
	statistics = "Fermi-Dirac";
	cout << " A neutron has been constructed.\n";
	
}

// Implementation of Destructor of class Neutron

Neutron::~Neutron()
{
	cout << " A neutron will be destroyed";
}

// Implementation of member function print() of class Neutron

 void Neutron::print()
{
	cout<<"Mass of neutron:"<< mass<<"u" <<"\tSpin of neutron:"<< spin <<"\tElectric charge of neutron:"<< electric_charge<<"e" <<"\tUp quarks of neutron:"<< up_quarks
	<<"\tDown quarks of neutron:"<< down_quarks <<"\tGluons of neutron"<< gluons;
}


// Implementation of Destructor of class Up_Quark

Up_Quark::~Up_Quark()
{
	cout << "An up quark will be destroyed \n";
}

// Implementation of member function print() of class Up_Quark

void Up_Quark::print()
{
	cout<<"Mass of up quark:"<< mass <<"MeV/c^2"<<"\tSpin of up quark:"<< spin <<"\tElectric charge of up quark:"<< electric_charge <<"e"<<"Statistics of up quark"
	<< statistics;
}

// Implementation of Constructor od class Down_Quark

Down_Quark::Down_Quark()
{
	electric_charge = -1/3;
	mass ="4.7 MeV/c^2";
	spin = 1/2;
	statistics = "Fermi-Dirac";
	cout << " A down quark has been constructed.\n";
}

// Implementation of Destructor of class Down_Quark

Down_Quark::~Down_Quark()
{
	cout << "A down quark will be destroyed.\n";
}

// Implementation of member function print of class Down_Quark

void Down_Quark::print()
{
	cout<<"Mass of down quark:"<< mass<<"MeV/c^2" <<"\tSpin of down quark:"<< spin <<"\tElectric charge of down quark:" << electric_charge <<"e"
	<<"Statistics of down quark:"<< statistics;
}

// Implementation of Constructor of class Gluon

Gluon::Gluon()
{
	electric_charge = 0;
	mass = "0";
	spin = 1;
	statistics = "Bose-Einstein";
	cout << "A gluon has been constructed.\n";
}

// Implementation of Destructor of class Gluon

Gluon::~Gluon()
{
	cout << "A gluon will be destroyed.\n";
}

// Implementation of member function print of class Gluon

void Gluon::print()
{
	cout<<"Mass of gluon:"<< mass <<"\tSpin of gluon:"<< spin <<"\tElectric charge of gluon:"<<electric_charge<<"e"<<"\tStatistics of gluon:"<<statistics;
}

// Implementation of Constructor of class Electron

Electron::Electron()
{
	electric_charge = -1;
	mass = "5.48579909070e-4";
	spin = 1/2;
	statistics = "Fermi-Dirac";
	cout <<"An electron has been constructed.\n";
}

// Implementation of Destructor of class Electron

Electron::~Electron()
{
	cout <<"An electron will be destroyed.\n";
}

// Implementation of member function get_electron_charge() of class Electron

double Electron::get_electron_charge()
{
	return electric_charge;
}

// Implementation of member function print() of class Electron

void Electron::print()
{
	cout<<"Mass of electron:"<<mass<<"u"<<"\tSpin of electron:"<<spin<<"\tElectric charge of electron:"<<electric_charge<<"e"<<"\tStatistics of electron:"<<statistics;
}

int main()
{
	srand (time(NULL)); // initialize random seed
	int range;
	range=rand()%10+1;	// a random number of carbon isotopes between range [1,11]
	Atom *array[range];		// pointer to an object of type Atom
	int sum_protons = 0;
	int sum_neutrons = 0;
	double sum_electric_charge = 0;
	for( int i=0; i<=range-1; i++)
	{
		int neutrons = rand()%14+2;		// random number of neutrons in range [2,16]
		array[i] = new Atom(6,neutrons,6);	// construct the random carbon isotope
		array[i]->Atom::print();
		sum_protons += 6;
		sum_neutrons += neutrons;
		sum_electric_charge = array[i]->get_electric_charge();
		
	
	}
	
	cout<< sum_protons <<" protons have been constructed.\n";
	cout<< sum_neutrons <<" neutrons have been constructed\n";
	for(int i=0; i<=range-1; i++)
	{
		delete array[i];
	
	}
	
	
	
	
	
	
		
	return 0;
}
