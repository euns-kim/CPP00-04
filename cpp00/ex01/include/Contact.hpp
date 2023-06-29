/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:49 by eunskim           #+#    #+#             */
/*   Updated: 2023/06/29 21:46:34 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>



class	Contact {

	public:
		enum Info {
			FIRST_NAME,
			LAST_NAME,
			NICKNAME,
			PHONE_NUMBER,
			DARKEST_SECRET
		};
		Contact(void);
		~Contact(void);
		void		Contact::setContact(enum Info info, const std::string& str);
		std::string	Contact::getContact(enum Info info);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

};

#endif
