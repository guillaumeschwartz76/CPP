/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gschwart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:44:10 by gschwart          #+#    #+#             */
/*   Updated: 2024/09/02 17:44:13 by gschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
    Cat(void);
    Cat(std::string const & type);
    Cat(Cat const & src);
    ~Cat(void);

    Cat &    operator=(Cat const & rhs);

    void    makeSound(void) const;

private:
    Brain   *_Brain;
};

#endif
