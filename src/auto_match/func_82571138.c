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


longlong fn_82571138(longlong param_1,int param_2)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x7c)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + *(int *)(param_2 + 0x78)) == 0x201f) {
          uVar2 = *(ulonglong *)(iVar1 * 0x10 + *(int *)(param_2 + 0x78) + 8);
          goto code_r0x82571178;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar1 < *(int *)(param_2 + 0x7c));
    }
    uVar2 = 0;
code_r0x82571178:
    if ((uVar2 & 0xffffffff) != 0) {
      return (uVar2 & 0xffffffff) + 0x2d0;
    }
  }
  return param_1 + 0x380;
}

