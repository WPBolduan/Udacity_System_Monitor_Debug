#include "linux_parser.h"
#include "format.h"
#include "process.h"

#include <iostream>

using namespace std;

int main () {
	long test;
	//cout << "ElapsedTime since start: ";
	//cout << Format::ElapsedTime(LinuxParser::UpTime()) << endl;
	
	//cout << "IdleJiffies: ";
	//cout << to_string(LinuxParser::IdleJiffies()) << endl;
	
	//cout << "ActiveJiffies: ";
	//cout << to_string(LinuxParser::ActiveJiffies()) << endl;
	
	//cout << "Jiffies: ";
	//cout << to_string(LinuxParser::Jiffies()) << endl;
	
	//auto pids = LinuxParser::Pids();
	//cout << "PID: ";
	//for (auto i:pids){
	//	cout << to_string(i) << endl;
	//}

	//cout << "Memory Test:";
	//cout << LinuxParser::MemoryUtilization() << endl;

	//cout << "Number of running processes: ";
	//cout << LinuxParser::RunningProcesses() << endl;

	//cout << "Uid Test:";
	//cout << LinuxParser::Uid(35886) << endl;

	//cout << "User Test:";
	//cout << LinuxParser::User(35886) << endl;

	//cout << "Process CPU Utilization:";
	//cout << to_string(LinuxParser::ActiveJiffies(35886)) << endl;

	//cout << "Process CPU Utilization:";
	//cout << LinuxParser::Command(35886) << endl;

	//cout << "Process Uptime:";
	//cout << LinuxParser::UpTime(42647) << endl;

	//cout << "ActiveJiffies: ";
	//cout << to_string(LinuxParser::ActiveJiffies(42647)) << endl;

	//cout << "CPU Utilization: ";
	//for (auto item:LinuxParser::CpuUtilization()){
	//	cout << item << endl;}

	//testing process.cpp, instantiating with a process that is currently running
	Process process1(42647);
	cout << "PID: " << to_string(process1.Pid()) << endl;;
	cout << "CPU Utilization:" << to_string(process1.CpuUtilization()) << endl;
	cout << "Command: " << process1.Command() << endl;
	cout << "RAM: " << process1.Ram() << endl;
	cout << "User: " << process1.User() << endl;
	cout << "Uptime: " << to_string(process1.UpTime()) << endl;
}