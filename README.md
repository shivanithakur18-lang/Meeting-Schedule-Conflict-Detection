# Meeting-Schedule-Conflict-Detection

## Introduction

The Meeting Schedule Conflict Detection System is a simple C++ mini project that helps detect conflicts between scheduled meetings.

The system takes the meeting name, start time, and end time as input. It compares the timings of different meetings and identifies whether any two meetings overlap.

## Objectives

* To create a simple meeting scheduling system.
* To detect overlapping meetings.
* To display the scheduled meetings.
* To practice C++ structures, loops, conditions, and arrays.

## Technologies Used

* **Programming Language:** C++
* **IDE:** Visual Studio
* **Platform:** Windows

## Features

* Enter multiple meeting details.
* Store meeting names and timings.
* Display the complete meeting schedule.
* Automatically detect meeting conflicts.
* Display the names of meetings that overlap.

## How It Works

1. The user enters the number of meetings.
2. The user enters the name, start time, and end time of each meeting.
3. The system displays all scheduled meetings.
4. The system compares every pair of meetings.
5. If two meetings overlap, a conflict message is displayed.
6. If there are no overlapping meetings, the system displays a message saying that no conflicts were found.

## Example

Suppose the meetings are:

| Meeting | Start Time | End Time |
| ------- | ---------: | -------: |
| Class   |         10 |       11 |
| Project |         10 |       12 |
| Lunch   |         13 |       14 |

The system will detect a conflict between **Class** and **Project** because both meetings are scheduled during the same time period.

## Project Structure

```text
Meeting-Schedule-Conflict-Detection
│
├── main.cpp
├── README.md
└── output.png
```

## How to Run

1. Download or clone this repository.
2. Open `main.cpp` in Visual Studio.
3. Compile the program.
4. Run the program.
5. Enter the meeting details.
6. Check the displayed conflict results.

## Learning Outcomes

Through this project, we learned:

* C++ structures
* Arrays
* For loops
* Conditional statements
* User input and output
* Time interval comparison
* Basic problem-solving

## Future Scope

The project can be improved by adding:

* Date-wise meeting scheduling.
* Automatic sorting of meetings.
* A graphical user interface.
* Different users and meeting rooms.
* Saving meeting schedules in a file.
* Email or notification reminders.

## Conclusion

The Meeting Schedule Conflict Detection System provides a simple way to identify overlapping meetings. The project demonstrates the use of basic C++ programming concepts to solve a practical scheduling problem.
