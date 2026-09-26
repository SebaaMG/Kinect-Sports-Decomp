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
extern unsigned int *auStack_30;
extern int fn_82681838();
extern int fn_826953D8();
extern int fn_82695520();
extern int fn_82696330();


void fn_826BDD18(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  longlong lVar5;
  undefined1 auStack_30 [24];
  
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar4 == 0x17) {
    lVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x148;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if ((iVar4 < 2) || (bVar2 = true, 5 < iVar4)) {
      bVar2 = false;
    }
    if (bVar2) {
      lVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x68;
      if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
        lVar5 = 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_82695520(auStack_30,lVar5);
      uVar3 = fn_826953D8(uVar3,uVar1);
      fn_82681838(*(undefined4 *)(param_1 + 4),uVar3);
      fn_82696330(auStack_30);
      return;
    }
    lVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x150;
  }
  fn_82681838(*(undefined4 *)(param_1 + 4),lVar5);
  return;
}

