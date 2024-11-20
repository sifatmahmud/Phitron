use dummydb;


with avgit as(
select avg(salary) as sal1
from employees
where department_id = 60
),
maxmarket as(
select max(salary) as sal2
from employees
where department_id = 20
)
select *
from employees
where salary > (select sal1 from avgit) and salary < (select sal2 from maxmarket);

