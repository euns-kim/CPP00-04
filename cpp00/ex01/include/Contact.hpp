/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:49 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/07 16:27:32 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

enum e_Info {
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET,
	END
};

class	Contact {

	public:
		Contact(void);
		~Contact(void);
		void	setContact(e_Info info, const std::string& str);
		void	printContactAbbrev() const;
		void	printContactFull() const;

	private:
		std::string	Contact::returnAbbreviatedStr(std::string str) const;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

};

#endif
