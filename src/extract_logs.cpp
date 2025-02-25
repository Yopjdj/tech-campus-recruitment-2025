#include <bits/stdc++.h>
#include <cstring>
#include <fstream>
using namespace std;

// Function to check if the log entry matches the desired date
bool matchDate(const string& logLine, const string& dt) 
{
    string logDate=logLine.substr(0, 10);
    return logDate==dt;
}
// Function to extract logs for a given date
void extractLogs(const string& filename, const string& dt) 
{
    ifstream logFile(filename);  // Open the log file
    if (!logFile.is_open())
    {
        cerr<< "Error opening log file: "<<filename<< endl;
        return;
    }

    // Output file to store logs for the specific date
    ofstream outf("output/output_" +dt +".txt");//output file name

    string line;
    while (getline(logFile, line)) {
        if (matchDate(line, dt)) {
            outf << line << endl;  // Write the matching log to the output file
        }
    }
    logFile.close();
    outf.close();
    cout<<"Extraction successfull"<<endl;
}

int main(int argc, char* argv[]) 
{
    if (argc != 2) 
    {
        cerr<<"Usage: " << argv[0] << " <date (YYYY-MM-DD)>" << endl;
        return 1;
    }

    string dt = argv[1];//input date given

    if (dt.length() != 10||dt[4] != '-'|| dt[7] !='-')
    {
        cerr << "Invalid date format. Use YYYY-MM-DD." << endl;
        return 1;
    }
    string logs= "logs_2024.log";
    extractLogs(logs, dt);

    return 0;
}
