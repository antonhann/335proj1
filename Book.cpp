#include "Book.hpp"

    // write and document all methods in this file.
    Book::Book()
    {

    }

    Book::~Book()
    {

    }

    Book::Book(const Book& rhs)
    {

    }

    Book& Book::operator=(const Book& rhs)
    {

    }

    Book::Book(Book&& rhs)
    {

    }

    Book& Book::operator=(Book&& rhs)
    {
        
    }

    const std::string& Book::getTitle() const
    {
        return title_;
    }

    void Book::setTitle(const std::string& title)
    {
        title_ = title;
    }

    const std::string& Book::getAuthor() const
    {
        return author_;
    }

    void Book::setAuthor(const std::string& author)
    {
        author_ = author;
    }

    long long int Book::getISBN() const
    {
        return ISBN_;
    }

    void Book::setISBN(long long int ISBN)
    {
        ISBN_ = ISBN;
    }

    const int* Book::getIcon() const
    {
        return icon_;
    }

    void Book::setIcon(int* icon)
    {
        icon_ = icon;
    }

    float Book::getPrice() const
    {
        return price_;
    }

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