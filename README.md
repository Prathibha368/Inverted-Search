# Inverted Search Project

## 📌 Project Overview
This project implements an **Inverted Search System** in C, which allows users to efficiently search for words in multiple text files. The system creates an inverted index that maps each word to the files in which it appears, along with occurrence information.

The project demonstrates file handling, data structures, and searching techniques in C programming.

## 🎯 Objectives

* Understand the concept of inverted indexing
* Implement efficient word searching
* Practice file handling in C
* Use structures and pointers
* Improve logical and problem-solving skills

## ⚙️ Features

* Create database from input files
* Store words and file details
* Search for a word in multiple files
* Display indexed data
* Save and update database
* Load existing database

## 💻 Technologies Used

* Programming Language: C
* Compiler: GCC
* Platform: Linux / Ubuntu
* Editor: VS Code


## 📁 Project Structure

250046_Inverted_search/
│
├── main.c          → Main driver file
├── create.c        → Create database
├── display.c       → Display database
├── search.c        → Search word
├── save.c          → Save database
├── update.c        → Update database
├── inverted.c      → Core logic
├── inverted.h      → Header file
├── database.txt    → Stored database
├── f1.txt, f2.txt… → Sample input files
└── a.out           → Executable file

## 🧠 Working Principle

1. Input text files are read line by line.
2. Each word is extracted and processed.
3. An inverted index is created using linked lists.
4. Words are mapped to file names and counts.
5. User can search for any word.
6. Results are displayed with file details.

## ▶️ How to Compile and Run

### Step 1: Compile
gcc *.c -o inverted_search

### Step 2: Run
./inverted_search f1.txt f2.txt f3.txt

(You can replace file names as required.)

## 📋 Menu Options (If Applicable)

1. Create Database
2. Display Database
3. Search Word
4. Save Database
5. Update Database
6. Exit

## 🌍 Applications

* Search engines
* Document indexing systems
* Digital libraries
* Text analysis tools
* Information retrieval systems
## 🔥 Key Learnings

* File processing in C
* Linked list implementation
* String manipulation
* Modular programming
* Efficient searching methods

