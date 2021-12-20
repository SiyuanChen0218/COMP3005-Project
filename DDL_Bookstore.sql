create table book
	(ISBN		varchar(15),
	 title		varchar(15),
	 author		varchar(15),
	 genre		varchar(15),
	 pageNum	numeric(4,0),
	 price		numeric(4,0),
	 primary key (ISBN)
	);

create table author
	(author_id		varchar(20), 
	 author_name	varchar(15), 
	 birth		    varchar(15),
	 country		varchar(20),
	 primary key (author_id)
	);

create table users
	(users_id			varchar(10), 
	 users_name			varchar(10), 
	 checkout_basket	varchar(50),
	 users_address		varchar(20),
	 email				varchar(20),
	 phone				varchar(20),
	 bank_account		varchar(20),
	 primary key (users_id)
	);

create table publisher
	(publisher_id			varchar(5), 
	 publisher_name			varchar(20), 
	 publisher_address		varchar(20), 
	 email					varchar(20),
	 phone					varchar(20),
	 bank_account			varchar(20),
	 primary key (publisher_id)
	);

create table orders
	(order_number					varchar(8), 
     tracking_information			varchar(50),

	 primary key (order_number)
	);
