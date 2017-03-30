#pragma once

#include <iostream>
#include <chrono>

class TimeAnalyzer
{
	public: 
		TimeAnalyzer(const std::string &);
		TimeAnalyzer(const TimeAnalyzer &) = delete;
		TimeAnalyzer(TimeAnalyzer &&) = delete;
		~TimeAnalyzer();	
		
		void printCheckpointTime(const std::string &);

	private:
		const std::chrono::high_resolution_clock::time_point 	start_point_;
		const std::string 					starting_point_description_;		

};
