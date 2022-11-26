#建表


CREATE TABLE book
(
	title VARCHAR(50) PRIMARY KEY,
	author VARCHAR(50),
	publisher VARCHAR(50),
	all_count INT,
	current_count INT,
	booktype VARCHAR(50)
);

CREATE TABLE customer
(
	customer_name VARCHAR(50) PRIMARY KEY,
	gender VARCHAR(50),
	customer_password VARCHAR(50),
	create_date DATE,
	customer_type VARCHAR(50)
);

CREATE TABLE borrow
(
	customer_name VARCHAR(50),
	title VARCHAR(50),
	borrow_time DATETIME,
	return_time DATETIME,
	borrow_count INT,
	return_count INT,
	FOREIGN KEY(customer_name) REFERENCES customer(customer_name) ON UPDATE CASCADE ON DELETE CASCADE,
	FOREIGN KEY(title) REFERENCES book(title) ON UPDATE CASCADE ON DELETE CASCADE
);