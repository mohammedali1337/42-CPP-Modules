#include <iostream>
#include <fstream>
#include <string>

std::string replace_str(std::string line, const std::string &old_s, const std::string &new_s)
{
    size_t pos = 0;

    if (old_s.empty())
        return line;

    while ((pos = line.find(old_s, pos)) != std::string::npos)
    {
        line.erase(pos, old_s.length());
        line.insert(pos, new_s);
        pos += new_s.length(); // نمشي للقدّام باش ما ندخلش فـ لوب لا نهائي
    }
    return line;
}

int main(int c, char **v)
{
    if (c != 4)
    {
        std::cerr << "Usage: " << v[0] << " <filename> <old_string> <new_string>\n";
        return 1;
    }

    std::ifstream infile(v[1]);
    if (!infile.is_open())
    {
        std::cerr << "Error: cannot open input file\n";
        return 1;
    }

    std::string out_filename = std::string(v[1]) + ".replace";
    std::ofstream outfile(out_filename);
    if (!outfile.is_open())
    {
        std::cerr << "Error: cannot open output file\n";
        return 1;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        std::string new_line = replace_str(line, v[2], v[3]);
        outfile << new_line << "\n";
    }

    return 0;
}
