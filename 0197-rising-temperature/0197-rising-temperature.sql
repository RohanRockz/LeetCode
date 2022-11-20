# Write your MySQL query statement below
Select weather.id as 'Id'
from weather join weather w on DateDiff(weather.recordDate,w.recordDate)=1
and weather.temperature>w.temperature