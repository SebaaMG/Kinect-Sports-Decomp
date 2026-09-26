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
extern unsigned int *auStack_2c;
extern int fn_8288E0C8();
extern int fn_828B5560();
extern unsigned int uStack_30;


undefined8 fn_8288F870(undefined8 param_1,longlong param_2,undefined2 param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar7;
  longlong lVar6;
  uint uStack_30;
  undefined1 auStack_2c [44];
  
  uStack_30 = param_4 & 0xffff;
  piVar4 = (int *)fn_8288E0C8(auStack_2c,param_2 + 0x7c,&uStack_30);
  iVar2 = *piVar4;
  iVar5 = 0;
  uVar3 = *(uint *)(iVar2 + 0x1c);
  if (*(int **)(iVar2 + 0x10) != (int *)0x0) {
    iVar5 = **(int **)(iVar2 + 0x10);
  }
  uVar7 = uVar3 >> 3;
  if (*(uint *)(iVar5 + 8) <= uVar7) {
    uVar7 = uVar7 - *(uint *)(iVar5 + 8);
  }
  uVar1 = *(undefined2 *)(*(int *)(*(int *)(iVar5 + 4) + uVar7 * 4) + (uVar3 & 7) * 2);
  if ((ulonglong)*(uint *)(iVar2 + 0x20) != 0) {
    *(uint *)(iVar2 + 0x1c) = uVar3 + 1;
    if ((uint)(*(int *)(iVar2 + 0x18) << 3) <= uVar3 + 1) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    lVar6 = (ulonglong)*(uint *)(iVar2 + 0x20) - 1;
    *(int *)(iVar2 + 0x20) = (int)lVar6;
    if (lVar6 == 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  fn_828B5560(param_1,param_3,param_4 & 0xffff,uVar1);
  return param_1;
}

