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
update student
set name = 'SM'
where name = 'Sifat Mahmud'
"""

mycursor.execute(sqlquery)
mydbconnection.commit()
print("update table succesfully")