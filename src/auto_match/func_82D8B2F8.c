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


void fn_82D8B2F8(int param_1,char param_2,uint param_3,ulonglong param_4,ulonglong param_5,
                  uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_2 != '\0') {
    *(char *)(param_1 + 9) = (char)(param_3 & 0xf);
    if ((param_6 & 3) < (param_3 & 3)) {
      uVar1 = (ushort)((~param_4 & 0xffffffff) << 0xe);
    }
    else {
      uVar1 = (ushort)((param_4 & 0xffffffff) << 0xe);
    }
    if ((int)param_6 < (int)(param_3 & 0xf)) {
      uVar2 = (ushort)((~param_5 & 0xffffffff) << 0xe);
    }
    else {
      uVar2 = (ushort)((param_5 & 0xffffffff) << 0xe);
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0x3fff | uVar1;
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0x3fff | uVar2;
    return;
  }
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}

