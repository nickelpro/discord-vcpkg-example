#include <llhttp.h>

int main() {
  llhttp_t http;
  llhttp_settings_t settings {};
  llhttp_init(&http, HTTP_REQUEST, &settings);

  return 0;
}
