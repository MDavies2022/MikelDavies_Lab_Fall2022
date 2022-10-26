# Week 6 Section (CS notation) Welcome to SQL! 🥞

These are the problems you should be able to solve at the end of Week08! If you have problems at any point reach out to CS50 staff, 
or me directly at mikeldavies@college.harvard.edu


## **LAB PROBLEM**

Go to 'https://cs50.harvard.edu/college/2022/fall/labs/7/'

Or just download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/7/songs.zip`


# Example Problem
Create and work with a database for students!

### Step 1: Make a student database
```
touch students.db
```

### Step 2: Use SQLite to edit and work within the databse
```
sqlite3 students.db
```

### Step 3: Make some tables
```
-- people
CREATE TABLE people (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL
);

-- courses
CREATE TABLE courses (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  code TEXT NOT NULL,
  title TEXT NOT NULL
);

-- students
CREATE TABLE students (
  person_id INTEGER NOT NULL,
  course_id INTEGER NOT NULL
);

-- instructors
CREATE TABLE instructors (
  person_id INTEGER NOT NULL,
  course_id INTEGER NOT NULL
);
```

### Step 4: Insert some data
```
-- Add people 
INSERT INTO people (name) VALUES ("Alice");
INSERT INTO people (name) VALUES ("Boaz");
INSERT INTO people (name) VALUES ("Charlie");
INSERT INTO people (name) VALUES ("David");
INSERT INTO people (name) VALUES ("Erin");
INSERT INTO people (name) VALUES ("Fiona");
INSERT INTO people (name) VALUES ("Greg");
INSERT INTO people (name) VALUES ("Helen");
INSERT INTO people (name) VALUES ("Irene");
INSERT INTO people (name) VALUES ("Jason");
INSERT INTO people (name) VALUES ("Stuart");

-- Add courses
INSERT INTO courses (code, title) VALUES ("CS50", "Introduction to Computer Science");
INSERT INTO courses (code, title) VALUES ("ECON 10a", "Principles of Economics");
INSERT INTO courses (code, title) VALUES ("CS51", "Abstraction and Design in Computation");
INSERT INTO courses (code, title) VALUES ("CS121", "Introduction to Theoretical Computer Science");
INSERT INTO courses (code, title) VALUES ("CS182", "Artificial Intelligence");

-- Add instructors
INSERT INTO instructors (person_id, course_id) VALUES (4, 1);
INSERT INTO instructors (person_id, course_id) VALUES (10, 2);
INSERT INTO instructors (person_id, course_id) VALUES (11, 3);
INSERT INTO instructors (person_id, course_id) VALUES (2, 4);

-- Add students
INSERT INTO students (person_id, course_id) VALUES (1, 1);
INSERT INTO students (person_id, course_id) VALUES (3, 1);
INSERT INTO students (person_id, course_id) VALUES (5, 1);
INSERT INTO students (person_id, course_id) VALUES (6, 1);
INSERT INTO students (person_id, course_id) VALUES (3, 2);
INSERT INTO students (person_id, course_id) VALUES (6, 2);
INSERT INTO students (person_id, course_id) VALUES (7, 2);
INSERT INTO students (person_id, course_id) VALUES (8, 2);
INSERT INTO students (person_id, course_id) VALUES (7, 3);
INSERT INTO students (person_id, course_id) VALUES (8, 3);
INSERT INTO students (person_id, course_id) VALUES (9, 3);
INSERT INTO students (person_id, course_id) VALUES (1, 4);
INSERT INTO students (person_id, course_id) VALUES (9, 4);
```

### Step 5: Write some `SELECT` queries to answer the following questions

Q1: What is Alice's student id?

Q2: What is the course title for CS51?

Q3: What are the course codes and titles for all the CS courses? (Assume all CS courses start with 'CS')

Q4: How many courses are there?

Q5: How many students are taking CS50?

Q6: What are the names of all the instructors?

### Step 6: Write some `UPDATE` and `DELETE` queries

Q1: Alice needs to switch from CS50 to CS51. Make it happen!

Q2: CS182 was cancelled this semester!

### Step 7: Write a program in Python 🐍 called enroll.py to add new students to a roster and enroll them in courses!

Distribution Code:
```
from cs50 import get_string, SQL

db = SQL("sqlite:///students.db")

# Add new person
### TODO

# Prompt user for courses to enroll in
### TODO
```
