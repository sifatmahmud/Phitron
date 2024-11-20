use assignment_01;
create table Employee(
EmployeeID int primary key,
FirstName varchar(50) not null,
LastName varchar(50) not null,
Age int ,
Department varchar(20) not null
);



insert into Employee
(EmployeeID, FirstName,LastName,Age,Department) values(5,'William','Davis',25,'Engineering');

select distinct Department 
from Employee;


select LastName
from Employee
order by Age desc;

select LastName
from Employee
where Age > 30 and Department = 'Marketing';

select * 
from Employee;

select *
from Employee
where LastName like '%son%' or FirstName like '%son%';

select *
from Employee
where Department = 'Engineering';
