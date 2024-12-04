/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:27:07 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/04 12:39:42 by yuriaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *argv[]) {
    if (ac != 4) {
        std::cout << "Invalid arguments" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string firstString = argv[2];
    std::string secondString = argv[3];
    std::string newFilename = filename + ".replace";

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error opening the file." << std::endl;
        return (1);
    }

    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile) {
        std::cerr << "Error creating the output file." << std::endl;
        return (1);
    }
    
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;


        while ((pos = line.find(firstString, pos)) != std::string::npos) {
            line = line.substr(0, pos) + secondString + line.substr(pos + firstString.length());
            pos += secondString.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File successfully processed and saved as " << newFilename << std::endl;
    return (0);
}
