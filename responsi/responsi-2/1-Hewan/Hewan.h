#ifndef HEWAN_H
#define HEWAN_H

class Hewan {
	public:
		Hewan(string nm);
        ~Hewan();
	protected:
		string name;
};

class Anjing : public Hewan {
	public:
		Anjing(string nm);
        ~Anjing();

};

class Kucing : public Hewan {
	public:
		Kucing(string nm);
        ~Kucing();
        
};

class AnjingBulldog : public Anjing {
	public:
		AnjingBulldog(string nm, string milik);
        ~AnjingBulldog();
		void print() {cout << name << " " << pemilik << endl;}
	private:
		string pemilik;
};

class KucingAnggora : public Anjing {
	public:
		KucingAnggora(string nm, string milik);
        ~KucingAnggora();
		void print();
	private:
		string pemilik;
};

#endif