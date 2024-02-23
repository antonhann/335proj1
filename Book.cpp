#include "Book.hpp"

    // write and document all methods in this file.
    //default constructor
    Book::Book()
    {

    }
    //deconstructor
    Book::~Book()
    {

    }
    /**
     * @brief Construct a new Book using another book object as parameter
     * 
     * @param: Book object
     */
    Book::Book(const Book& rhs)
    {
        title_ = rhs.title_;
        author_ = rhs.author_;
        ISBN_ = rhs.ISBN_;
        icon_ = rhs.icon_;
        price_ = rhs.price_;
        keywords_ = rhs.keywords_;
        blurb_ = rhs.blurb_;
    }
    /**
     * @brief 
     * 
     * @param: Book Object
     * @return reference of the assigned book
     */
    Book& Book::operator=(const Book& rhs)
    {
        title_ = rhs.title_;
        author_ = rhs.author_;
        ISBN_ = rhs.ISBN_;
        icon_ = rhs.icon_;
        price_ = rhs.price_;
        keywords_ = rhs.keywords_;
        blurb_ = rhs.blurb_;
        return *this;
    }
    /**
     * @brief Construct a new Book:: using Rvalue book object
     * 
     * @param: Rvalue of a book object
     */
    Book::Book(Book&& rhs)
    {
        title_ = rhs.title_;
        author_ = rhs.author_;
        ISBN_ = rhs.ISBN_;
        icon_ = rhs.icon_;
        price_ = rhs.price_;
        keywords_ = rhs.keywords_;
        blurb_ = rhs.blurb_;
    }
    /**
     * @brief move constructor: Book object from another Rvalue Book object
     * 
     * @param rhs 
     * @return Book& 
     */
    Book& Book::operator=(Book&& rhs)
    {
        title_ = rhs.title_;
        author_ = rhs.author_;
        ISBN_ = rhs.ISBN_;
        icon_ = rhs.icon_;
        price_ = rhs.price_;
        keywords_ = rhs.keywords_;
        blurb_ = rhs.blurb_;
        return *this;
    }
    /**
     * @brief return the book's title
     * 
     * @return const std::string& 
     */
    const std::string& Book::getTitle() const
    {
        return title_;
    }
    /**
     * @brief set the title_ to title 
     * 
     * @param: reference to a string 
     */
    void Book::setTitle(const std::string& title)
    {
        title_ = title;
    }
    /**
     * @brief return the book's author
     * 
     * @return const std::string& 
     */
    const std::string& Book::getAuthor() const
    {
        return author_;
    }
    /**
     * @brief set author_ to incoming parameter author
     * 
     * @param author 
     */
    void Book::setAuthor(const std::string& author)
    {
        author_ = author;
    }
    /**
     * @brief returns the book's IBSN
     * 
     * @return long long int 
     */
    long long int Book::getISBN() const
    {
        return ISBN_;
    }
    /**
     * @brief setting parameter isbn to isbn_
     * 
     * @param ISBN 
     */
    void Book::setISBN(long long int ISBN)
    {
        ISBN_ = ISBN;
    }
    /**
     * @brief return the book icon
     * 
     * @return const int* 
     */
    const int* Book::getIcon() const
    {
        return icon_;
    }
    /**
     * @brief icon equal to parameter icon
     * 
     * @param icon 
     */
    void Book::setIcon(int* icon)
    {
        icon_ = icon;
    }
    /**
     * @brief returns the books price
     * 
     * @return float 
     */
    float Book::getPrice() const
    {
        return price_;
    }
    /**
     * @brief sets the books price to the parameter price
     * 
     * @param price 
     */
    void Book::setPrice(float price)
    {
        price_ = price;
    }

    const std::vector<std::string>& Book::getKeywords() const
    {
        return keywords_;
    }

    void Book::setKeywords(const std::vector<std::string>& keywords)
    {
        keywords_ = keywords;
    }

    const std::string& Book::getBlurb() const
    {
        return blurb_;
    }

    void Book::setBlurb(const std::string& blurb)
    {
        blurb_ = blurb;
    }

    void Book::print() const
    {
        std::cout << "Title: " << title_ << std::endl;
        std::cout << "Author: " << author_ << std::endl;
        std::cout << "IBSN: " << ISBN_ << std::endl;
        std::cout << "Icon: " << icon_ << std::endl;
        std::cout << "Price: " << price_ << std::endl;
        std::cout << "Keywords: ";
        for(int i = 0; i < keywords_.size(); i++){
            if(i != keywords_.size() - 1){
                std::cout << keywords_[i] << ", ";
            }
            else{
                std::cout << keywords_[i];
            }
        }
        std::cout << "Blurb: " << blurb_ << std::endl;
    }