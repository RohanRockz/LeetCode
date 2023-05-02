# Write your MySQL query statement below
select 
    requester_id as id,
    (   select count(t.requester_id) 
        from RequestAccepted t
        where t.requester_id = id or t.accepter_id = id
    ) as num
from RequestAccepted
group by id
order by num desc
limit 1;