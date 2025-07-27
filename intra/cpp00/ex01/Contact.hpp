#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <string>

class   Contact
{
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;

	public:
		void			setFirstName(std::string fn);
		void            setlastName(std::string ln);
		void            setnickname(std::string nn);
		void            setphoneNumber(std::string ph);
		void            setdarkestSecret(std::string ds);
		std::string    	getFirstName() const;
		std::string    	getlastName() const;
		std::string    	getnickname() const;
		std::string    	getphoneNumber() const;
		std::string    	getdarkestSecret() const;

};
#endif