/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:54 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/07 16:37:23 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
		int		addContact();
		int		searchContact() const;

	private:
		void						displayPhonebook() const;
		static const unsigned int	_contactMax = 8;
		Contact						_contacts[_contactMax];
		unsigned int				contactNext;
		unsigned int				contactNum;

};

#endif
