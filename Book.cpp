#include "Book.hpp"
#include <cmath>
    // write and document all methods in this file.
    //default constructor
    Book::Book()
    {

    }
    //deconstructor
    Book::~Book()
    {
        delete []icon_;
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
     * @brief assignment operator of book object that assigns the book to rhs
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
        title_ = std::move(rhs.title_);
        author_ = std::move(rhs.author_);
        ISBN_ = std::move(rhs.ISBN_);
        icon_ = std::move(rhs.icon_);
        price_ = std::move(rhs.price_);
        keywords_ = std::move(rhs.keywords_);
        blurb_ = std::move(rhs.blurb_);
    }
    /**
     * @brief move constructor: Book object from another Rvalue Book object
     * 
     * @param rhs 
     * @return Book& 
     */
    Book& Book::operator=(Book&& rhs)
    {
        title_ = std::move(rhs.title_);
        author_ = std::move(rhs.author_);
        ISBN_ = std::move(rhs.ISBN_);
        icon_ = std::move(rhs.icon_);
        price_ = std::move(rhs.price_);
        keywords_ = std::move(rhs.keywords_);
        blurb_ = std::move(rhs.blurb_);
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
    /**
     * @return: return the vector of keywords of the book
    */
    const std::vector<std::string>& Book::getKeywords() const
    {
        return keywords_;
    }
    /**
     * @brief sets the incoming keywords vector to the book's vector
     * @param vector of strings
    */
    void Book::setKeywords(const std::vector<std::string>& keywords)
    {
        keywords_ = keywords;
    }
    /**
     * @brief returns the blurb of the book
     * @return string
    */
    const std::string& Book::getBlurb() const
    {
        return blurb_;
    }
    /**
     * @brief sets the incoming blurb to the book's blurb
     * @param string
    */
    void Book::setBlurb(const std::string& blurb)
    {
        blurb_ = blurb;
    }
    /**
     * @brief prints the book in the proper formatting
    */
    void Book::print() const
    {
        std::cout << "Title: " << title_ << std::endl;
        std::cout << "Author: " << author_ << std::endl;
        std::cout << "IBSN: " << ISBN_ << std::endl;
        std::cout << "Icon: ";
        for(int i = 0; i < 80; i++){
            if(i != 79){
                std::cout << *(icon_ + i) << " ";
            }
            else{
                std::cout << *(icon_ + i) << std::endl;
            }
        }
        std::cout << "Price: $" << (round((price_) * 100))/100 << std::endl;
        std::cout << "Keywords: ";
        for(int i = 0; i < keywords_.size(); i++){
            if(i != keywords_.size() - 1){
                std::cout << keywords_[i] << ", ";
            }
            else{
                std::cout << keywords_[i] << std::endl;
            }
        }
        std::cout << "Blurb: " << blurb_ << std::endl;
    }