SELECT 
    P.project_id,
    ROUND(SUM(E.experience_years) / COUNT(E.employee_id), 2) AS average_years
FROM Project P
JOIN Employee E
    ON P.employee_id = E.employee_id
GROUP BY P.project_id;