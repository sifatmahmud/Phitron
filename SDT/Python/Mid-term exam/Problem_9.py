class Library:
    book_list = []


    @classmethod
    def entry_book(cls, book):
        cls.book_list.append(book)


class Book(Library):

    def __init__(self, book_id, title, author, availability = True):
        self.__book_id = book_id
        self.__title = title
        self.__author = author
        self.__availability = availability

        book_details = {"id" : self.__book_id, "title" : self.__title, "author" : self.__author, "availability" : self.__availability}

        self.entry_book(book_details)

    @classmethod
    def borrow_book(cls, book_id, book_title):
        if len(Book.book_list) == 0:
            print("There is no book!!, So you can't borrow\n")
        else:
            result = 0
            borrowed_book_title = ""
            borrowed_book_id = 0

            for book in Book.book_list:
                if book['id'] == book_id and book['title'] == book_title:
                    if book['availability']==True:
                        book['availability'] = False
                        borrowed_book_title = book_title
                        borrowed_book_id = book_id
                        result = 1
                        break
                    else:
                        result = 2
                        break

            if result == 1:
                print(f'Sucessfully borrowed book id : {borrowed_book_id}, name : {borrowed_book_title}')
            elif result == 2:
                print('Book is already borrowed')
            else:
                print(f'Book not available with (id : {book_id} and named : {book_title})')

    @classmethod
    def return_book(cls,book_id, book_title):
        return_result = 0
        borrowed_book_title = ""
        borrowed_book_id = 0
        for book in Book.book_list:
            if book['id'] == book_id and book['title'] == book_title:
                if book['availability'] == False:
                    book['availability'] = True
                    borrowed_book_title = book_title
                    borrowed_book_id = book_id
                    return_result = 1
                else:
                    return_result = 2
            
        if return_result == 1:
            print(f'Sucessfully Returned book id : {borrowed_book_id}, name : {borrowed_book_title}')
        elif return_result == 2:
            print('Book is not borrowed yet !!')
        else:
            print(f'Book not available with (id: {book_id} and named : {book_title})')
    
    @classmethod
    def view_book_info(cls):
        if len(Book.book_list) == 0:
            print("There is no book !!\n")
        else :
            for book in Book.book_list:
                print(f"id: {book['id']}, title: {book['title']}, author: {book['author']}, availability: {book['availability']}")
            print('\n')




# -------------------- main area -----------------------
book1 = Book(101, 'physics', 'Albert')
book2 = Book(102, 'biology', 'Newton')


while(True):
    print("1. View All Books \n2. Borrow Book \n3. Return Book \n4. Exit.")
    inpu = int(input("Enter your choice: "))
    if inpu==1:
        Book.view_book_info()
    elif inpu==2:
        book_id = int(input("Enter Book id: "))
        book_title = input("Enter Book Title: ")
        Book.borrow_book(book_id, book_title)
    elif inpu==3:
        book_id = int(input("Enter Book id: "))
        book_title = input("Enter Book Title: ")
        Book.return_book(book_id, book_title)
    elif inpu==4:
        break


