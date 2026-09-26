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
extern int fn_82FF8580();
extern int fn_82FF8648();
extern int fn_82FF86F0();
extern int fn_82FF8B88();
extern int fn_82FF8D30();
extern int fn_82FFE0F0();


undefined8 fn_82FFA278(longlong param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar6;
  undefined8 uVar5;
  longlong lVar7;
  int aiStack_50 [20];
  
  lVar7 = param_1 + 4;
  fn_82FF8580(lVar7);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(ushort *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 8);
  puVar6 = (undefined4 *)fn_82FFE0F0(param_1 + 0x41c,uVar3);
  if (puVar6 == (undefined4 *)0x0) {
    uVar5 = fn_82FF8D30(lVar7,uVar3,iVar4,-(ushort)(iVar4 == 0) & uVar1,uVar2 >> 0x1f);
  }
  else {
    uVar5 = fn_82FF8B88(lVar7,*puVar6,iVar4);
  }
  aiStack_50[0] = 0;
  if ((((int)uVar5 == 1) &&
      (uVar5 = fn_82FF86F0(lVar7,param_3,*(undefined4 *)(param_2 + 0xc),aiStack_50),
      (int)uVar5 == 1)) && (*(int *)(param_2 + 0xc) != aiStack_50[0])) {
    uVar5 = 2;
  }
  fn_82FF8648(lVar7);
  return uVar5;
}

