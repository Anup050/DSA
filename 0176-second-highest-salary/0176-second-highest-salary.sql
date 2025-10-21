# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary FROm Employee
WHERE salary < (SELECT MAX(salary) FROM Employee);