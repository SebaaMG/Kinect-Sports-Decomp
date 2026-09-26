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
#define _uStack00000018 ((*(U64*)&uStack00000018))
extern unsigned int *auStack_40;
extern int fn_828C5068();
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack0000001c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_828C5E70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uStack00000010;
  undefined4 uStack00000018;
  uint uStack0000001c;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack00000010 = ((((U64)(uStack00000010)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_1)) & ((U64)0xFFFFFFFF)) << 32));
  iVar1 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF);
  uStack0000001c = (uint)param_2;
  uVar3 = uStack0000001c;
  uStack00000010 = param_1;
  _uStack00000018 = param_2;
  while (1 < (int)(uVar3 - iVar1)) {
    uVar3 = uVar3 - 1;
    uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)_uStack00000018 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uVar2 = uVar3 >> 2;
    if (*(uint *)((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) + 8);
    }
    uStack_38 = CONCAT44((((U64)(uStack_30) >> 0) & 0xFFFFFFFF),uVar3);
    uStack_30 = CONCAT44((((U64)(uStack_30) >> 0) & 0xFFFFFFFF),uVar3);
    auStack_40[0] =
         *(undefined4 *)(*(int *)(*(int *)((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) + 4) + uVar2 * 4) + (uVar3 & 3) * 4);
    fn_828C5068(param_1,uStack_30,uStack_38,auStack_40,param_3,0);
    _uStack00000018 = CONCAT44(uStack00000018,uVar3);
  }
  return;
}

