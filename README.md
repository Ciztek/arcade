# Project Documentation with Doxygen

This README provides instructions on how to generate and view the project documentation using Doxygen.

## Prerequisites

Ensure that you have Doxygen installed on your system. If not, you can install it using the following command on a Linux machine:

```bash
sudo apt-get install doxygen
```

## Generating Documentation

To generate the documentation, navigate to the directory containing the Doxyfile and run the following command:

```bash
doxygen Doxyfile
```

This will generate the documentation in the specified output directory (usually html and/or latex).

## Viewing Documentation

The main page of the documentation is usually index.html in the html directory. To view it, open it with a web browser. If you're using a Linux machine, you can use the following command:

```bash
xdg-open docs/html/index.html
```

This will open the main page of the documentation in your default web browser.
