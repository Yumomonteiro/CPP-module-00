/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:27:24 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/29 18:25:18 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <iomanip>

class   phonebook{
        private:
                int     index;
                contact contacts[8];
        public:
                phonebook();
                ~phonebook();
                void    add_contact(void);
                void    search_contact(void);
};












#endif