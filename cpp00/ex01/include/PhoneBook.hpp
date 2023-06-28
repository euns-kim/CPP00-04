/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:54 by eunskim           #+#    #+#             */
/*   Updated: 2023/06/28 19:17:58 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

	private:
		Contact	contacts[8];

};

#endif

// array of contacts[8];

// dynamic allocation is forbidden.

// anything that will always be used inside a class is private,
// and that anything that can be used outside a class is public.

// On program start-up, the phonebook is empty
// and the user is prompted to enter one of three commands.

// ADD, SEARCH, EXIT
