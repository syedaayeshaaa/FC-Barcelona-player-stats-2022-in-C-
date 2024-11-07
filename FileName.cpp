#include<iostream>                              //header files
#include <windows.h>
#include<string>
#include<fstream>

using namespace std;

class Player                                 //1st class, Base class
{
protected:

	string country;
	int matches;
	string name;
	int goal;
	int assist;
	string position;
public:

	Player()                                          //DEFAULT CONSTRUCTOR
	{
		matches = 0;
		name = "no name";
		goal = 0;
		assist = 0;
		position = "none";
		country = "none";
	}

	void setPlayer(string n, string c, string p, int m, int g, int ass)             //setter
	{
		name = n;
		country = c;
		position = p;
		matches = m;
		goal = g;
		assist = ass;

	}


	void display() const                                                           // career stats display
	{
		cout << "\tPlayer Career stats:" << endl;
		cout << "Player Name: " << name << endl;
		cout << "Country: " << country << endl;
		cout << "Position: " << position << endl;
		cout << "Matches: " << matches << endl;
		cout << "Goals: " << goal << endl;
		cout << "Assists: " << assist;

	}


};

class ThisSeason :public Player                                   //2nd class - INHERITANCE
{
public:
	void setPlayer(int m, int g, int ass)          //setter - FUNCTION OVERLOADING
	{
		matches = m;
		goal = g;
		assist = ass;
	}

	void display() const                                   //current season stats - FUNCTION OVERRIDING - POLYMORPHISM
	{
		cout << "\n\tStats this season(21/22):" << endl;
		cout << "Matches: " << matches << endl;
		cout << "Goals: " << goal << endl;
		cout << "Assists: " << assist << endl;
	}

};

class Schedule                                          //3rd clas
{
	string season;
public:

	Schedule(string s)                                  //PARAMETERIZED CONSTRUCTOR
	{
		season = s;
	}
	void schedule_Laliga()   const                                       //competetion 1 display
	{
		cout << "\tUpcoming 5 Laliga Matches" << endl;
		cout << "Barcelona vs Real Madrid [27 September 2022]" << endl;
		cout << "Barcelona vs Elche [2 October 2022]" << endl;
		cout << "Barcelona vs Sevilla [7 October 2022]" << endl;
		cout << "Barcelona vs Alaves [10 October 2022]" << endl;
		cout << "Barcelona vs Atletico Madrid [15 October 2022]" << endl;

	}

	void schedule_ucl()  const                                             //competetion 2 display
	{
		cout << "\tUCL 2022 Groupstage" << endl;
		cout << "Barcelona vs Manchester United [20 October 2022]" << endl;
		cout << "Barcelona vs BVB [27 October 2022]" << endl;
		cout << "Barcelona vs Milan [4 November 2022]" << endl;
		cout << "Barcelona vs Milan [15 December 2022]" << endl;
		cout << "Barcelona vs BVB [21 December 2022]" << endl;
		cout << "Barcelona vs Manchester United [28 December 2022]" << endl;
	}


};
class Quiz                                                       //4th class
{
public:
	void game()                                                               //Quiz questionnaire
	{
		char ch;
		for (int i = 0; i <= 1; i++)
		{
			cout << "\n\tWelcome to FCBarcelona mini game" << endl << endl;
			cout << "Q#1) How many UCL has Barcelona won ?" << endl; //First question
			cout << "a. 2\nb. 8\nc. 5 " << endl;
			cin >> ch;

			if (ch == 'c')
			{
				cout << "Your answer is correct " << endl << endl;
			}
			else
			{
				cout << " ---Incorrect answer--- Try again in 24 hours" << endl;
				break;                                                               //break is used incase user selects the wrong option - function ends
			}

			cout << "Q#2 )Who is the leading goalscorer in Barcelona history?" << endl; //second  question
			cout << "a. Messi\nb. Neymar\nc. Suarez " << endl;
			cin >> ch;
			if (ch == 'a')
			{
				cout << "Your answer is correct " << endl << endl;
			}
			else
			{
				cout << " ---Incorrect answer--- Try again in 24 hours" << endl;
				break;
			}
			cout << "Q#3) How many Laligas have Barcelona won?" << endl; //Third question
			cout << "a. 26\nb. 13\nc. 36 " << endl;
			cin >> ch;
			if (ch == 'a')
			{
				cout << "Your answer is correct " << endl << endl;
			}
			else
			{
				cout << " ---Incorrect answer--- Try again in 24 hours" << endl;
				break;
			}
			cout << "Q# 4)What is the name of Barcelona stadium ?" << endl; //Fourth question
			cout << "a. Old Traffort \nb. camp nou\nc. Bernabeu " << endl;
			cin >> ch;
			if (ch == 'b')
			{
				cout << "Your answer is correct " << endl << endl;
			}
			else
			{
				cout << " ---Incorrect answer--- Try again in 24 hours" << endl;
				break;

			}
			cout << "Q#5) Who is the only coach of Barcelona to win sextuple?" << endl; //Fifth question
			cout << "a. Luis Enrique\nb. Xavi\nc. Pep Guardiola " << endl;
			cin >> ch;
			if (ch == 'c')
			{
				cout << "Your answer is correct " << endl << endl;
				cout << "\t**CONGRATULATIONS**\nYou have won a Barcelona jersey of your favourite player. Check your email for further information." << endl;
				break;
			}
			else
			{
				cout << " ---Incorrect answer--- Better luck next time" << endl;
				break;

			}
		}

	}

};

class Blog                            //5th class
{
private:                              //Encapsulation
	string opinion;
public:

	Blog(string opp)                  //PARAMETERIZED CONSTRUCTOR
	{
		opinion = opp;
	}


	string getOpinion()           //getter
	{
		return opinion;
	}






};

int main()
{
	system("Color 0B");
	string name;
	char ch;
	char num = 0;
	Schedule S1("21/22");
	Quiz q;



	cout << "\t~Welcome to FCBarcelona App~" << endl << endl;
	cout << "Press 1 to check player stats\nPress 2 to view schedule\nPress 3 to play quiz game and win rewards\nPress 4 to write season blog" << endl;

	do {

		cout << "\nEnter command: ";
		cin >> ch;

		if (ch == '1')                                                          // for Stats
		{
			cout << "Enter player name to search: ";
			cin >> name;

			if (name == "Griezmann")
			{
				{
					Player P1;
					P1.setPlayer("Antoine Griezmann", "France", "Second Striker", 400, 250, 98);
					P1.display();

					cout << "\n________________________________________" << endl;
					ThisSeason T1;
					T1.setPlayer(34, 20, 8);
					T1.display();
				}

			}

			else if (name == "Messi")
			{
				Player P2;
				P2.setPlayer("Lioenl Messi", "Argentina", "Right Winger", 900, 700, 300);
				P2.display();

				ThisSeason T2;
				T2.setPlayer(30, 32, 16);
				T2.display();
			}
			else if (name == "Suarez")
			{
				Player P3;
				P3.setPlayer("Luis Suarez", "Uruguay", "Striker", 738, 514, 220);
				P3.display();

				ThisSeason T3;
				T3.setPlayer(30, 16, 4);
				T3.display();
			}
			else if (name == "Neymar")
			{
				Player P4;
				P4.setPlayer("Neymar Jr.", "Brazil", "Left Winger", 653, 307, 187);
				P4.display();

				ThisSeason T4;
				T4.setPlayer(34, 19, 7);
				T4.display();
			}
			else if (name == "Frenkie")
			{
				Player P5;
				P5.setPlayer("Frenkie De Jong", "Netherland", "Midfielder", 212, 26, 100);
				P5.display();

				ThisSeason T5;
				T5.setPlayer(34, 4, 11);
				T5.display();
			}
			else if (name == "Busquets")
			{
				Player P6;
				P6.setPlayer("Sergio Busquets", "Spain", "Defensice Midfielder", 700, 10, 80);
				P6.display();

				ThisSeason T6;
				T6.setPlayer(30, 1, 5);
				T6.display();

			}
			else if (name == "Pedri")
			{
				Player P7;
				P7.setPlayer("Pedri Gonzalez", "Spain", "Midfielder", 150, 10, 50);
				P7.display();

				ThisSeason T7;
				T7.setPlayer(38, 4, 8);
				T7.display();

			}
			else if (name == "Nico")
			{
				Player P8;
				P8.setPlayer("Nico Gonzalez", "Spain", "Defensive Midfielder", 90, 5, 12);
				P8.display();

				ThisSeason T8;
				T8.setPlayer(15, 0, 2);
				T8.display();

			}
			else if (name == "Alba")
			{
				Player P9;
				P9.setPlayer("Jordi Alba", "Spain", "Left back", 500, 110, 150);
				P9.display();

				ThisSeason T9;
				T9.setPlayer(38, 7, 16);
				T9.display();

			}
			else if (name == "Dest")
			{
				Player P10;
				P10.setPlayer("Sergino Dest", "USA", "Right back", 250, 12, 50);
				P10.display();

				ThisSeason T10;
				T10.setPlayer(36, 2, 7);
				T10.display();

			}
			else if (name == "Pique")
			{
				Player P11;
				P11.setPlayer("Gerard Pique", "Spain", "Center back", 639, 38, 20);
				P11.display();

				ThisSeason T11;
				T11.setPlayer(36, 2, 0);
				T11.display();

			}
			else if (name == "Araujo")
			{

				Player P12;
				P12.setPlayer("Ronald Araujo", "Uruguay", "Center back", 200, 13, 9);
				P12.display();
				ThisSeason T12;

				T12.display();

			}
			else if (name == "Lenglet")
			{
				Player P13;
				P13.setPlayer("Clement Lenglet", "France", "Center back", 206, 32, 8);
				P13.display();

				ThisSeason T14;
				T14.setPlayer(36, 0, 1);
				T14.display();

			}
			else if (name == "Garcia")
			{
				Player P14;
				P14.setPlayer("Eric Garcia", "Spain", "Center back", 79, 4, 1);
				P14.display();

				ThisSeason T14;
				T14.setPlayer(36, 2, 1);
				T14.display();

			}
			else if (name == "MATS")
			{
				Player P15;
				P15.setPlayer("Marc Andre Ter Stegen", "Germany", "Keeper", 498, 1, 2);
				P15.display();
				cout << "Clean sheets: " << 189;

				ThisSeason T15;
				T15.setPlayer(38, 0, 0);
				T15.display();
				cout << "Clean sheets: " << 15;
			}
		}



		else if (ch == '2')                                                                    //for Schedule
		{
			int comp;
			cout << "\tThe Schedule Of This Season [2022]" << endl;

			cout << "1. Laliga\n2. UCL" << endl;
			cin >> comp;

			Schedule S2(S1);
			if (comp == 1)
			{
				S1.schedule_Laliga();
			}
			else if (comp == 2)
			{
				S2.schedule_ucl();
			}
			else
			{
				cout << "Invalid Command" << endl;
			}
		}

		else if (ch == '3')                                                                     //for Quiz
		{

			q.game();


		}

		else if (ch == '4')                                                                    // for blog
		{
			string opinion;

			cout << "\n\t***FCBarcelona FANZONE*** " << endl << endl;
			cout << "Write your personal blog: ";
			getline(cin >> ws, opinion);

			Blog B(opinion);

			ofstream fout;                                                        //FILE HANDLING
			fout.open("opinion.txt", ios::app);
			fout << B.getOpinion() << endl;
			fout.close();

			cout << endl;

			ifstream fin("opinion.txt");

			if (fin.is_open())
			{
				while (getline(fin, opinion))
				{
					cout << "Blog posted: " << opinion << endl;
				}
				fin.close();
			}
			else
			{
				cout << "file is not open" << endl;
			}



		}

		cout << "\nDo you want to close the app(y/n): ";
		cin >> num;
	} while (num != 'y');



	cout << "\n\t************ Thank you for using our app <3 ************";


}
