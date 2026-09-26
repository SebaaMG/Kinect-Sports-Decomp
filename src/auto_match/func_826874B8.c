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
extern int fn_8267FB90();
extern int fn_82686758();
extern U64 storeWordConditionalIndexed();


void fn_826874B8(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  lVar5 = (ulonglong)*(uint *)(param_1 + 8) + 0xc;
  RtlEnterCriticalSection(lVar5);
  do {
    puVar3 = (uint *)(param_2 + 4);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 + 1,0,param_2 + 4);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iVar7 = (int)param_2;
  *(int *)(param_1 + 0x10) = iVar7;
  *(undefined4 *)(param_1 + 0xc) = 1;
  piVar6 = (int *)(*(int *)(param_1 + 8) + 0x28);
  iVar2 = fn_82686758(piVar6,param_1 + 0x14,param_3,param_4,in_MSR);
  if (iVar2 < 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((iVar2 + 1) * 0x10 + *piVar6);
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = iVar7;
    *puVar4 = 0;
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(param_1 + 8);
    fn_8267FB90(param_1 + 0x20);
  }
  RtlLeaveCriticalSection(lVar5);
  return;
}

