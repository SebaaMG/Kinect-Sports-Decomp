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
extern int fn_82FAE168();
extern int fn_82FAF750();
extern int fn_82FF4F40();
extern unsigned int lbl_83264304;


void fn_82FA9C60(int param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar1 = (uint *)fn_82FAF750(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x60));
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x44) - (ulonglong)*(uint *)(param_1 + 0xc);
  if ((longlong)uVar4 < 1) {
    if ((param_3 & 0x400) != 0) {
      fn_82FF4F40(lbl_83264304,param_4,0x400,puVar1);
    }
    lVar6 = 0;
    lVar3 = 0;
  }
  else {
    param_2 = uVar4 + param_2;
    trapWord(6,(ulonglong)*puVar1,0);
    trapWord(6,(ulonglong)puVar1[1],0);
    lVar6 = (uVar4 & 0xffffffff) / (ulonglong)*puVar1 + 1;
    lVar3 = (uVar4 & 0xffffffff) / (ulonglong)puVar1[1] + 1;
  }
  trapWord(6,(ulonglong)*puVar1,0);
  lVar7 = (param_2 & 0xffffffff) / (ulonglong)*puVar1 + 1;
  trapWord(6,(ulonglong)puVar1[1],0);
  lVar5 = (param_2 & 0xffffffff) / (ulonglong)puVar1[1] + 1;
  if (((param_3 & 0x200) != 0) && ((int)lVar3 < (int)lVar5)) {
    lVar5 = lVar5 - lVar3;
    do {
      fn_82FF4F40(lbl_83264304,param_4,0x200,puVar1);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (((param_3 & 0x100) != 0) && ((int)lVar6 < (int)lVar7)) {
    lVar7 = lVar7 - lVar6;
    do {
      fn_82FF4F40(lbl_83264304,param_4,0x100,puVar1);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((param_3 & 0x800) != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82FAE168(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x60));
    }
    if (iVar2 <= (int)param_2) {
      fn_82FF4F40(lbl_83264304,param_4,0x800,puVar1);
    }
  }
  return;
}

