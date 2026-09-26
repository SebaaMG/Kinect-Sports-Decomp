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
extern int fn_828252D0();


void fn_8282C280(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar5 = 1, *(uint *)(param_1 + 0x58) <= *(uint *)(param_1 + 0x68))) {
    bVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x52) == '\0') ||
     (bVar2 = 1, *(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x7c))) {
    bVar2 = 0;
  }
  bVar1 = *param_2;
  if ((bVar1 & 0x80) == 0) {
    if ((bVar1 & 0x40) != 0) {
      uVar4 = fn_828252D0(((ulonglong)*(uint *)(param_1 + 0x58) +
                           (ulonglong)*(byte *)(param_1 + 0x51) * -0x21) -
                           (ulonglong)*(uint *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0xbc) = uVar4;
      goto LAB_8282c358;
    }
    if ((bVar1 & 0x20) == 0) goto LAB_8282c358;
    lVar3 = (-(ulonglong)bVar5 & 0x80) + (ulonglong)*(uint *)(param_1 + 0x58);
  }
  else {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x51) * 0x21 + (ulonglong)*(uint *)(param_1 + 0x54);
  }
  uVar4 = fn_828252D0(lVar3);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
LAB_8282c358:
  if (((*param_2 & 0x10) != 0) && ((ulonglong)*(uint *)(param_1 + 0x6c) != 0)) {
    uVar4 = fn_828252D0((-(ulonglong)bVar2 & 0x80) + (ulonglong)*(uint *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
  }
  return;
}

