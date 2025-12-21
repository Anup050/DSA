# Write your MySQL query statement below
(SELECT "Low Salary" AS category,(SELECT COUNT(*) FROM Accounts 
WHERE income<20000) accounts_count)
UNION
(SELECT "Average Salary" AS category,(SELECT COUNT(*) FROM Accounts 
WHERE income >= 20000 AND income <= 50000) accounts_count)
UNION
(SELECT "High Salary" AS category,(SELECT COUNT(*) FROM Accounts 
WHERE income>50000) accounts_count)