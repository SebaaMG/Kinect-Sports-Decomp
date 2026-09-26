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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern unsigned int iStack_40;


undefined8 fn_826F34B0(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iStack_40;
  
  iVar1 = iStack_40;
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    if ((*(uint *)(param_1 + 0xc) != 0) && ((param_3 & 0x200000) == 0)) {
      fn_82683F88((ulonglong)*(uint *)(param_1 + 0xc) + 0xc,0xffffffff820059f0,param_2);
    }
    uVar6 = 0;
  }
  else {
    if ((param_3 & 0x200000) == 0) {
      bVar4 = true;
      bVar3 = false;
      if (*(int *)(param_1 + 0xc) != 0) {
        fn_8267C4C8();
      }
      iVar1 = *(int *)(param_1 + 0xc);
      iVar5 = iVar1;
      iVar7 = iStack_40;
    }
    else {
      bVar4 = false;
      bVar3 = true;
      iStack_40 = 0;
      iVar5 = iStack_40;
      iVar7 = 0;
    }
    iStack_40 = iVar5;
    piVar2 = *(int **)(*(int *)(param_1 + 8) + 8);
    uVar6 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2,iStack_40,0x21,0x1b6);
    if ((bVar4) && (iVar1 != 0)) {
      fn_8267C4F0(iVar1);
    }
    if ((bVar3) && (iVar7 != 0)) {
      fn_8267C4F0(iVar7);
    }
  }
  return uVar6;
}

