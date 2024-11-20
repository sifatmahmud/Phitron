select *
From employees
where employee_id = 144;

--------------------------------

select *
From employees
where salary < (select salary
From employees
where employee_id = 144);

-------------------------------------

select max(salary)
from employees;

-------------------------------
select *
From employees
where salary = (select max(salary)
from employees);

-----------------------------------
select *
From departments;
-----------------------------
select *
From employees;
----------------------
select department_id
From departments
where department_name = 'MARKETING';
--------------------------

select *
From employees
where department_id = (select department_id
From departments
where department_name = 'MARKETING');
---------------------

select avg(salary)
From employees
where department_id = (select department_id
From departments
where department_name = 'MARKETING');
----------------------------------

select count(*)
From employees
where department_id = (select department_id
From departments
where department_name = 'IT');

--------------------------------

select *
From dummydb.jobs;

--------------------------------

select *
From employees
where job_id = (select job_id
from jobs
where job_title = 'PROGRAMMER');
--------------------------------

select sum(salary)
From employees
where job_id = (select job_id
from jobs
where job_title = 'PROGRAMMER');

------------------------

select distinct salary
from employees
order by salary desc
limit 1
offset 1;

------------------------

select *
from employees
where salary = (select distinct salary
from employees
order by salary desc
limit 1
offset 1);

---------------------
select max(salary)
from employees;
---------------------
select max(salary)
from employees
where salary < (select max(salary)
from employees);
------------------

select *
from employees
where salary = (select max(salary)
from employees
where salary < (select max(salary)
from employees));

----------------------
select *
from employees as emp
where salary > (select salary
from employees as mgr
where emp.manager_id = mgr.employee_id
);

----------------------
select *
from employees as emp
where job_id = (select job_id
from employees as mgr
where emp.manager_id = mgr.employee_id
);






