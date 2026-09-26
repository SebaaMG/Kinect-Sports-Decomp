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
extern int fn_82819398();
extern int fn_82822E38();
extern int fn_82822F60();
extern int fn_828233A0();


undefined8 fn_8281A3C8(int param_1,short param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = *(int *)(param_1 + 0x7c);
  if (0x1f < -param_3) {
    sVar1 = *(short *)(param_1 + 0x82);
    if (*(short *)(param_1 + 0x80) <= sVar1) {
      return 0;
    }
    iVar6 = param_2 * 0x40 + iVar3;
    sVar5 = *(short *)(sVar1 * 0x40 + iVar3 + 0x34);
    *(short *)(param_1 + 0x82) = sVar1 + 1;
    uVar2 = *(undefined2 *)(iVar6 + 0x2e);
    iVar9 = sVar5 * 0x40 + iVar3;
    *(short *)(iVar9 + 0x2c) = param_2;
    *(undefined2 *)(iVar9 + 0x2e) = uVar2;
    if (*(short *)(iVar6 + 0x2e) != -1) {
      *(short *)(*(short *)(iVar6 + 0x2e) * 0x40 + iVar3 + 0x2c) = sVar5;
    }
    iVar8 = *(int *)(iVar6 + 0x24);
    iVar4 = *(int *)(iVar6 + 0x20);
    psVar7 = (short *)(param_1 + 0x84);
    *(short *)(iVar6 + 0x2e) = sVar5;
    *(undefined1 *)(iVar9 + 0x36) = 0;
    *(int *)(iVar9 + 0x24) = -param_3;
    *(int *)(iVar9 + 0x20) = iVar4 + param_3 + iVar8;
    *(int *)(iVar6 + 0x24) = param_3 + *(int *)(iVar6 + 0x24);
    if (*(short *)(param_1 + 0x84) != -1) {
      *(short *)(*(short *)(param_1 + 0x84) * 0x40 + iVar3 + 0x32) = sVar5;
    }
    sVar1 = *psVar7;
    *(undefined2 *)(iVar9 + 0x32) = 0xffff;
    *(short *)(iVar9 + 0x30) = sVar1;
    *psVar7 = sVar5;
    fn_82822F60(param_1 + 200,iVar9,0xffffffff82819260,0);
    iVar6 = param_1 + 0xd8;
    fn_82822F60(iVar6,iVar9 + 0x10,0xffffffff82819288,0);
    fn_828233A0(iVar6);
    sVar1 = *(short *)(iVar9 + 0x2e);
    if ((sVar1 != -1) && (iVar8 = sVar1 * 0x40 + iVar3, (*(byte *)(iVar8 + 0x36) & 1) == 0)) {
      *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + *(int *)(iVar8 + 0x24);
      *(undefined2 *)(iVar9 + 0x2e) = *(undefined2 *)(iVar8 + 0x2e);
      if (*(short *)(iVar8 + 0x2e) != -1) {
        *(short *)(*(short *)(iVar9 + 0x2e) * 0x40 + iVar3 + 0x2c) = sVar5;
      }
      sVar5 = *(short *)(param_1 + 0x82) + -1;
      *(short *)(param_1 + 0x82) = sVar5;
      *(short *)(sVar5 * 0x40 + iVar3 + 0x34) = sVar1;
      *(undefined4 *)(iVar8 + 0x20) = 0;
      *(undefined4 *)(iVar8 + 0x24) = 0;
      *(undefined2 *)(iVar8 + 0x2e) = 0xffff;
      *(undefined2 *)(iVar8 + 0x2c) = 0xffff;
      fn_82819398(iVar3,psVar7);
      fn_82822E38(iVar8);
      fn_82822E38(iVar8 + 0x10);
      fn_828233A0(iVar6);
    }
  }
  return 1;
}

