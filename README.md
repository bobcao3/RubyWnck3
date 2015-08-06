# RubyWnck3
Ruby bindings for Window Navigator Construction Kit library
Suited for gtk3 ( ruby gem )

# How to use
1. Clone the sources
2. `ruby extconf.rb`
3. `make`
4. Copy the Wnck3.so or `sudo make install`
5. Require the wnck3 before your ruby files
   `require 'Wnck3'` or `require 'Wnck3.so'`

# Dependencies
gtk3 (gem)
libwnck-3.0 (binary)
