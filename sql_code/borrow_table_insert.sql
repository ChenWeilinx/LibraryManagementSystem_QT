INSERT INTO borrow(customer_name,title,borrow_time,return_time,borrow_count,return_count)
VALUES ("陈伟林","高等数学(下)",NOW(),NULL,1,0),
("陈伟林","离散数学",NOW(),NULL,2,0);


UPDATE book SET current_count = all_count + 
	    IFNULL((SELECT SUM(return_count) FROM borrow 
	    WHERE borrow.`title` = '离散数学' AND 
	          borrow.`return_time` IS NOT NULL),0)  -
	    IFNULL((SELECT SUM(borrow_count) FROM borrow 
	    WHERE borrow.`title` = '离散数学' AND 
		  borrow.`borrow_time` IS NOT NULL),0)
WHERE book.`title` = '离散数学'


UPDATE book SET current_count = all_count + 
IFNULL((SELECT SUM(return_count) 
FROM borrow WHERE borrow.`title` = '离散数学' 
AND borrow.`return_time` IS NOT NULL),0) 
- IFNULL((SELECT SUM(borrow_count) 
FROM borrow WHERE borrow.`title` = '离散数学' 
AND borrow.`borrow_time` IS NOT NULL),0) WHERE book.`title` = '离散数学'


SELECT * FROM book