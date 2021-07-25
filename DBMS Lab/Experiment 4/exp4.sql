USE 19WH1A1270;
CREATE TABLE BUS (pid INT, name VARCHAR(50), age INT, gender CHAR, address VARCHAR(20), b_colour VARCHAR(20));
INSERT INTO BUS VALUES(5745, 'Surya', 43, 'M', 'Hyderabad', 'blue');
INSERT INTO BUS VALUES(7832, 'Sajay', 28, 'M', 'Hyderabad', 'red');
INSERT INTO BUS VALUES(6894, 'Jaya', 26, 'F', 'Tirupathi', 'green');
INSERT INTO BUS VALUES(6783, 'Anjali', 21, 'F', 'Rajamundhry', 'red');
SELECT * FROM BUS;


CREATE TABLE train(train_no VARCHAR(20), route VARCHAR(20), tcolor VARCHAR(20));
INSERT INTO train VALUES('TS123', 'Hyderabad', 'blue');
INSERT INTO train VALUES('TS124', 'Hyderabad', 'red');
INSERT INTO train VALUES('TS125', 'Tirupathi', 'red');
INSERT INTO train VALUES('TS126', 'Rajamundhry', 'blue');
SELECT * FROM train;

CREATE TABLE ticket(ticket_num int, from_place VARCHAR(20), destiny VARCHAR(20),bid int);
INSERT INTO ticket VALUES(1, 'hyd', 'tirupathi', 1);
INSERT INTO ticket VALUES(2, 'tirupati', 'karimnagar', 3);
INSERT INTO ticket VALUES(3, 'hyderabad', 'vizag', 2);
select * FROM ticket;
DELETE FROM ticket T WHERE T.from_place='hyd'; 
UPDATE ticket T SET T.ticket_num= ticket_num+1 WHERE T.ticket_num=1;
ALTER TABLE ticket ADD COLUMN pid INT;
SELECT * FROM ticket;