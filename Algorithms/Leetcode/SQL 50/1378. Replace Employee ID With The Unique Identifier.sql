select unique_id,name
from Employees
LEFT join EmployeeUNI
ON Employees.id=EmployeeUNI.id;
