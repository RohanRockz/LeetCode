#Use of NOT IN Clause in the below command.
# Write your MySQL query statement below
Select customers.name as 'Customers'
from customers
where customers.id not in(select customerid from orders);
