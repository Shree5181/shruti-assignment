CREATE DATABASE ASSIGNMENT;

USE ASSIGNMENT;

create table assignment(
prd_ID int auto_increment,
prd_name varchar(25),
recommended_price varchar(25),
category varchar(25),
primary key(prd_ID)
);


insert into assignment(prd_name,recommended_price,category)values("shruti","300","glosary");
insert into assignment(prd_name,recommended_price,category)values("ushukygk","500","electic");
insert into assignment(prd_name,recommended_price,category)values("khkhjnj","200","glosary");

use assignment;

create table customer(
customerID int auto_increment,
firstname varchar(25),
lastname varchar(25),
city varchar(25),
state varchar(25),
zip varchar(25),
primary key(customerID)
);


insert into customer(firstname,lastname,city,state,zip)values("shruti","dholariya","surat","gujrat","395006");
insert into customer(firstname,lastname,city,state,zip)values("hfeu","dhameliya","surat","gujrat","395006");
insert into customer(firstname,lastname,city,state,zip)values("nirali","vamja","surat","gujrat","395006");

use assignment;

create table sales(
sales_ID int auto_increment,
prd_ID int,
cust_ID int,
salesprice varchar(25),
salesdate date,
primary key(sales_ID),
foreign key(prd_ID)references assignment(prd_ID),
foreign key(cust_ID)references customer(customerID)
);

insert into sales(prd_ID,cust_ID,salesprice,salesdate)values("1","3","300","20-4-23");
insert into sales(prd_ID,cust_ID,salesprice,salesdate)values("2","2","200","12-4-23");
insert into sales(prd_ID,cust_ID,salesprice,salesdate)values("3","1","500","10-4-23");
use assignment;


drop table employee;
create table employee(
empid int auto_increment,
empname varchar(25),
department varchar(25),
contactno varchar(25),
emailid varchar(25),
empheadid int,
primary key(empid)
);




insert into employee(empname,department,contactno,emailid,empheadid)values("Isha","E-101","1234567890","isha@gmail.com",105);
insert into employee(empname,department,contactno,emailid,empheadid)values("priya","E-104","1234567890","priya@yahoo.com","103");
insert into employee(empname,department,contactno,emailid,empheadid)values("neha","E-101","1234567890","neha@gmail.com","101");
insert into employee(empname,department,contactno,emailid,empheadid)values("rahul","E-102","1234567890","rahul@yahoo.com","105");
insert into employee(empname,department,contactno,emailid,empheadid)values("abhishek","E-101","1234567890","abhishek@gmail.com","102");


use assignment;
drop table empdept;
create table empdept(
deptid int auto_increment,
deptname varchar(25),
dept_off varchar(25),
depthead int,
primary key(deptid)
);

insert into empdept(deptname,dept_off,depthead)values("HR","monday","105");
insert into empdept(deptname,dept_off,depthead)values("development","tuesday","101");
insert into empdept(deptname,dept_off,depthead)values("hous keeping","saturday","103");
insert into empdept(deptname,dept_off,depthead)values("sales","sunday","104");
insert into empdept(deptname,dept_off,depthead)values("purchage","tuesday","104");

drop table empsalary;
create table empsalary(
empid int,
salary int,
ispermanent  varchar(25),
foreign key(empid) references employee(empid)
);

insert into empsalary(empid,salary,ispermanent)values("1","2000","yes");
insert into empsalary(empid,salary,ispermanent)values("2","10000","yes");
insert into empsalary(empid,salary,ispermanent)values("3","5000","no");
insert into empsalary(empid,salary,ispermanent)values("4","1900","yes");
insert into empsalary(empid,salary,ispermanent)values("5","2300","yes");

drop table project;
create table project(
projectid varchar(10),
duration int,
primary key(projectid)
);

insert into project(projectid,duration)values("p-1","23");
insert into project(projectid,duration)values("p-2","15");
insert into project(projectid,duration)values("p-3","45");
insert into project(projectid,duration)values("p-4","2");
insert into project(projectid,duration)values("p-5","30");


use assignment;

drop table country;
create table country(
cid varchar(20),
cname varchar(25),
primary key(cid)
);

insert into country(cid,cname)values("c-1","india");
insert into country(cid,cname)values("c-2","usa");
insert into country(cid,cname)values("c-3","china");
insert into country(cid,cname)values("c-4","pakistan");
insert into country(cid,cname)values("c-5","russia");

drop table clienttable;
create table clienttable(
clientid varchar(25),
clientname varchar(25),
cid varchar(25),
foreign key(cid)references country(cid)
);

insert into clienttable(clientid,clientname,cid)values("cl-1","abc group","c-1");
insert into clienttable(clientid,clientname,cid)values("cl-2","pqr","c-1");
insert into clienttable(clientid,clientname,cid)values("cl-3","xyz","c-2");
insert into clienttable(clientid,clientname,cid)values("cl-4","tech altum","c-3");
insert into clienttable(clientid,clientname,cid)values("cl-5","mnp","c-5");

drop table empproject;

create table empproject(
empid int ,
projectid varchar(10),
clientid  varchar(25),
startyear int,
endyear int,
foreign key(empid) references employee(empid),
foreign key(projectid) references project(projectid),
foreign key(clientid) references clienttable(clientid)
);
use assignment;

insert into empproject(empid,projectid,clientid,startyear,endyear)values("1","p-1","cl-1","2010","2010");
insert into empproject(empid,projectid,clientid,startyear,endyear)values("2","p-2","cl-2","2010","2012");
insert into empproject(empid,projectid,clientid,startyear)values("3","p-1","cl-3","2013");
insert into empproject(empid,projectid,clientid,startyear,endyear)values("4","p-4","cl-1","2014","2015");
insert into empproject(empid,projectid,clientid,startyear)values("5","p-4","cl-5","2015");



use assignment;

show tables;

/*1*/

select firstname,lastname from customer;
select prd_name from assignment;
select salesprice from sales;

/*2*/

select * from customer where customerID not in(select cust_ID from sales);


/*3*/

select firstname,lastname from customer;
select salesprice from sales;
select recommended_price from assignment;










