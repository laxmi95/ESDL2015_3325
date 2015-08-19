#include<iostream> 
#include<fstream> 
#include<string.h> 
#include<math.h> 

using namespace std; 

int main() 
{ 
	int num,res = 0,ch; 
	ifstream fin; 
	ofstream fout; 
	char infile[20],outfile[20]; 
	 
	cout<<"Enter the input filename : "; 
	cin>>infile; 
 
	fin.open(infile,ios::in); 
	if(!fin) 
	{ 
		cout<<"Cannot open file"<<endl; 
		return 1; 
	} 

	cout<<"Menu"<<endl; 
	cout<<"1.Addition"<<endl; 
	cout<<"2.Multiplication"<<endl; 
	cout<<"3.Square"<<endl; 
	cout<<"4.Logarithm"<<endl; 

	cout<<"Enter your choice : "; 
	cin>>ch; 

	switch(ch) 
	{ 
	case 1: 
		while(fin) 
		{ 
			fin>>num; 
			if(!fin.eof()) 
			{ 
				res =res + num; 
			} 
		} 

		cout<<"Enter the output filename : "; 
		cin>>outfile; 

		fout.open(outfile,ios::out); 
		if(!fout) 
		{ 
			cout<<"Cannot open file"<<endl; 
			return 1; 
		}	 
			fout<<res; 
	 
		cout<<"Res stored in output file"<<endl; 
		fin.close(); 

		break; 

	case 2: 
		res = 1; 
		while(fin) 
		{ 
			fin>>num; 
			if(!fin.eof()) 
			{ 
				res =res * num; 
			} 
		} 
		fin.close(); 
		 

		cout<<"Enter the output filename : "; 
		cin>>outfile; 

		fout.open(outfile,ios::out); 
		if(!fout) 
		{ 
			cout<<"Cannot open file"<<endl; 
			return 1; 
		}	 
			fout<<res; 

		cout<<"Res stored in output file"<<endl; 
		fin.close(); 

		break; 
	 
	case 3: 

		cout<<"Enter the output filename : "; 
		cin>>outfile; 

		fout.open(outfile,ios::out); 
		if(!fout) 
		{ 
			cout<<"Cannot open file"<<endl; 
			return 1; 
		}			 
		 
		while(fin) 
		{ 
			fin>>num; 
			if(!fin.eof()) 
			{	 
				res = pow(num,2); 
				fout<<"Square of "<<num<<" is "<<res<<endl; 
			} 
		} 

		cout<<"Res stored in output file"<<endl; 

		fin.close(); 
		break; 

	case 4: 
		double ans; 

		cout<<"Enter the output filename : "; 
		cin>>outfile; 

		fout.open(outfile,ios::out); 

		if(!fout) 
		{ 
			cout<<"Cannot open file"<<endl; 
			return 1; 
		}			 

		while(fin) 
		{ 
			fin>>num; 
			if(!fin.eof()) 
			{ 
				ans =log(num); 
				fout<<"Log of "<<num<<" is "<<ans<<endl; 
			} 
		} 

		cout<<"Res stored in output file"<<endl; 
		fin.close(); 

		break; 

	

	} 
		 
	 
	return 0; 
} 
	 





