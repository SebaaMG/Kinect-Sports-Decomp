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


ulonglong fn_8223A9E0(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 >> 3;
  uVar4 = 0;
  param_2 = param_2 & 7;
  do {
    iVar1 = (int)uVar5;
    if (param_2 == 0) {
      if (param_3 < 8) {
        uVar2 = param_3 & 0x7f;
        uVar3 = 8 - param_3;
        uVar4 = uVar4 << (param_3 & 0x7f);
        param_3 = 0;
        uVar2 = ((ulonglong)*(byte *)(iVar1 + param_1) & (1L << uVar2) + -1 << (uVar3 & 0x7f)) >>
                (uVar3 & 0x7f);
      }
      else {
        uVar4 = uVar4 << 8;
        param_3 = param_3 - 8;
        uVar5 = uVar5 + 1;
        uVar2 = (ulonglong)*(byte *)(iVar1 + param_1);
      }
      uVar4 = uVar2 | uVar4;
    }
    else {
      uVar4 = 8 - param_2;
      if (param_3 < 8 - param_2) {
        uVar4 = param_3;
      }
      param_2 = (8 - uVar4) - param_2;
      param_3 = param_3 - uVar4;
      uVar5 = uVar5 + 1;
      uVar4 = ((ulonglong)*(byte *)(iVar1 + param_1) &
              (1L << (uVar4 & 0x7f)) + -1 << (param_2 & 0x7f)) >> (param_2 & 0x7f);
      param_2 = 0;
    }
  } while (param_3 != 0);
  return uVar4;
}

