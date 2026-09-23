select e.name,b.bonus
from Employee e
join Bonus b
ON e.empID=b.empID
where b.bonus<1000||b.bonus IS NULL
