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
insert into student(Roll, Name)
values('101', 'Sifat Mahmud')
"""

mycursor.execute(sqlquery)
mydbconnection.commit()
print("insert table succesfully")