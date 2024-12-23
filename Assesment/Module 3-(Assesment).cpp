// ? Create a lecture management System 

#include<iostream>
using namespace std;
class lecture_details
{
	private:
		string lecturer_name;
		string sub_name;
		string course_name;
		int lecture_num;
	public:
		lecture_details()
		{
			
		}
		void add_details(string ln , string sn , string cn , int n)
		{
				lecturer_name=ln;
				sub_name=sn;
				course_name=cn;
				lecture_num=n;
		}
		void display_details()
		{
				cout<<"\n\n\t Lecturer name :- "<<lecturer_name;
				cout<<"\n\n\t subject name :- "<<sub_name;
				cout<<"\n\n\t course name :- "<<course_name;
				cout<<"\n\n\t lecture number :- "<<lecture_num;
		}
			
};
main()
{
	lecture_details lc[5];
	string lecturer_name;
	string sub_name;
	string course_name;
	int lecture_num;
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t ______Enter Lecturer Details["<<i+1<<"]_______ ";
		
		cout<<"\n\n\t Enter Lecturer name :- ";
		cin>>lecturer_name;
		cout<<"\n\n\t Enter Subject name :- ";
		cin>>sub_name;
		cout<<"\n\n\t Enter Course name :- ";
		cin>>course_name;
		cout<<"\n\n\t Enter Lecture Number :- ";
		cin>>lecture_num;
		
		lc[i].add_details(lecturer_name ,sub_name , course_name , lecture_num);
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t __________Lecturer Details["<<i+1<<"]__________ ";
		lc[i].display_details();
	}
	
}