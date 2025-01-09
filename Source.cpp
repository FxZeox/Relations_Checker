
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//---------------- PROJECT MADE BY (21F-9500 USMAN AHMAD) && (21F-9507 ABDUL REHMAN)----------------------------//
class Relations
{
public:
	Relations();
	~Relations();
	void Input_Sets(); //Makes Dynamic array of sets to store data
	void square_setA_and_setB(); //Display Order Pairs
	void possible_relations();
	void symmetric_anti_antisymmetric();
	void reflexive_and_symmetric();
	void Reflexive();
	void Symmetric();
	void anti_symmetric();

	void Display_OrderPairs();
	bool matrix(); //Checking 
	void Display_Matrix();
	void Transpose();
	void check_reflexive();
	void check_symmetric();
	void check_anti_symmetric();
	void check_symmetric_anti_antisymmetric();
	void check_reflexive_and_symmetric();

private:
	int transpose[10][10];
	int graph_array[10][10];
	int num, numm;
	int* ptr;
	int* ptr1;
};
void main_menu();
Relations::Relations() //Constructor
{
	//unintilized transpose 2D array
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			transpose[i][j] = 0;
		}
	}

	//unintilized graph_array 2D array
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			graph_array[i][j] = 0;
		}
	}

	ptr = NULL;
	ptr1 = NULL;
	num = 0;
	numm = 0;
	ptr = NULL;
	ptr1 = NULL;
}

Relations::~Relations() //Destructor
{
	ptr = NULL;
	delete[]ptr;
	ptr1 = NULL;
	delete[]ptr1;
}
void Relations::check_reflexive()
{
	cout << setw(50) << "--------------CHECK-REFLEXIVE---------------" << endl;

	bool decide = true;

	for (int i = 0; i < numm; i++)
	{
		if (decide == true)
		{
			for (int j = 0; j < numm; j++)
			{
				if (graph_array[i] == graph_array[j] == 1)
				{
					decide = true;
					break;
				}
				else
				{
					decide = false;
					cout << "Not Exist " << endl;
					break;
				}

			}
		}
	}
	if (decide == true)
	{

		cout << "It has reflexive relation" << endl;
	}

}
void Relations::check_symmetric()
{
	cout << setw(50) << "---------------CHECK-SYMMETRIC--------------" << endl;
	bool decide = true;

	for (int i = 0; i < num; i++)
	{
		if (decide == true)
		{
			for (int j = 0; j < num;)
			{
				if (transpose[i][j] == graph_array[i][j])
				{
					decide = true;
					break;
				}
				else
				{
					decide = false;
					cout << "Not Exist" << endl;
					break;
				}
			}
		}
	}
	if (decide == true)
	{

		cout << "It has Symmetric Relation" << endl;
	}
}

void Relations::check_anti_symmetric() {
	cout << setw(50) << "-------------CHECK-ANTI-SYMMETRIC-----------" << endl;
	bool decide = true;
	for (int i = 0; i < num; i++)
	{
		if (decide == true)
		{
			for (int j = 0; j < num;)
			{
				if (graph_array[i] <= graph_array[j] && graph_array[j] <= graph_array[i])
				{
					decide = true;
					break;
				}
				else
				{
					decide = false;
					cout << "Not Exist" << endl;
					break;
				}
			}
		}
	}
	if (decide == true)
	{

		cout << "It has Symetric Relation" << endl;
	}
}
void Relations::check_symmetric_anti_antisymmetric() {

	cout << setw(50) << "-----CHECK SYMMETRIC AND ANTI-SYMMETRIC-----" << endl;

	bool decide = 1;
	for (int i = 0; i < numm; ++i)	//check for symmetric matrix

	{
		for (int j = 0; j < numm; ++j)

		{

			if (transpose[i][j] != -graph_array[i][j])

			{

				decide = 0;

				break;
			}
		}

		if (decide == 0)

			break;
	}

	if (decide == 1)

		cout << "It has Only Symmetric Relation" << endl;

	else

	{

		bool decide2 = true;

		for (int i = 0; i < num; i++)
		{
			if (decide2 == true)
			{
				for (int j = 0; j < num;)
				{
					if (graph_array[i] <= graph_array[j] && graph_array[j] <= graph_array[i])
					{
						decide2 = true;
						break;
					}
					else
					{
						decide2 = false;
						cout << "It is not Anisymetric" << endl;
						break;
					}
				}
			}
		}
		if (decide2 == true)
		{

			cout << "It has only Antisymmetric Relation" << endl;
		}


		if (decide2 == true)

			cout << "It also has Anti_symetric relation";

		else	//if not then its neither of the two

			cout << "Not Exist both" << endl;
	}
}
void Relations::check_reflexive_and_symmetric() {

	cout << setw(50) << "--------CHECK-REFLEXIVE AND SYMMETRIC-------" << endl;

	bool decide = 1;
	for (int i = 0; i < num; ++i)

	{
		for (int j = 0; j < num; ++j)

		{

			if (graph_array[i][j] != -graph_array[j][i])

			{

				decide = 0;

				break;
			}
		}

		if (decide == 0)

			break;
	}

	if (decide == 1)
	{

		cout << "It has Symmetric relation";
	}
	else
	{

		bool decide2 = true;

		for (int i = 0; i < numm; i++)
		{
			if (decide2 == true)
			{
				for (int j = 0; j < numm; j++)
				{
					if (graph_array[j] == graph_array[i])
					{
						decide2 = true;
						break;
					}
					else
					{
						decide2 = false;
						cout << "Not Exist reflexive" << endl;
						break;
					}
				}
			}
		}
		if (decide2 == true)
		{

			cout << "Both reflexive and symmetric..." << endl;
		}

	}

}
void Relations::possible_relations()
{
	cout << endl << endl;
	cout << "        --> TOTAL NUMBER OF POSSIBLE RELATIONS " << endl << endl;
	cout << "     ------------------ A x B-----------------" << endl;
	cout << "  POSSIBLE RELATIONS ARE    :\t\t";
	cout << pow(2, num * num) << endl;
}
void Relations::Reflexive()
{
	square_setA_and_setB();

	cout << setw(50) << "------------------REFLEXIVE-----------------" << endl;
	cout << endl << endl << endl;
	cout << "REFLEXIVE OF ABOVE MATRIX IS       :" << pow(2, numm - num) << endl;
}
void Relations::Symmetric() {
	cout << setw(50) << "------------------SYMMETRIC-----------------" << endl;
	square_setA_and_setB();
	cout << endl << endl << endl;
	cout << "SYMMETRIC OF ABOVE MATRIX IS       :" << pow(2, (numm + num) / 2) << endl;
}
void Relations::anti_symmetric() {
	cout << setw(50) << "---------------ANTI-SYMMETRIC---------------" << endl;
	cout << endl << endl << endl;
	square_setA_and_setB();
	cout << "SYMMETRIC OF ABOVE MATRIX IS      : " << pow(2, num) * pow(3, (numm - num) / 2) << endl;
}
void Relations::symmetric_anti_antisymmetric() {
	square_setA_and_setB();
	cout << setw(50) << "|---------SYMMETRIC AND ANTI-SYMMETRIC-------|" << endl;
	cout << endl << endl << endl;
	cout << "SYMMETRIC AND ANTI SYMMETRIC OF ABOVE MATRIX IS      : " << pow(2, num) << endl;
}
void Relations::reflexive_and_symmetric()
{
	square_setA_and_setB();
	cout << setw(50) << "|-----------REFLEXIVE AND SYMMETRIC----------|" << endl;
	cout << endl << endl << endl;
	cout << "REFLEXIVE AND SYMMETRIC OF ABOVE MATRIX IS      : " << pow(2, (numm - num) / 2) << endl;
}
void Relations::square_setA_and_setB() {
	numm = num * num;
}
void Relations::Input_Sets()
{
	cout << "ENTER NUMBER OF ELEMENTS IN SET A AND B       : "; cin >> num; //Input of array
	while (num < 3) //Minimum elements ie 3
	{
		cout << " ----------ENTER ATLEAST 3 ELEMENST-----------" << endl << endl;
		cout << "HOW MANY ELEMENTS YOU WANT TO INPUT IN SET A AND B "; cin >> num;
	}
	cout << " Enter Elements in Set A" << endl;
	ptr = new int[num]; //Stores array Dynamic Array
	for (int i = 0; i < num; i++) //Enter Elements of SET A
	{
		cout << "ENTER " << i + 1 << "TH ELEMENT : ";
		cin >> ptr[i];
	}
	cout << "\n-----------------------------------------" << endl << endl;

	cout << "ENTER ELEMENTS OF SET B " << endl; //Enter elements of SET B
	ptr1 = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "ENTER " << i + 1 << "TH ELEMENT : ";
		cin >> ptr1[i];
	}
	cout << "\n-----------------------------------------" << endl << endl;

}
void Relations::Display_OrderPairs()
{
	cout << setw(50) << "---------------Elemenets of Set A and B-------------" << endl;
	//to display Elements of  set A
	cout << "A = { ";
	for (int i = 0; i < num; i++)

	{
		cout << ptr[i] << " ";
	}
	cout << "}" << endl;
	//to display Elements of  set B
	cout << "B = { ";
	for (int i = 0; i < num; i++)

	{
		cout << ptr1[i] << " ";
	}
	cout << "}" << endl;

	cout << "'\t\t\t.......Cartesian Product...." << endl;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << "(" << ptr[i] << "," << ptr1[j] << ")  ";
		}
	}
	cout << endl;
}
bool Relations::matrix()
{

	for (int i = 0; i < num; i++)
	{
		graph_array[ptr[i] - 1][ptr1[i] - 1] = 1;
		graph_array[ptr1[i] - 1][ptr[i] - 1] = 1;
	}

	return true;
}
void Relations::Display_Matrix()
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			graph_array[i][j];
		}
		cout << endl;
	}


}
void Relations::Transpose()
{
	for (int i = 0; i < num; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			transpose[j][i] = graph_array[i][j];
		}
		cout << endl;
	}


}

//menu
void main_menu()
{
	cout << setw(50) << "------------------- MENU FOR RELATIONS----------------" << endl;
	cout << setw(50) << "   PRESS 1,  CHECK NUMBER OF RELATIONS              " << endl;
	cout << setw(50) << "   PRESS 2,  CHECK RELATIONS EXIST OR NOT          " << endl;
	cout << setw(50) << "   PRESS 3   Exit                                   " << endl;
}
//----------------------------------------------int main------------------------------------------------------
int main()
{
	Relations obj;
	obj.Input_Sets();
	obj.Display_OrderPairs();
	obj.matrix();
	obj.Display_Matrix();
	obj.Transpose();
	while (1)
	{
		main_menu(); //Calls main menu
		string str;
		cout << "Enter Your Choice  "; cin >> str;
		system("pause");
		system("clear");

		if (str == "1")
		{
			while (1)
			{
				
				cout << setw(50) << "|--------------RELATION-------------|" << endl;
				cout << setw(50) << endl << endl << endl << endl;
				cout << setw(50) << "  1-TOTAL NUMBER OF RELATION        " << endl;
				cout << setw(50) << "  2-REFLEXIVE                       " << endl;
				cout << setw(50) << "  3-SYMMETRIC                       " << endl;
				cout << setw(50) << "  4-ANTI-SYMMETRIC                  " << endl;
				cout << setw(50) << "  5-REFLEXIVE AND SYMMETRIC RELATION" << endl;
				cout << setw(50) << "  6-ANTISYMMETRIC AND SYMMETRIC     " << endl;
				cout << setw(50) << "  7-BACK TO MAIN MENU               " << endl << endl;
				cout << "ENTER YOU CHOICE        :"; 
				string choice; 
				cin >> choice;

				if (choice == "1")
				{
					obj.possible_relations(); cout << endl << endl;
					system("pause");
				}
				else if (choice == "2")
				{
					obj.Reflexive(); cout << endl << endl;
					system("pause");
				}
				else if (choice == "3")
				{
					obj.Symmetric(); cout << endl << endl;
					system("pause");
				}
				else if (choice == "4")
				{
					obj.anti_symmetric(); cout << endl << endl;
					system("pause");
				}
				else if (choice == "5")
				{
					obj.reflexive_and_symmetric(); cout << endl << endl;
					system("pause");
				}
				else if (choice == "6")
				{
					obj.symmetric_anti_antisymmetric(); cout << endl << endl;
					system("pause");
				}
				else if (choice == "7")
				{
					break;
				}
				else
				{
					cout << "->>>INVALID INPUT" << endl; cout << endl << endl;
					system("pause");
				}
			}

		}
		else if (str == "2")
		{
			while (1)
			{
				cout << setw(50) << "|-------CHECK RELATIONS EXISTS OR NOT--------|" << endl;
				cout << setw(50) << "|   PRESS 1, TO CHECK SYMMETRIC              |" << endl;
				cout << setw(50) << "|   PRESS 2, TO CHECK REFLEXIVE              |" << endl;
				cout << setw(50) << "|   PRESS 3, TO CHECK ANTI-SYMMETRIC         |" << endl;
				cout << setw(50) << "|   PRESS 4, TO CHECK SYMMETRIC & ANTI       |" << endl;
				cout << setw(50) << "|   PRESS 5, TO CHECK SYMMETRIC & REFLEXIVE  |" << endl;
				cout << setw(50) << "|   PRESS 6, BACK TO MAIN MENU               |" << endl;
				cout << endl << endl << "ENTER YOUR CHOICE     :" << endl; string choice; cin >> choice;
				if (choice == "1")
				{
					obj.check_symmetric();
					system("pause");
				}
				else if (choice == "2")
				{
					obj.check_reflexive();
					system("pause");
				}
				else if (choice == "3")
				{
					obj.check_anti_symmetric(); system("pause");
				}
				else if (choice == "4")
				{
					obj.check_symmetric_anti_antisymmetric(); system("pause");
				}
				else if (choice == "5")
				{
					obj.check_reflexive_and_symmetric(); system("pause");

				}
				else if (choice == "6")
				{
					break;
				}
				else
				{
					cout << "INVALID INPUT" << endl; cout << endl << endl;
					system("pause");
				}
			}
		}
		else if (str == "3")
		{
			break;
		}
		else
		{
			cout << "INVALID INPUT" << endl; cout << endl << endl;
			system("pause");
		}
	}
	system("pause");
	return 0;
}


