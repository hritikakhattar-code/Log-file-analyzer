Log File Analyzer
This is a simple Log File Analyzer written in C++ that reads a log.txt file and performs various operations such as:

Counting the number of INFO, WARNING, and ERROR logs

Extracting error messages into a separate file (error_logs.txt)

📌 Features
✅ Reads log entries from log.txt
✅ Counts occurrences of [INFO], [WARNING], and [ERROR] logs
✅ Extracts error messages and saves them in error_logs.txt
✅ Works with standard log formats

📂 Project Structure

📁 Log-file-analyzer

│── 📜 count_log_levels.cpp  
# Counts log levels
│── 📜 extract_errors.cpp   
# Extracts errors from logs
│── 📜 save_errors.cpp     
# Saves errors into a separate file
│── 📜 log.txt             
# Sample log file
│── 📜 README.md          
# Project documentation
│── 📜 error_logs.txt     
# Output file (generated)
🚀 How to Run

1️⃣ Compile the Code
Run the following commands in the terminal:

g++ count_log_levels.cpp -o count_log_levels.exe -std=c++11 -Wall
g++ extract_errors.cpp -o extract_errors.exe -std=c++11 -Wall
g++ save_errors.cpp -o save_errors.exe -std=c++11 -Wall


2️⃣ Run the Programs
To count log levels:
./count_log_levels.exe
To extract errors:
./extract_errors.exe
To save errors in a file:
./save_errors.exe
📝 Sample log.txt File

[INFO] Application started
[WARNING] Low disk space
[ERROR] File not found
[INFO] User logged in
[ERROR] Connection lost
Expected Output (count_log_levels.exe)

INFO Logs: 2
WARNING Logs: 1
ERROR Logs: 2
🔥 Contributing
Feel free to contribute by adding new features or improving the code. Fork this repository and submit a pull request!

📜 License
This project is open-source and available under the MIT License.

🎯 Next Steps (Future Enhancements)
Add support for log files with timestamps

Improve regex parsing for better error detection

Implement a GUI version using Qt

