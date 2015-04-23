//Deekshitha Thumma and Christine Samson
//Hoenigman 2270
//Final Project
//April 20th

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include "Fashion.h"

using namespace std;

string convert(string string1);
string display(string word);

int main(int argc, char *argv[])
{
	ifstream data;   
    string token;
    data.open(argv[1]);  //read in argument as file 
    
    int counter = 0; 
    int number = 0;   //item number 
    int size = 0;
    string name;  //title
    string type;
    string color;
    string style;
    
    item *arr = new item[size];
    
    
    while (getline(data, token, ','))   //while we are reading in each line 
    {
        counter++;
        if (counter % 5 == 1)  // if first item in line 
        {
            number = stoi(token);   //token is item number
        }

        if (counter % 5 == 2) // if second item in line 
        { 
            name = convert(token);   //converting name to number and token is name of item
        }
        
        if (counter % 5 == 3) // if third item in line
        {
            type = convert(token); 

        }
        if (counter % 5 == 4) // if fourth item in line
        {
			color = convert(token);
		}
		
        if (counter % 5 == 0) // if fifth item in line
        {
			style = convert(token);
			
			arr[counter].number = number;
			arr[counter].name = name;
			arr[counter].type = type;
			arr[counter].color = color;
			arr[counter].style = style;
			
            counter++;
		}
	}

	
	
	
	
	
	
	
	
	
	
	int command;

    while(command != 5)
    {
        cout<<"======Main Menu======"<<endl;
        cout<<"1. "<<endl;
        cout<<"2. "<<endl;
        cout<<"3. "<<endl;
        cout<<"4. "<<endl;
        cout<<"5. "<<endl;

        cin >> command;
        cin.ignore(10000,'\n');

        switch(command){

            case 1:
				cout << convert("cheese") << endl;
				cout << display("cheese") << endl;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:;
                break;
            case 5:
                cout<<"Goodbye!"<<endl;
                break;
            default:
                cout<<"Not a valid menu selection"<<endl;
                break;
        }
    }

    return 0;
}

string convert(string string1){
    int lng = string1.length();
    int match = string1.length();
    int index = 0;
    
    
    for (int x = 0; x< string1.length(); x++){                         //if the character is a symbol
        if (string1[x] == ' ' ||string1[x] == '!' ||string1[x] == '@' 
            ||string1[x] == '#' ||string1[x] == '$' ||string1[x] == '%' 
            ||string1[x] == '^' ||string1[x] == '&' ||string1[x] == '*' 
            ||string1[x] == '(' ||string1[x] == ')' ||string1[x] == '-' 
            ||string1[x] == '+' ||string1[x] == '=' ||string1[x] == '/' 
            ||string1[x] == ',' ||string1[x] == '.' ||string1[x] == '?' 
            ||string1[x] == '\"' ||string1[x] == ':' ||string1[x] == ';' 
            ||string1[x] == '\'')
		{
            lng--;
        }
    }

    char newstr[lng-2];
    char newchar;
    for (int x = 0; x< match; x++){
        if (string1[x] == ' ' ||string1[x] == '!' ||string1[x] == '@' 
        ||string1[x] == '#' ||string1[x] == '$' ||string1[x] == '%' 
        ||string1[x] == '^' ||string1[x] == '&' ||string1[x] == '*' 
        ||string1[x] == '(' ||string1[x] == ')' ||string1[x] == '-' 
        ||string1[x] == '+' ||string1[x] == '=' ||string1[x] == '/' 
        ||string1[x] == ',' ||string1[x] == '.' ||string1[x] == '?' 
        ||string1[x] == '\"' ||string1[x] == ':' ||string1[x] == ';' 
        ||string1[x] == '\''){
        }
        else 
        {
            if (string1[x] == 'A' ||string1[x] == 'B' ||string1[x] == 'C' 
            ||string1[x] == 'D' ||string1[x] == 'E' ||string1[x] == 'F' 
            ||string1[x] == 'G' ||string1[x] == 'H' ||string1[x] == 'I' 
            ||string1[x] == 'J' ||string1[x] == 'K' ||string1[x] == 'L' 
            ||string1[x] == 'M' ||string1[x] == 'N' ||string1[x] == 'O' 
            ||string1[x] == 'P' ||string1[x] == 'Q' ||string1[x] == 'R' 
            ||string1[x] == 'S' ||string1[x] == 'T' ||string1[x] == 'U' 
            ||string1[x] == 'V' ||string1[x] == 'W' ||string1[x] == 'X' 
            ||string1[x] == 'Y' ||string1[x] == 'Z')
            {
            newchar = tolower(string1[x]);
            

            }
            else 
            {
				newchar = string1[x];   //cponvert to integer char 
            }
            newstr[index] = newchar;
            index++;
        }
    }
    return newstr;
}

string display(string word) {
	int a = new int[100]
   cout << "\nSentence entered is \n" << word;
   len=word.length();
   cout << "\n\nLength of sentence is " << len;
   cout << "\n\nThe ASCII for each character are as follows :\n\n";
   for (int x=0;x < len;x++) {    // While the string isn't at the end...
        cout << word[x] << " : "<< int(word[x]) << "\n";    // Display char and ascii
        a[x]=int(word[x]);   // storing ascii code of each character in an array
    }
    cout << "\n";
    // reversing ascii to characters
    cout << "Reversing ASCII codes back to characters\n\n ";
    for (intx=0;x <len;x++) {
        cout << char(a[x]);
    }
    cout << "\n\n";
return word;
}
