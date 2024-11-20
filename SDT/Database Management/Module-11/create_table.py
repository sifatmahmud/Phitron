import pymysql.cursors

db_name = "python_test_db"

mydbconnection = pymysql.connect(
    host = "localhost",
    user = "root",
    password = "password",
    database = db_name
)

mycursor = mydbconnection.cursor()

sqlquery = """
CREATE TABLE Student(
Roll varchar(4),
Name varchar(50)
)
"""

mycursor.execute(sqlquery)
print("Create table succesfully")