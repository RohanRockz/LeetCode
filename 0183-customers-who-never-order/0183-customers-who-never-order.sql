#Use of NOT IN Clause in the below command.
# Write your MySQL query statement below
SELECT A.Name "Customers"
from Customers A
WHERE A.Id NOT IN (SELECT B.CustomerId from Orders B)