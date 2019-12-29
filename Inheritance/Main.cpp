#include <iostream>
//#include "Myfunc.h"
#include "Auxiliary.h"
//#include <cstdio>
#include <string>

//class Point
//{
//protected:    // дает возможность созданым методам дочернего класса пользоватся переменными родительского
//
//	double x;
//	double y;
//	///////////////////////////////////////////////////////////////////////////
//public:
//	/////////////////////////////////// Methods: /////////////////////////////////////////
//
//	double distance(Point other) const
//	{
//		return(sqrt((pow(abs(this->x - other.x), 2) + (pow(abs(this->y - other.y), 2)))));
//	};
//
//	void set_x(double x)
//	{
//		if (x >= -100 && x <= 100)
//		{
//			this->x = x;
//		}
//		else this->x = 0;
//	};
//	void set_y(double y)
//	{
//		if (y >= -100 && y <= 100)
//		{
//			this->y = y;
//		}
//		else this->y = 0;
//	};
//
//	void print() const
//	{
//		std::cout << "\t.x = " << this->x << std::endl;
//		std::cout << "\t.y = " << this->y << std::endl;
//	}
//
//	double get_x() const
//	{
//		return(x);
//	}
//	double get_y() const
//	{
//		return(y);
//	}
//	/////////////////////// Operators: ////////////////////////////////////////////
//
//	double operator+(const Point& other)const
//	{
//		return this->x + other.x;
//	}
//
//	Point& operator=(const Point& other)
//	{
//		this->x = other.x;
//		this->y = other.y;
//		std::cout << "\t\tCopyAssignment:\t" << this << std::endl;
//		return *this;
//	}
//	////////////////////// Constructors: //////////////////////////////////////////
//
//	Point(double x = 0, double y = 0)
//	{
//		this->x = x;
//		this->y = y;
//		std::cout << "\t\tConstructor:\t" << this << std::endl;
//	}
//	Point(const Point& other)
//	{
//		this->x = other.x;
//		this->y = other.y;
//		std::cout << "\t\tCopyConstructor:\t" << this << std::endl;
//	}
//	//Point()
//	//{
//	//	x = y = 0;// или this ->x = this -> y = 0;
//	//	std::cout << "DefaultConstructor:\t" << this << std::endl;
//	//}
//
//	//////////////////// Destructor:
//	~Point()
//	{
//		std::cout << "\t\tDestructor:\t" << this << std::endl;
//	}
//};
/////////////////////////////////////*******class Point3D***************/////////////////////////////////////////
//class Point3D :public Point
//{
///////////////////////////////////// Variables: /////////////////////////////////////////	
//	double z;
//
//public:
///////////////////////////////////// Methods: /////////////////////////////////////////
//	double get_z() const
//	{
//		return this->z;
//	}
//
//	void set_z(double z) 
//	{
//		 this->z = z;
//	}
//
//};
/*************************************************************************************************/
class Human
{
	std::string last_name;
	std::string first_name;
	unsigned int age;

public:
////////////////////////////////////////  GET&SET  //////////////////////////////////////
	const std::string& get_last_name() const
	{
		return this->last_name;
	}

	const std::string& get_first_name() const
	{
		return this->first_name;
	}

	unsigned int get_age() const
	{
		return this->age;
	}
	
	void set_last_name(const std::string& last_name)
	{
		this->last_name = last_name;
	}

	void set_first_name(const std::string& first_name)
	{
		this->first_name = first_name;
	}

	void set_age(unsigned int age)
	{
		this->age = age;
	}
////////////////////////////////////////  Metods  //////////////////////////////////////
	void print()
	{
		std::cout << "\n" << get_first_name() << " " << get_last_name() << " " << get_age() << " лет " << std::endl;
	}

////////////////////////////////////////  Constructors  //////////////////////////////////////
	Human()
	{
		this->first_name = "";
		this->last_name = "";
		this->age = 0;
		std::cout << "HDefaultConstructor " << this << std::endl;
	}
	
	Human(const std::string& last_name, const std::string first_name,const unsigned int age)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->age = age;
		std::cout  << "HConstructor " << this << std::endl;
	}
	
////////////////////////////////////////  Destructors  //////////////////////////////////////
	~Human() // ~+TAB создает деструктор
	{
		std::cout << "HDestructor " << this << std::endl;
	}

};
/*************************************************************************************************/
class Student :public Human
{
	std::string group;
	std::string specialty;
	unsigned int reiting;
	unsigned int attendance;

public:
////////////////////////////////////////  GET&SET  //////////////////////////////////////

//// GETS
	const std::string  get_group() 	    {return this->group;}
	const std::string get_speciality()  {return specialty;}
	const unsigned int get_reiting()    {return reiting;}
	const unsigned int get_attandance() {return attendance;}

//// SETS
	void set_group(const std::string& group)           {this->group = group;}
	void set_speciality(const std::string speciality)  {this->specialty = speciality;}
	void set_reiting(const unsigned int reiting)       {this->reiting = reiting;}
	void set_attandance(const unsigned int attendance) {this->attendance = attendance;}

////////////////////////////////////////  Metods  //////////////////////////////////////
	void print()
	{
		Human::print();
		std::cout << "\nGroup - " << get_group() << "\nSpeciality - " << get_speciality() << "\nReiting - " << get_reiting() << "\nAttendance - " << get_attandance() << "\n\n";
	}
////////////////////////////////////////  Constructors  //////////////////////////////////////
	
	
	Student
	(
		const std::string last_name, const std::string first_name, unsigned int age,
		const std::string group,
		const std::string speciality,
		unsigned int reiting,
		unsigned int attendance
	)
		:Human(last_name, first_name, age)
	{	
		set_group(group);
		set_speciality(speciality);
		set_reiting(reiting);
		set_attandance(attendance);
		std::cout << "SConstructor"  << this << std::endl;
	}
////////////////////////////////////////  Destructor  //////////////////////////////////////
	~Student() // ~+TAB создает деструктор
	{
		std::cout << "SDestructor " << this << std::endl;
	}
};
/*************************************************************************************************/
class Teacher:public Human
{
	std::string speciality;
	unsigned int evil;
	unsigned int experience;
public:
////////////////////////////////////////  GET&SET  //////////////////////////////////////
	const std::string& get_speciality()
	{
		return speciality;
	}
	unsigned int get_evil()
	{
		return evil;
	}
	unsigned int get_experiance()
	{
		return experience;
	}

	void set_speciality(const std::string& speciality)
	{
		this->speciality = speciality;
	}
	void set_evil(unsigned int evil)
	{
		this->evil = (evil <= 100) ? evil : 100;
	}

	void set_experiance(unsigned int exper)
	{
		this->experience = exper;
	}
////////////////////////////////////////  Metods  //////////////////////////////////////
	void print()
	{
		Human::print();
		std::cout << "\nSpeciality - " << get_speciality() << "\nEvil - " << get_evil() << "\nExperance - " << get_experiance() << "\n\n";
	}
////////////////////////////////////////  Constructors  //////////////////////////////////////
	Teacher		
		(
			// Parents class Parameters
			const std::string last_name, const std::string first_name, unsigned int age,

			const std::string speciality,
			unsigned int evil,
			unsigned int experiance
		)
			: Human(last_name, first_name, age)
	{
		
		set_speciality(speciality);
		set_evil(evil);
		set_experiance(experiance);
		std::cout << "TConstructor" << this << std::endl;
	}
	~Teacher()
	{
		std::cout << "TDestructor" << this << std::endl;
	}
		
////////////////////////////////////////  Destructors  //////////////////////////////////////
};
/*************************************************************************************************/

std::ostream& operator<<(std::ostream& ost, Human hum);
void operator>>(std::istream& is, Human& hum);


#define Inheritance_Academy


void main()
{
	setlocale(LC_ALL, "Russian");
	std::system("color 20");
	Font(25);
	//SetConsoleCP(1251);        // Для вывода кирилицы из массива + шрифт Lucida console, Console 
	//SetConsoleOutputCP(1251);


#ifdef Inheritance_Academy
	
//	Human H("Тупенко", "Василий", 21);
	Human H1;
	//H.print();
	std::cin >> H1;
	W_line();
	//std::cout << H;
	W_line();
	std::cout << H1;
	//Student stud("Pinkman", "Jassy", 20, "Bloger","Pisar",200, 90);
	//W_line();
	//stud.print();
	//Teacher tech("Петров","Иван",42,"Музыка",50,70);
	//W_line();
	//tech.print();

#endif // Inheritance_Academy

}

std::ostream& operator<<(std::ostream& ost, Human hum)
{
	ost << "\n" << hum.get_first_name() << " " << hum.get_last_name() << " " << hum.get_age() << " лет " << std::endl;
	return ost;
}

void operator>>(std::istream& is, Human& hum)
{
	std::string a,b;
	unsigned int c;
	is >> a >> b >> c;
	
	hum.set_last_name(a);
	hum.set_first_name(b);
	hum.set_age(c);
}