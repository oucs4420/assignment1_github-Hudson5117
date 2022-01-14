#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    /*for (int arg = 0; arg < argc; ++arg){
            std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
    }*/
    fstream input;
    string line;
    int lines=0;
    cout << "program: " << argv[0] << endl;
    for(int arg = 1; arg < argc; arg++)
    {
        lines = 0;
        input.open(argv[arg]);
        //cout << "opened file " << argv[arg] << endl;
        if(!input.is_open())
        {
            cout << " " << argv[arg] << ": " << "-1" << endl;
        }
        else
        {
            while(!input.eof())
            {
                getline(input, line);
                //if(line.length()>0)
                {
                    lines++;
                    //cout << "Lines = " << lines << endl;
                }
            }
            cout << " " << argv[arg] << ": " << lines << endl;
        }
        input.close();
    }


    

    exit(0); // this means that the program executed correctly!
}
