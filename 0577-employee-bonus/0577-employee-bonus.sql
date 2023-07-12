# Write your MySQL query statement below
select Employee.name,Bonus.bonus 
from Bonus right join Employee
on Bonus.empId=Employee.empId
where Bonus.bonus<1000 OR Bonus.bonus IS NULL ;