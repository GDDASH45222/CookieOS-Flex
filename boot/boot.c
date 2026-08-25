#include <efi.h>
#include <efilib.h>

EFI_STATUS EFIAPI efi_main(
    EFI_HANDLE image_handle,
    EFI_SYSTEM_TABLE *system_table
)
{
    InitializeLib(image_handle, system_table);

    Print(L"Cookie OS Flex 0.1.0\r\n");
    Print(L"UEFI bootloader started!\r\n");
    Print(L"Loading kernel...\r\n");

    return EFI_SUCCESS;
}