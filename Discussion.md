Solutions Considered:
One approach was to load the entire file into memory and filter logs based on the date. 
However, this was not feasible because the file is very large (1 TB), and loading it all into memory would use too much space and crash the system.
Another approach I considered was reading the file line-by-line. 
This method processes the file one line at a time, checking if the date matches the user's input and saving only relevant logs. 
This is memory-efficient and works well with large files, so I chose this method.

Final Solution Summary:
The best approach was reading the file line-by-line, which is simple, efficient, and works well with large files. 
By reading each line, checking the date, and writing the matching logs to a file, the solution is memory-friendly and fast enough for this task.




Steps to Run:
Clone the repository and go to the project folder:

bash
Copy
git clone https://github.com/your_username/log_extractor.git
cd log_extractor
Install build tools if needed (e.g., on Ubuntu):

bash
Copy
sudo apt-get install build-essential
Build the C++ code:

bash
Copy
cd src
g++ -o extract_logs extract_logs.cpp
Run the program with a specific date (e.g., for December 1st, 2024):

bash
Copy
./extract_logs 2024-12-01
This will create a file output_2024-12-01.txt with logs for that day.

Push your changes to your GitHub fork:

bash
Copy
git add .
git commit -m "Added log extraction"
git push origin main
Submit the link to your forked repository.
