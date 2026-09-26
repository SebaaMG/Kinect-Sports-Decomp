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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0110();
extern int fn_82BC01C0();


void fn_82BC0400(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  
  uVar1 = (*(code *)param_1[4])(param_2);
  iVar4 = (*param_1 - 1 & uVar1) * 4;
  if (*(int *)(param_1[2] + iVar4) == 0) {
    uVar1 = param_1[5];
    puVar2 = (uint *)fn_82B7BD28(uVar1,0x14);
    puVar5 = puVar2 + 1;
    *puVar2 = uVar1;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      fn_82BA03B8(puVar5,param_1[5]);
    }
    *(uint **)(param_1[2] + iVar4) = puVar5;
  }
  iVar4 = *(int *)(param_1[2] + iVar4);
  puVar3 = (undefined4 *)fn_82BC0110(iVar4,0);
  *puVar3 = (int)param_2;
  if (*param_1 < *(uint *)(iVar4 + 4)) {
    fn_82BC01C0(param_1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

