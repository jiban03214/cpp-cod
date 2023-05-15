mysql> create database jiban;
Query OK, 1 row affected (0.01 sec)
mysql> use jiban;
Database changed
mysql> create table Department(Depid varchar(10),Dese varchar(20),HoD varchar(20),Location varchar(30));
Query OK, 0 rows affected (0.04 sec)
mysql> describe Department;
+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| Depid    | varchar(10) | YES  |     | NULL    |       |
| Dese     | varchar(20) | YES  |     | NULL    |       |
| HoD      | varchar(20) | YES  |     | NULL    |       |
| Location | varchar(30) | YES  |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+
4 rows in set (0.04 sec)
mysql> create table Employee(Eid varchar(20) primary key,Name varchar(20),Depid varchar(10),Qualification varchar(20),Age int check(Age>18 and Age<60));
Query OK, 0 rows affected (0.02 sec)
mysql> describe Salary;
+--------------+---------------+------+-----+---------+-------+
| Field        | Type          | Null | Key | Default | Extra |
+--------------+---------------+------+-----+---------+-------+
| Eid          | varchar(20)   | YES  |     | NULL    |       |
| Basic        | int           | YES  |     | NULL    |       |
| HRA          | decimal(10,2) | YES  |     | NULL    |       |
| Total_Salary | decimal(10,2) | YES  |     | NULL    |       |
+--------------+---------------+------+-----+---------+-------+
4 rows in set (0.00 sec)
mysql> create table Salary (Eid varchar(20),Basic int(10),HRA decimal(10,2),Total_Salary decimal(10,2));
Query OK, 0 rows affected, 1 warning (0.01 sec)

mysql> describe Employee;
+---------------+-------------+------+-----+---------+-------+
| Field         | Type        | Null | Key | Default | Extra |
+---------------+-------------+------+-----+---------+-------+
| Eid           | varchar(20) | NO   | PRI | NULL    |       |
| Name          | varchar(20) | YES  |     | NULL    |       |
| Depid         | varchar(10) | YES  |     | NULL    |       |
| Qualification | varchar(20) | YES  |     | NULL    |       |
| Age           | int         | YES  |     | NULL    |       |
+---------------+-------------+------+-----+---------+-------+
5 rows in set (0.00 sec)
mysql> alter table Department add Foreign key (HoD)references Salary(Eid);
Query OK, 0 rows affected (0.06 sec)
Records: 0  Duplicates: 0  Warnings: 0
mysql> alter table Employee add Foreign key (Depid)references Department(Depid);
Query OK, 0 rows affected (0.05 sec)
Records: 0  Duplicates: 0  Warnings: 0
mysql> describe Department;
+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| Depid    | varchar(10) | NO   | PRI | NULL    |       |
| Dese     | varchar(20) | YES  |     | NULL    |       |
| HoD      | varchar(20) | YES  | MUL | NULL    |       |
| Location | varchar(30) | YES  |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> describe Employee;
+---------------+-------------+------+-----+---------+-------+
| Field         | Type        | Null | Key | Default | Extra |
+---------------+-------------+------+-----+---------+-------+
| Eid           | varchar(20) | NO   | PRI | NULL    |       |
| Name          | varchar(20) | YES  |     | NULL    |       |
| Depid         | varchar(10) | YES  | MUL | NULL    |       |
| Qualification | varchar(20) | YES  |     | NULL    |       |
| Age           | int         | YES  |     | NULL    |       |
+---------------+-------------+------+-----+---------+-------+
5 rows in set (0.00 sec)

mysql> describe Salary;
+--------------+---------------+------+-----+---------+-------+
| Field        | Type          | Null | Key | Default | Extra |
+--------------+---------------+------+-----+---------+-------+
| Eid          | varchar(20)   | NO   | PRI | NULL    |       |
| Basic        | int           | YES  |     | NULL    |       |
| HRA          | decimal(10,2) | YES  |     | NULL    |       |
| Total_Salary | decimal(10,2) | YES  |     | NULL    |       |
+--------------+---------------+------+-----+---------+-------+
4 rows in set (0.00 sec)
mysql> insert into Employee(Eid,Name,Depid,Qualification,Age) values
  ->('JM001','ABC',NULL,'MCA','24'),
  -> ('JM002','BDF',NULL,'B.TECH','26'),
  -> ('JM003','NMJ',NULL,'M.TECH','27');
Query OK, 3 rows affected (0.03 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> select * from Employee;
+-------+------+-------+---------------+------+
| Eid   | Name | Depid | Qualification | Age  |
+-------+------+-------+---------------+------+
| JM001 | ABC  | NULL  | MCA           |   24 |
| JM002 | BDF  | NULL  | B.TECH        |   26 |
| JM003 | NMJ  | NULL  | M.TECH        |   27 |
+-------+------+-------+---------------+------+
3 rows in set (0.00 sec)
mysql> INSERT INTO Salary values
    -> ('JM001',NULL,NULL,'24000'),
    -> ('JM002',NULL,NULL,'25000'),
    -> ('JM003',NULL,NULL,'27000');
Query OK, 3 rows affected (0.04 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> SELECT*FROM Salary;
+-------+-------+------+--------------+
| Eid   | Basic | HRA  | Total_Salary |
+-------+-------+------+--------------+
| JM001 |  NULL | NULL |     24000.00 |
| JM002 |  NULL | NULL |     25000.00 |
| JM003 |  NULL | NULL |     27000.00 |
+-------+-------+------+--------------+
3 rows in set (0.00 sec)

mysql> insert into  Department(Depid,Dese,Hod,Location)values 
  ->('JK001','MARKATING','JM001','CHHATNA'), 
  ->('JK002','HR','JM002','BANKURA'), 
  ->('JK003','LOGISIC','JM003','HOWRAH');
Query OK, 3 rows affected (0.05 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> SELECT*FROM Department;
+-------+-----------+-------+----------+
| Depid | Dese      | HoD   | Location |
+-------+-----------+-------+----------+
| JK001 | MARKATING | JM001 | CHHATNA  |
| JK002 | HR        | JM002 | BANKURA  |
| JK003 | LOGISIC   | JM003 | HOWRAH   |
+-------+-----------+-------+----------+
3 rows in set (0.00 sec)




