#include <iostream>
#include <memory.h>
#include <dlfcn.h>

#include "../inc/def.h"

using namespace std;
int main()
{
    /**
     * @brief  test cin.read for specific character,
     * @result passed with '\n' '\0'
     * @other  vim will add a '0x0A'(LF) at the end of file.
     *
    unsigned long ulNum = 0;
    char *pcBuf = new char[512+1];
    memset(pcBuf, 0, 512+1);

    cin.read(pcBuf, 512);
    ulNum = cin.gcount();
    cout << ulNum << endl;
    for(int i = 0; i < 512; i++)
    {
        cout << hex << "0x" << (int)pcBuf[i] << " ";
    }
    cout << endl;
    */

    /*
     * @brief  test for load a variable parameters function from a
     *         shared library and execute.
     * @result passed
     * @other  the first parameter of PF_ADD is indented to be number
     *         of parameters.
     *
    void *pvHandle = nullptr;
    typedef ULONG (*PF_ADD)(ULONG, ...);

    pvHandle = dlopen("libCLibTest.so", RTLD_NOW);
    if(nullptr == pvHandle)
    {
        cout << "open lib file failed." << endl;
        return 1;
    }

    PF_ADD pfAdd = (PF_ADD)dlsym(pvHandle, "add");
    if(nullptr == pfAdd)
    {
        cout << "get function failed." << endl;
        return 1;
    }

    cout << pfAdd(4, 1, 2, 3, 4) << endl;

    dlclose(pvHandle);
    */
    return 0;
}
