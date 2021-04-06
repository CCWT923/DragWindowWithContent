/**
    Enable "Show window contents while dragging" option.
*/

#include <windows.h>
#include <iostream>

using std::cout;


int main() 
{
    BOOL enabled = FALSE;

    SystemParametersInfo(SPI_GETDRAGFULLWINDOWS, NULL, &enabled, 0);


    if (!enabled)
    {
        SystemParametersInfo(SPI_SETDRAGFULLWINDOWS,
            TRUE,
            NULL,
            SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
    }
    cout << "\"Show window contents while dragging\" option status: " << (enabled? "ON": "OFF") << "\n";

    return 0;
}
