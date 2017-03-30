#include "TimeAnalyzer.hpp"

using namespace std;

TimeAnalyzer::TimeAnalyzer(const string &t_description = "") : 
	start_point_(chrono::high_resolution_clock::now()), 
	starting_point_description_(t_description)
{}


void TimeAnalyzer::printCheckpointTime(const string &t_checkpoint_name = "")
{
	auto difference = chrono::duration_cast<chrono::milliseconds>(
		chrono::high_resolution_clock::now() - start_point_);

	cout<<"Timespan between \""<<starting_point_description_<<"\" and \""
		<<t_checkpoint_name<<"\": "<<difference.count()<<"ms. \n";

}

TimeAnalyzer::~TimeAnalyzer()
{
	printCheckpointTime("Analysis end");
}

