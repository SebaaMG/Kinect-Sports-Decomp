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
extern unsigned int *auStack_28;
extern int fn_8287D350();
extern int fn_8287FD98();
extern int fn_828AB870();
extern int fn_828B00A0();
extern unsigned int lbl_82193E00;
extern unsigned int uStack_30;


void fn_82244C20(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 uStack_30;
  ulonglong auStack_28 [2];
  
  uVar1 = fn_828B00A0((ulonglong)(uint)param_1[4] + 0x278);
  fn_8287FD98();
  dVar6 = (double)fn_8287D350();
  uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)(longlong)dVar6)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_30 = CONCAT44((((U64)(uStack_30) >> 32) & 0xFFFFFFFF),(((U64)(uStack_30) >> 32) & 0xFFFFFFFF));
  if ((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) < 0x9c4) {
    puVar3 = (uint *)&lbl_82193E00;
  }
  else {
    puVar3 = (uint *)&uStack_30;
  }
  auStack_28[0] = 4000;
  uStack_30 = (ulonglong)*puVar3;
  puVar4 = &uStack_30;
  if (3999 < (ulonglong)*puVar3) {
    puVar4 = auStack_28;
  }
  uVar5 = *puVar4;
  lVar2 = (**(code **)(*param_1 + 8))(param_1);
  fn_828AB870(lVar2 + 0xf0,(uVar5 & 0xffffffff) + (uVar1 & 0xffffffff));
  return;
}

