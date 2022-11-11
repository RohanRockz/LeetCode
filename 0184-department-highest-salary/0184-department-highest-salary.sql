# Write your MySQL query statement below
Select Department.name as 'Department',
Employee.name as 'Employee',
Salary
from Employee Join Department on Employee.DepartmentId=Department.Id
where(Employee.DepartmentId,Salary) in
(Select DepartmentId,Max(Salary)
from employee group by DepartmentId);