# Tubes-OOP Milestone 1
Header utama : Farm.h

# Generate Doxygen Diagram
## Install Doxygen + Graphviz
```
sudo apt-get install doxygen
sudo apt-get install graphviz
```
## Configure Doxyfile (Doxygen configuration file)
Run this command to auto-generate Doxyfile file:
```
doxygen -g
```

Change the following option in Doxyfile:
```
EXTRACT_ALL            = YES
UML_LOOK               = YES
EXTRACT_PRIVATE        = YES
```

## Create Diagram
Execute: 
```
doxygen
```

## Open the HTML generated files in browser
Open index.html in html folder
