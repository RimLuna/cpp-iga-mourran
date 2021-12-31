#include <iostream>

#include <iostream>
#include <iomanip>
#include <fstream>

void	_replace(std::string *line, std::string to, std::string with)
{
	size_t	start;

	while ((start = (*line).find(to)) != std::string::npos)
	{
		(*line).erase(start, to.length());
		(*line).insert(start, with);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Usage: ./sed file1 str1 str2" << std::endl;
		return (-1);
	}
	std::string	infile = argv[1];
	std::ifstream ifs(infile);

	if (!ifs.is_open())
	{
		std::cout << "Error: can\'t open intput file" << std::endl;
		return (-1);
	}
	std::string	outfile = (std::string)argv[1] + ".replace";
	std::ofstream	ofs(outfile);
	if (!ofs.is_open())
	{
		std::cout << "Error: can\'t open output file" << std::endl;
		return (-1);
	}
	std::string	read;
	std::string	to = argv[2];
	std::string	with = argv[3];
	while (getline(ifs, read))
	{
		_replace(&read, to, with);
		if (!std::cin.eof())
			ofs << read << std::endl;
	}
	ofs.close();
	ifs.close();
}
