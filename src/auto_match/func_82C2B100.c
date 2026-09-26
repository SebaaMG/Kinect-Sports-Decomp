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
extern int fn_82C2AB80();


undefined8 fn_82C2B100(int param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 auStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  auStack_30[0] = 0;
  while( true ) {
    lVar6 = 0;
    uVar5 = 0;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 4);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      lVar6 = *(longlong *)(iVar3 + 8);
      uVar5 = (ulonglong)*(uint *)(iVar3 + 4);
    }
    if (*(longlong *)(iVar1 + 0x28) + (param_2 & 0xffffffff) <= uVar5 + lVar6) {
      return 0;
    }
    uVar4 = (**(code **)(*(int *)(iVar1 + 0x34) + 4))(*(int *)(iVar1 + 0x34),auStack_30);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82C2AB80(param_1,auStack_30[0]);
    if ((int)uVar4 < 0) break;
    *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x74) + *(int *)(iVar1 + 0x78);
    if (*(longlong *)(iVar1 + 0x28) + (param_2 & 0xffffffff) <= uVar5 + lVar6) {
      return uVar4;
    }
  }
  return uVar4;
}

