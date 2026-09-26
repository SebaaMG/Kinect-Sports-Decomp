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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack_40 ((*(U64*)&iStack_40))
extern int fn_828C4EA8();
extern unsigned int iStack_40;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_3c;


void fn_828C59F0(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uStack00000010;
  ulonglong uStack00000018;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar3 = (param_2 & 0xffffffff) - (param_1 & 0xffffffff);
  lVar4 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  if (0 < lVar4) {
    do {
      lVar4 = lVar4 + -1;
      iStack_40 = (int)(param_1 >> 0x20);
      uVar1 = (param_1 & 0xffffffff) + lVar4;
      uVar2 = (uVar1 & 0xffffffff) >> 2;
      if (*(uint *)(iStack_40 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iStack_40 + 8);
      }
      _iStack_40 = CONCAT44(*(undefined4 *)
                             (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar2 & 0xffffffff) << 2)) +
                             (int)((uVar1 & 3) << 2)),(int)param_1);
      fn_828C4EA8(param_1,lVar4,uVar3,&iStack_40,param_3);
    } while (0 < (int)lVar4);
  }
  return;
}

