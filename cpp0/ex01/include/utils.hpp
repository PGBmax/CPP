#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
# include "phonebook.hpp"
# include "contact.hpp"

// Type utils
typedef std::string str;
typedef unsigned int uint;

# define cref(type) const type &
# define ref(type) type &

// Print Utils
# define AND <<
# define GET >>
# define INPUT std::cin GET
# define PRINT std::cout AND
# define ERROR std::cerr AND
# define ENDL AND std::endl
# define TAB "\t"
# define NEWL PRINT "" ENDL
# define CENDL AND CLR ENDL

# define CLR "\033[0m"
# define BOLD "\033[1m"
# define ITAL "\033[3m"
# define UNDL "\033[4m"
# define DUNDL "\033[21m"
# define STRK "\033[9m"
# define BLNK "\033[5m"

# define BLK "\033[0;30m"
# define RED "\033[0;31m"
# define GRN "\033[0;32m"
# define YLW "\033[0;33m"
# define BLU "\033[0;34m"
# define PRP "\033[0;35m"
# define CYN "\033[0;36m"
# define WHT "\033[0;37m"

# define RGB(r, g, b) "\033[38;2;" #r ";" #g ";" #b "m"

#endif
