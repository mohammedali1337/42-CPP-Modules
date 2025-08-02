#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string line, std::string old_s, std::string new_s)
{
    size_t  pos;

    if (old_s.empty())
        return line;
    while ((pos = line.find(old_s, pos)) != std::string::npos)
    {
        line.erase(pos, old_s.length());
        line.insert(pos, new_s);
        pos += new_s.length();
    }
    return line;
}

int main(int c, char **v)
{
    std::ifstream    infile;
    std::ofstream   outfile;
    std::string     out;
    std::string     line;
    std::string     replace_str;

    if (c != 4)
        return 1;
        
    infile.open(v[1]);
    out = out + v[1] + ".replace";
    outfile.open(out);
    if (!outfile.is_open() || !infile.is_open())
    {
        std::cout << "cant open file \n";
        infile.close();
        outfile.close();
        return 1;
    }
    while (std::getline(infile, line))
    {
        replace_str = replace(line, v[2], v[3]);
        std::cout << replace_str << std::endl;
        outfile << replace_str << std::endl;
    }
    return 0;
}