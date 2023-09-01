# Write your MySQL query statement below
select eu.unique_id as unique_id , e.name as name from Employees e LEFT JOIN EmployeeUNI eu on eu.id = e.id;