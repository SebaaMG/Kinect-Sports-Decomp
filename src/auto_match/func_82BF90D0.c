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
extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD1E;
extern unsigned int lbl_8322FD2F;


ulonglong fn_82BF90D0(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0xffffffffffffffff;
  uVar1 = 0xffffffffffffffff;
  uVar4 = 0;
  uVar6 = (ulonglong)lbl_8322FD1E;
  if (param_1 != 0) {
    lVar3 = uVar6 * 2 + -0x7cdd4308;
    uVar2 = uVar1;
    do {
      uVar1 = uVar2;
      if (*(short *)lVar3 == -1) {
        uVar1 = uVar6;
        if ((int)uVar5 != -1) {
          *(short *)((int)&lbl_8322BCF8 + (int)((uVar5 & 0xffffffff) << 1)) = (short)uVar6;
          uVar1 = uVar2;
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 2;
      uVar2 = uVar1;
    } while (uVar4 < param_1);
  }
  lbl_8322FD1E = (short)uVar5 + 1;
  *(undefined2 *)((int)&lbl_8322BCF8 + (int)((uVar5 & 0xffffffff) << 1)) = 0xfffe;
  lbl_8322FD1C = lbl_8322FD1C - (short)param_1;
  lbl_8322FD2F = 1;
  return uVar1;
}

