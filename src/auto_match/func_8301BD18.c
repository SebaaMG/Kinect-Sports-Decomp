typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_83037590();
extern int fn_8303A630();


void fn_8301BD18(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 400) == 0) && (*(int *)(param_1 + 0x194) == 2)) {
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xfc) + 8), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd0) = 0;
      *(byte *)(iVar1 + 0xdb) = *(byte *)(iVar1 + 0xdb) & 0x7f;
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      if ((*(byte *)(*(int *)(iVar1 + 0xfc) + 0xc) & 0x80) != 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          (**(code **)(*(int *)(iVar1 + 0xc0) + 8))(iVar1 + 0xc0);
        }
        else {
          fn_83037590(param_1 + 0x14);
        }
        iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 0x18))
                          (*(int *)(param_1 + 0xc) + 0xc0);
        if (iVar1 != 1) {
          fn_8303A630(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
          *(undefined4 *)(param_1 + 8) = 2;
        }
      }
    }
  }
  return;
}

