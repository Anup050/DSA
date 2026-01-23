# Write your MySQL query statement below
SELECT Department,Employee,Salary FROM
(SELECT d.name AS Department,e.name AS Employee,e.salary AS Salary,
DENSE_RANK() over(partition by d.name ORDER BY e.salary DESC) AS ranks
FROM Employee AS e LEFT JOIN Department AS d
ON e.departmentId = d.id) temp
WHERE ranks <=3;