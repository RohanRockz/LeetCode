# Write your MySQL query statement below
Select customer_number 
from orders group by customer_number
order by count(*)Desc
limit 1 #it means that the output will contain only 1 entry