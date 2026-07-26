select b.unique_id,a.name from Employees as a left join EmployeeUNI as b ON a.id=b.id;
