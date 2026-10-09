SELECT
    S.student_id,
    S.student_name,
    SE.subject_name,
    COUNT(E.subject_name) AS attended_exams
FROM Students S
CROSS JOIN Subjects SE
LEFT JOIN Examinations E
    ON E.student_id = S.student_id
   AND E.subject_name = SE.subject_name
GROUP BY S.student_id, S.student_name, SE.subject_name
ORDER BY S.student_id, SE.subject_name;