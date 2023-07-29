# curl
Use libcurl in C without having to find the library.

I was trying to connect to the internet with <libcurl.h> in C but for some reason my GNU compiler doesn't has and doesn't wants to download libcurl. So I discovered that Windows and Linux have curl as a bash command. 
This code which I have written opens a shell and runs the curl command. The provided output is then stored in a file named "web.html". Because it is stored with .html you can directly double click and open the website.
