# Write your MySQL query statement below
SELECT DISTINCT class
FROM Courses
WHERE student IN (
    SELECT student
    FROM Courses
    GROUP BY class
    HAVING COUNT(student)>=5
);