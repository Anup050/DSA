# Write your MySQL query statement below
SELECT user_id,
CONCAT(UPPER(SUBSTR(name,1,1)),LOWER(SUBSTR(name,2))) 
AS name FROM USERS
ORDER BY user_id;


