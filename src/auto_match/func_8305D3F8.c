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


int fn_8305D3F8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x34);
    if ((iVar2 != 0) || (iVar2 = *(int *)(param_2 + 0x30), iVar2 != 0)) {
      return iVar2;
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      do {
        if (param_2 == *(int *)(param_1 + 4)) {
          return 0;
        }
        iVar2 = *(int *)(param_2 + 0x2c);
        iVar1 = *(int *)(iVar2 + 0x30);
        if ((iVar1 != 0) && (iVar1 != param_2)) {
          return iVar1;
        }
        param_2 = iVar2;
      } while (*(int *)(iVar2 + 0x2c) != 0);
    }
  }
  return 0;
}

