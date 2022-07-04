#pragma once

#include "Animal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(const Brain& copy);
        ~Brain(void);

		Brain& operator=(const Brain& af);
		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);

};
