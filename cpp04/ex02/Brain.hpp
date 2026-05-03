/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:11:37 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 20:33:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain {

private:
	
	std::string	_ideas[100];
	
public:

				Brain();
				Brain( Brain const & src );
				~Brain( void );

	Brain &		operator=( Brain const & other );

	std::string	getIdea( int i ) const;
	void		setIdea( std::string idea, int i );
};
