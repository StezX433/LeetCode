SELECT 
    CASE 
        WHEN id % 2 = 1 AND id = (SELECT MAX(id) FROM Seat) THEN id   -- last odd: stays
        WHEN id % 2 = 1 THEN id + 1                                    -- odd: move forward
        ELSE id - 1
    END AS id,
    student
FROM Seat
ORDER BY id;