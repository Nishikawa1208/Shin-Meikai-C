/* Hello World - CGI Version*/
#include <stdio.h>
int main(void) {
    // Output the HTTP header
    printf("Content-Type: text/html\n\n");

    // Output the HTML content
    printf("<html>\n");
    printf("<head><title>Hello</title></head>\n");
    printf("<body>\n");
    printf("Hello World\n");
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
