#!/bin/bash

# Update and upgrade the package lists
echo "Updating and upgrading your system..."
sudo apt update
sudo apt upgrade -y

# Install essential build tools
echo "Installing build-essential, git, and gdb..."
sudo apt install -y build-essential git gdb -y

# Install the GCC compiler and GDB debugger
sudo apt install -y gcc gdb

# Verify installation
echo "Verifying the installations..."
gcc --version
make --version
git --version
gdb --version

# Informational message after installation
echo "C development environment setup complete!"
echo "To start coding, consider using a text editor use vim or install VS Code manually."
