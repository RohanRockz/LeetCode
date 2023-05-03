# Write your MySQL query statement below
select person_name from
(select person_name, sum(weight) over(order by turn) as gross_weight from queue) a
where gross_weight <= 1000
order by gross_weight desc limit 1