# Write your MySQL query statement below
select max(Salary) as SecondHighestSalary 
from Employee where Salary not in (Select max(Salary) from Employee)