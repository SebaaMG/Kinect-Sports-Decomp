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
extern int fn_82ABE870();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82AF8780();
extern int fn_82B47660();
extern unsigned int uStack_64;
extern unsigned int uStack_68;


void fn_82B4E6F0(undefined8 param_1,int param_2,ulonglong param_3,int param_4,ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_68 = *(undefined4 *)(param_4 + 4);
  uStack_64 = *(undefined4 *)(param_4 + 8);
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar9 = uVar1;
  uVar10 = uVar2;
  iVar13 = param_4;
  if ((param_3 & 0xffffffff) == (param_5 & 0xffffffff)) {
    uVar14 = param_3 & 0xffffffff;
    while (uVar14 != 0) {
      puVar3 = (undefined8 *)fn_82ABE870(param_2);
      puVar4 = (undefined8 *)fn_82ABE870(param_4);
      uVar8 = *puVar3;
      *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
      *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar4 + 4);
      *puVar4 = uVar8;
      param_3 = param_3 - 1;
      uVar14 = param_3;
    }
  }
  else {
    uVar14 = param_3;
    if ((param_3 & 0xffffffff) < (param_5 & 0xffffffff)) {
      uVar14 = param_5;
      param_5 = param_3;
      uVar9 = uStack_68;
      uVar10 = uStack_64;
      iVar13 = param_2;
      param_2 = param_4;
      uStack_64 = uVar2;
      uStack_68 = uVar1;
    }
    lVar11 = (param_5 & 0x1fffffff) << 3;
    iVar5 = fn_82ABE9F0(param_1,lVar11,0);
    if ((param_5 & 0xffffffff) != 0) {
      uVar12 = param_5;
      puVar7 = (undefined4 *)(iVar5 + -8);
      do {
        puVar6 = (undefined4 *)fn_82ABE870(iVar13);
        uVar12 = uVar12 - 1;
        puVar7[2] = *puVar6;
        puVar7[3] = puVar6[1];
        puVar7 = puVar7 + 2;
      } while (uVar12 != 0);
    }
    fn_82B47660(param_2,param_5);
    uVar12 = uVar14 & 0xffffffff;
    while (uVar12 != 0) {
      puVar7 = (undefined4 *)fn_82AF8780(param_2);
      puVar6 = (undefined4 *)fn_82AF8780(iVar13);
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
      uVar14 = uVar14 - 1;
      uVar12 = uVar14;
    }
    *(undefined4 *)(param_2 + 4) = uVar9;
    *(undefined4 *)(param_2 + 8) = uVar10;
    if ((param_5 & 0xffffffff) != 0) {
      puVar3 = (undefined8 *)(iVar5 + -8);
      do {
        puVar4 = (undefined8 *)fn_82ABE870(param_2);
        puVar3 = puVar3 + 1;
        param_5 = param_5 - 1;
        *puVar4 = *puVar3;
      } while (param_5 != 0);
    }
    fn_82AC6808(param_1,iVar5,lVar11,0);
  }
  *(undefined4 *)(param_2 + 4) = uVar9;
  *(undefined4 *)(param_2 + 8) = uVar10;
  *(undefined4 *)(iVar13 + 4) = uStack_68;
  *(undefined4 *)(iVar13 + 8) = uStack_64;
  return;
}

