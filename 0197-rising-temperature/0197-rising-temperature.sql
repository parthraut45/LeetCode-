# Write your MySQL query statement below
select w1.id from Weather w1 inner join Weather w2 where datediff( w1.recordDate , w2.recordDate) = 1 and w1.temperature > w2.temperature

# with tmp as (
# select id ,RecordDate,Temperature,
# LAG (Temperature,1) OVER (ORDER BY RecordDate) AS prev_Temperature,
# LAG (RecordDate,1) OVER (ORDER BY RecordDate) AS prev_RecordDate
# from Weather)

# select id from tmp where Temperature>prev_Temperature and (RecordDate-prev_RecordDate)=1