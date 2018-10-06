#include <iostream>
#include <string>
#include <string.h>
using namespace std;

// string PASS = "super_secret_encrypted_password";
// string FLAG = "UiTHack18{library_functions_can_be_inspected_easily}";
// const char *flag_stuff = FLAG.c_str();
// const char *pass_stuff = PASS.c_str();
uint8_t xor_key = 0xc8;
#define _PASS_BUFFER_SIZE 52
const uint8_t pass_encrypted[52] = {
  0x9d, 0xa1, 0x9c, 0x80, 0xa9, 0xab, 0xa3, 0xf9, 0xf0, 0xb3,
  0xa4, 0xa1, 0xaa, 0xba, 0xa9, 0xba, 0xb1, 0x97, 0xae, 0xbd,
  0xa6, 0xab, 0xbc, 0xa1, 0xa7, 0xa6, 0xbb, 0x97, 0xab, 0xa9,
  0xa6, 0x97, 0xaa, 0xad, 0x97, 0xa1, 0xa6, 0xbb, 0xb8, 0xad,
  0xab, 0xbc, 0xad, 0xac, 0x97, 0xad, 0xa9, 0xbb, 0xa1, 0xa4,
  0xb1, 0xb5
};
#define _FLAG_BUFFER_SIZE 31
const uint8_t flag_encrypted[31] = {
  0xbb, 0xbd, 0xb8, 0xad, 0xba, 0x97, 0xbb, 0xad, 0xab, 0xba,
  0xad, 0xbc, 0x97, 0xad, 0xa6, 0xab, 0xba, 0xb1, 0xb8, 0xbc,
  0xad, 0xac, 0x97, 0xb8, 0xa9, 0xbb, 0xbb, 0xbf, 0xa7, 0xba,
  0xac
};


void decrypt_and_print_flag(void)
{
        for (int i = 0; i < _PASS_BUFFER_SIZE; i++) {
                cout << (char)(pass_encrypted[i]^xor_key);
        }
}

bool decrypt_and_compare_pass(string input)
{
        char decrypted[32] = { 0 };
        for (int i = 0; i < _FLAG_BUFFER_SIZE; i++) {
                decrypted[i] = (char)(flag_encrypted[i]^xor_key);
        }

        return strcmp(decrypted, input.c_str()) == 0 ? true : false;
}


int main(void)
{
        string input;

        cout << "Passord: ";
        cin >> input;
        if (decrypt_and_compare_pass(input)) {
                decrypt_and_print_flag();
        } else {
                cout << "Feil passord";
        }
        return 0;
}
