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
extern int fn_82A1BB18();
extern int fn_82A4B0D8();
extern U64 storeWordConditionalIndexed();


void fn_82A4B188(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  char in_RESERVE;
  byte in_cr0;
  
  iVar5 = (int)param_1;
  lVar9 = param_1 + 0x10;
  (**(code **)(*(int *)(iVar5 + 0x10) + 8))(lVar9);
  lVar7 = param_1 + 0x34;
  do {
    puVar8 = (uint *)lVar7;
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar7);
        *puVar8 = uVar4;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(param_2,0,lVar7);
      *puVar8 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (-1 < (int)uVar1) {
    if (*(int *)(iVar5 + 0xc) != 0) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x3c) + 0x10);
      iVar6 = fn_82A1BB18();
      if (iVar6 == iVar2) {
        fn_82A4B0D8(param_1 + -0xc,1,0);
      }
      else {
        (**(code **)(*(int *)(iVar5 + -0xc) + 0x3c))();
      }
    }
    piVar3 = *(int **)(iVar5 + 0x44);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3,param_2);
    }
  }
  (**(code **)(*(int *)lVar9 + 0x14))(lVar9);
  return;
}

