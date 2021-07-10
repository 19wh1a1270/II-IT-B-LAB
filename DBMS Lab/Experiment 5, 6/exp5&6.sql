DROP DATABASE IF EXISTS 19WH1A1270;
CREATE SCHEMA 19WH1A1270;
USE 19WH1A1270;
CREATE TABLE passengers(pid INT, p_name VARCHAR(30),  phone_number VARCHAR(10), address VARCHAR(30),gender VARCHAR(3), age INT);
INSERT INTO passengers VALUES(1234, 'Rohith', 1234567890,  'Delhi', 'M', 34);
INSERT INTO passengers VALUES(2345, 'Ritika', '9876543210', 'Mumbai', 'F', 32);
INSERT INTO passengers VALUES(3456, 'Anu', '8675439102', 'Hyderabad', 'F', 19);
INSERT INTO passengers VALUES(4567, 'Sravani', '6781234590', 'Ongole', 'F', 20);
INSERT INTO passengers VALUES(5678, 'Arjun', '3216549870', 'Banglore', 'M', 44);
INSERT INTO passengers VALUES(6789, 'Abhi', '7896541230', 'Kolkata', 'M', 35);

SELECT * FROM passengers;
DELETE FROM passengers p WHERE p.pid = 4567;
SELECT p_name, gender FROM passengers;
SELECT * FROM passengers p WHERE p.age = 19;

CREATE TABLE bus(bid int, b_color VARCHAR(10), start_place VARCHAR(20), destination VARCHAR(20));
INSERT INTO bus VALUES(1234,'Red','Hyderabad','Nellore');
INSERT INTO bus VALUES(2345,'Blue','Mumbai','Ahmedabadr');
INSERT INTO bus VALUES(3456,'Blue','Hyderabad','vizag');
INSERT INTO bus VALUES(4567,'Red','Hyderabad','Ongole');
select * FROM bus;

CREATE TABLE reservation(tno INT, pid INT, journeydate VARCHAR(20), seat_no INT, price INT);
INSERT INTO reservation VALUES(1256, 1234, '20-07-2021', 12, 456);
INSERT INTO reservation VALUES(1278, 2345, '16-07-2021', 3, 252);
INSERT INTO reservation VALUES(1293, 3456,'14-07-2021', 4, 478);
INSERT INTO reservation VALUES(1248, 4567, '21-07-2021', 7, 348);
INSERT INTO reservation VALUES(1240, 5678, '27-07-2021', 8, 462);
DELETE FROM reservation  WHERE tno = 1240;
SELECT * FROM reservation;
UPDATE reservation  r SET r.tno = r.tno+1 WHERE r.tno = 1256;
SELECT * FROM reservation;

SELECT DISTINCT p.pid FROM passengers p;
SELECT p.p_name FROM passengers p WHERE p.gender = 'M';
SELECT r.tno, p.p_name FROM reservation r , passengers p WHERE p.pid = r.pid;
SELECT r.tno FROM reservation r, passengers p WHERE p.p_name LIKE 'R%h' AND p.pid = r.pid;
SELECT p.p_name FROM passengers p WHERE  p.age >= 30 AND  p.age <= 45;
SELECT p.p_name FROM passengers p WHERE p.p_name LIKE 'A%';
SELECT p.p_name FROM passengers p ORDER BY p.p_name ASC;