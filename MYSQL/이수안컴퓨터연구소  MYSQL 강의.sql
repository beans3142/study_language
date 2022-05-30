SHOW DATABASES;
USE world;
SHOW TABLES;
SHOW TABLE STATUS;
DESC country;
SELECT * FROM city;
SELECT Name,Population FROM city;
SELECT Name,Population FROM city WHERE Population>5000000;
SELECT Name,Population FROM city WHERE Countrycode='USA';
SELECT Name,Population FROM city WHERE Population BETWEEN 127800 AND 130000;
SELECT Population FROM city WHERE Name IN('seoul','pusan');
SELECT * FROM city WHERE Name LIKE '%city';
SELECT * FROM city WHERE CountryCode IN ('KOR') AND Name LIKE '%san';
SELECT * FROM city WHERE District LIKE 'Kyong%';
SELECT * FROM city WHERE Name LIKE '%won%';
SELECT * FROM city WHERE District = (SELECT District FROM city WHERE NAME='suwon');
SELECT * FROM city WHERE Population > ANY (SELECT Population FROM city WHERE District='Kyonggi');
SELECT * FROM city WHERE Population > ALL (SELECT Population FROM city WHERE District='Kyonggi');
SELECT * FROM city WHERE District = 'Kyonggi' ORDER BY Population ASC;
SELECT * FROM city WHERE District = 'Kyonggi' ORDER BY NAME ASC;
SELECT DISTINCT Name,Countrycode FROM city;
SELECT Name FROM city ORDER BY population DESC LIMIT 15;
SELECT Name AS "CN" FROM city GROUP BY CountryCode;
SELECT CountryCode, SUM(Population) FROM city GROUP BY CountryCode;
SELECT CountryCode, SUM(Population) AS "COUNTRY POPULATION" FROM city GROUP BY CountryCode;
SELECT COUNT(*) FROM city;
SELECT CountryCode,SUM(Population) AS "TOTAL POPULATION" FROM city GROUP BY CountryCode HAVING SUM(Population)>25000000;
SELECT CountryCode,Name,SUM(Population) FROM city GROUP BY CountryCode,Name WITH ROLLUP;
SELECT CountryCode,Name,SUM(Population) FROM city GROUP BY CountryCode,Name WITH ROLLUP HAVING SUM(Population)>1000000;
SELECT * FROM city JOIN country;
SELECT * FROM city JOIN country ON city.Countrycode=country.Code;
SELECT * FROM city JOIN country ON city.Countrycode=country.Code JOIN countrylanguage ON city.CountryCode = countrylanguage.Countrycode;
SELECT LENGTH('123456');
SELECT CONCAT('A','B','C',NULL);
SELECT LOCATE('a','b');
SELECT LEFT('abc',2);
SELECT RIGHT('abc','2');
SELECT LOWER('ABC');
SELECT UPPER('abc');
SELECT UPPER('ASDAsdakdwka');
SELECT REPLACE('PYTHON3','THON','PY');
SELECT TRIM(' HELLO~ ');
SELECT TRIM('HEL LO');
SELECT FORMAT(100000000.11111,3);
SELECT FORMAT(10000000.3456,3);
SELECT CEIL(1.7), FLOOR(1.7), ROUND(1.7);
SELECT SQRT(1.2),EXP(9),POW(2,3);
SELECT SIN(pi()/2);
SELECT RAND();
SELECT NOW(),CURDATE(),CURTIME();
SELECT DATE(13);
SELECT YEAR(12);
SELECT DATE(NOW());
SELECT TIME(NOW());
SELECT MONTHNAME(NOW());
SELECT DAYNAME(NOW());
SELECT DAYOFMONTH(NOW());
CREATE DATABASE beans3142;
USE beans3142;
SHOW TABLES;
CREATE TABLE city2 AS SELECT * FROM city;
CREATE TABLE city2;
SELECT Name,Population FROM city2;
USE beans3142;
CREATE INDEX colIdx ON personinfo(col1);
CREATE INDEX colIdx2 ON personinfo(Name);
SHOW INDEX FROM personinfo;

ALTER TABLE personinfo
ADD FULLTEXT colIdx3(Name);


CREATE VIEW cityview AS SELECT Name,countryCode,Population FROM city;
SELECT * FROM cityview;

USE WORLD;
CREATE VIEW allview AS SELECT city.Name, country.SurfaceArea, city.Population, countrylanguage.language 
FROM city
JOIN country ON city.Countrycode=country.Code 
JOIN countrylanguage ON city.CountryCode = countrylanguage.Countrycode 
WHERE city.COUNTRYCODE='KOR';

DROP view allview;

SELECT * FROM allview;

USE beans3142;
SHOW TABLES;
SELECT * FROM PERSONINFO;
INSERT INTO PersonInfo VALUE(1,'CHOOYOON',21,175,100);
INSERT INTO PersonInfo VALUE(2,'DAEHOON',21,173,90);
INSERT INTO PersonInfo VALUE(3,'HANJOHOON',23,150,31859);
UPDATE personInfo SET weight=80 WHERE id=3;
TRUNCATE TABLE personInfo;