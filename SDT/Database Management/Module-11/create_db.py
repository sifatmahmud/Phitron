import pymysql.cursors

mydbconnection = pymysql.connect(
    host = "localhost",
    user = "root",
    password = "password"
)

print(mydbconnection)

db_name = "python_test_db"

mycursor = mydbconnection.cursor()

sqlquery = "CREATE DATABASE " + db_name

mycursor.execute(sqlquery)


