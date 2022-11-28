# Write your MySQL query statement below
Select name
from salesperson 
where sales_id Not in(select sales_id from orders o left join company c on c.com_id=o.com_id
                     where c.name ='RED')