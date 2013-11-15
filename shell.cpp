//Shell Program
//Authors: Michael and Frank
//CS485-1
//Fall 2013

#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <unistd.h>

#include "command.h"

using namespace std;


int main (int argc, char **argv)
{

  cout << Command::prompt << " ";

  //Runnin the shell requires an loop to always get new commands
  while( Command::quit == false )
  {
    int child_pid;
    list<string> args;

    ///////////////////////////////////////////////////////////////////////////////////
    //Getting Input
    //string cinput;
    //cin >> cinput;

    args.push_back("aasdf");
    Command example("#",args,"","");
    example.execute();
    args.pop_front();

    args.push_back("NewP# ")
    Command example1("setprompt",args,"","");
    example1.execute();
    args.pop_front();

    Command example2("dir");
    example2.execute();

    args.push_back("..");
    Command example3("chdir",args,"","");
    example3.execute();
    args.pop_front();

    Command example4("dir");
    example4.execute();


    ///////////////////////////////////////////////////////////////////////////////////
    //Send cinput to the Scanner and Parse here


    ///////////////////////////////////////////////////////////////////////////////////
    //Run Command
    /*
    if (true)//check if built in command
    {
      //run built in command
    }
    else
    {   
	    child_pid = fork();
        if (child_pid == 0)
		{
		  run_user_command(command);
		}
		else
		{
		  wait(child_pid);
		  exit(0);
		}
        
    }
    */

    cout << Command::prompt << " ";
  }
}

