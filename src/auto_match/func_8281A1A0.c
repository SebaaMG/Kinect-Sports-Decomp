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
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_82819398();
extern int fn_8281C250();
extern int fn_82822E38();
extern int fn_82822F60();
extern int fn_82823200();
extern int fn_828232B0();
extern int fn_828233A0();


void fn_8281A1A0(int param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar5;
  int iVar4;
  short sVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [108];
  
  sVar3 = (short)param_2;
  iVar2 = *(int *)(param_1 + 0x7c);
  iVar9 = sVar3 * 0x40 + iVar2;
  fn_8281C250(param_1,*(undefined4 *)(iVar9 + 0x3c),*(undefined4 *)(iVar9 + 0x28));
  psVar8 = (short *)(param_1 + 0x84);
  *(undefined4 *)(iVar9 + 0x3c) = 0;
  *(byte *)(iVar9 + 0x36) = *(byte *)(iVar9 + 0x36) & 0xfe;
  if (*(short *)(param_1 + 0x84) != -1) {
    *(short *)(*(short *)(param_1 + 0x84) * 0x40 + iVar2 + 0x32) = sVar3;
  }
  sVar6 = *psVar8;
  *(undefined2 *)(iVar9 + 0x32) = 0xffff;
  *(short *)(iVar9 + 0x30) = sVar6;
  *psVar8 = sVar3;
  fn_82822F60(param_1 + 200,iVar9,0xffffffff82819260,0);
  iVar7 = param_1 + 0xd8;
  fn_82822F60(iVar7,iVar9 + 0x10,0xffffffff82819288,0);
  fn_828233A0(iVar7);
  sVar6 = *(short *)(iVar9 + 0x2e);
  sVar1 = *(short *)(iVar9 + 0x2c);
  fn_82823200(iVar9,auStack_70);
  fn_828232B0(iVar9,auStack_6c);
  if (sVar6 != -1) {
    iVar4 = sVar6 * 0x40 + iVar2;
    if ((*(byte *)(iVar4 + 0x36) & 1) == 0) {
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + *(int *)(iVar4 + 0x24);
      *(undefined2 *)(iVar9 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
      if (*(short *)(iVar4 + 0x2e) != -1) {
        *(short *)(*(short *)(iVar4 + 0x2e) * 0x40 + iVar2 + 0x2c) = sVar3;
      }
      sVar5 = *(short *)(param_1 + 0x82) + -1;
      *(short *)(param_1 + 0x82) = sVar5;
      *(short *)(sVar5 * 0x40 + iVar2 + 0x34) = sVar6;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined2 *)(iVar4 + 0x2e) = 0xffff;
      *(undefined2 *)(iVar4 + 0x2c) = 0xffff;
      fn_82819398(iVar2,psVar8,sVar6);
      fn_82822E38(iVar4);
      fn_82822E38(iVar4 + 0x10);
      fn_828233A0(iVar7);
    }
  }
  if ((sVar1 != -1) && (iVar4 = sVar1 * 0x40 + iVar2, (*(byte *)(iVar4 + 0x36) & 1) == 0)) {
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + *(int *)(iVar9 + 0x24);
    *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(iVar9 + 0x2e);
    if (*(short *)(iVar9 + 0x2e) != -1) {
      *(short *)(*(short *)(iVar9 + 0x2e) * 0x40 + iVar2 + 0x2c) = sVar1;
    }
    fn_82819398(iVar2,psVar8,param_2);
    fn_82822E38(iVar9);
    fn_82822E38(iVar9 + 0x10);
    fn_828233A0(iVar7);
    sVar6 = *(short *)(param_1 + 0x82) + -1;
    *(short *)(param_1 + 0x82) = sVar6;
    *(short *)(sVar6 * 0x40 + iVar2 + 0x34) = sVar3;
    *(undefined4 *)(iVar9 + 0x20) = 0;
    *(undefined4 *)(iVar9 + 0x24) = 0;
    *(undefined2 *)(iVar9 + 0x2e) = 0xffff;
    *(undefined2 *)(iVar9 + 0x2c) = 0xffff;
  }
  return;
}

