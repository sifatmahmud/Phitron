
CREATE TABLE CourseEnroll(
Roll VARCHAR(5),
CourseName VARCHAR(5),
FOREIGN KEY (Roll) REFERENCES Student(Roll) ON DELETE CASCADE,
FOREIGN KEY (CourseName) REFERENCES Course(CourseName) ON DELETE CASCADE
);
------------------------------------

CREATE TABLE CourseEnroll(
Roll VARCHAR(5),
CourseName VARCHAR(5),
FOREIGN KEY (Roll) REFERENCES Student(Roll) ON DELETE SET NULL,
FOREIGN KEY (CourseName) REFERENCES Course(CourseName) ON DELETE SET NULL
);