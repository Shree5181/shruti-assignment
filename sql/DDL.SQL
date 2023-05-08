--- CREATE DATABASE

-- CREATE DATABASE DATABASENAME
CREATE DATABASE UNIVERSITY;

-- USE DATABASENAME
USE UNIVERSITY;

-- HOW TO DELETE DATABASE
-- DROP DATABASE DATABASENAME
DROP DATABASE DEMO;

/*

CREATE TABLE TABLENAME(
FILED1 DATATYPE, 
FILED2 DATATYPE, 
FILED3 DATATYPE, 

CONSTRAINTS
);


PRIMARY KEY--UNIQUE NUMBER FOR EACH RECORD
FOREIGN KEY--
*/


create table student(
rollno int auto_increment,
name varchar(20),
age int,
mobile int,
email varchar(20),
address varchar(20),
primary key(rollno)
);


/*
datatype 
intger
varchar(size)
date
datetime

drop table tablename
/*

drop table student;



create table exam(
rollno int,
s_code varchar(6),
marks int,
p_code varchar(6),
foreign key(rollno) references
student(rollno)
);


insert into exam(rollno,s_code,marks,p_code)values("1","123456","45","345678");
insert into exam(rollno,s_code,marks,p_code)values("2","456767","67","67890");
insert into exam(rollno,s_code,marks,p_code)values("3","45675","78","34567");
insert into exam(rollno,s_code,marks,p_code)values("4","34567","87","45678");



use university;


---- INSERT INTO
tablename(field1,field2.....)values(value1,value2,value3....)
insert into
student(name,age,mobile,email,address)
values("sachin",48,"6579987","sachin@gmail.com","mumbai");
use university;

