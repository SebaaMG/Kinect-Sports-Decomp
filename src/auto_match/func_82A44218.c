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
extern int fn_82A40AD8();
extern int fn_82A40B38();
extern int fn_82A43380();
extern int fn_82A43C88();
extern int fn_82A43D00();
extern int fn_82A47D50();
extern int fn_82A4F4E0();


void fn_82A44218(int param_1,int param_2)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  undefined8 uVar5;
  int iVar6;
  int aiStack_30 [12];
  
  if (*(int *)(param_1 + 0x1b8) == 0) {
    return;
  }
  iVar6 = param_1 + 0xe4;
  if (param_2 == 0) {
    iVar3 = fn_82A47D50();
    while (iVar4 = fn_82A40AD8(iVar6), iVar4 != 0) {
      if (iVar4 != 0) {
        fn_82A4F4E0();
      }
    }
  }
  else {
    aiStack_30[0] = param_2;
    lVar2 = fn_82A43380(iVar6,aiStack_30,0xffffffff82a43368,0);
    if (lVar2 == 0) {
      return;
    }
    iVar3 = fn_82A40B38(iVar6);
  }
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(uint *)(iVar3 + 4);
  if (uVar1 == 0) {
    fn_82A43C88(param_1);
  }
  else {
    if (uVar1 == 1) {
      uVar5 = 1;
    }
    else {
      if (2 < uVar1) goto LAB_82a442dc;
      uVar5 = 2;
    }
    fn_82A43D00(param_1,uVar5);
  }
LAB_82a442dc:
  fn_82A4F4E0(iVar3);
  return;
}

