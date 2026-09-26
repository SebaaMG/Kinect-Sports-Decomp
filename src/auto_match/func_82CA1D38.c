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
extern int fn_82C9DE90();


void fn_82CA1D38(int param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int in_stack_00000054;
  
  param_2 = param_2 + -5;
  param_3 = param_3 + -5;
  param_4 = param_4 + -5;
  iVar4 = (int)param_5;
  if (0 < iVar4) {
    iVar3 = param_6 + 0x1f >> 5;
    pbVar5 = (byte *)(param_7 + -1);
    do {
      if (0 < iVar3) {
        uVar2 = *(uint *)(param_1 + 0xcc);
        lVar6 = (longlong)iVar3;
        lVar8 = param_2;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          fn_82C9DE90(param_1,lVar8,bVar1 >> 4,uVar2,*(undefined4 *)(param_1 + 0xf8));
          fn_82C9DE90(param_1,((ulonglong)*(uint *)(param_1 + 0xcc) & 0xfffffff) * 0x10 + lVar8,
                        bVar1 & 0xf,*(uint *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xf8));
          uVar2 = *(uint *)(param_1 + 0xcc);
          lVar6 = lVar6 + -1;
          lVar8 = ((ulonglong)uVar2 & 0x7ffffff) * 0x20 + lVar8;
        } while (lVar6 != 0);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + 8;
    } while (param_5 != 0);
  }
  iVar4 = iVar4 >> 1;
  lVar6 = (longlong)iVar4;
  if (0 < lVar6) {
    pbVar5 = (byte *)(param_8 + -1);
    iVar3 = (param_6 >> 1) + 0x1f >> 5;
    lVar8 = lVar6;
    do {
      if (0 < iVar3) {
        uVar2 = *(uint *)(param_1 + 0xd0);
        lVar7 = (longlong)iVar3;
        lVar9 = param_3;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          fn_82C9DE90(param_1,lVar9,bVar1 >> 4,uVar2,*(undefined4 *)(param_1 + 0xf8));
          fn_82C9DE90(param_1,((ulonglong)*(uint *)(param_1 + 0xd0) & 0xfffffff) * 0x10 + lVar9,
                        bVar1 & 0xf,*(uint *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xf8));
          uVar2 = *(uint *)(param_1 + 0xd0);
          lVar7 = lVar7 + -1;
          lVar9 = ((ulonglong)uVar2 & 0x7ffffff) * 0x20 + lVar9;
        } while (lVar7 != 0);
      }
      lVar8 = lVar8 + -1;
      param_3 = param_3 + 8;
    } while (lVar8 != 0);
  }
  if (0 < iVar4) {
    pbVar5 = (byte *)(in_stack_00000054 + -1);
    iVar4 = (param_6 >> 1) + 0x1f >> 5;
    do {
      if (0 < iVar4) {
        uVar2 = *(uint *)(param_1 + 0xd0);
        lVar8 = (longlong)iVar4;
        lVar7 = param_4;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          fn_82C9DE90(param_1,lVar7,bVar1 >> 4,uVar2,*(undefined4 *)(param_1 + 0xf8));
          fn_82C9DE90(param_1,((ulonglong)*(uint *)(param_1 + 0xd0) & 0xfffffff) * 0x10 + lVar7,
                        bVar1 & 0xf,*(uint *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xf8));
          uVar2 = *(uint *)(param_1 + 0xd0);
          lVar8 = lVar8 + -1;
          lVar7 = ((ulonglong)uVar2 & 0x7ffffff) * 0x20 + lVar7;
        } while (lVar8 != 0);
      }
      lVar6 = lVar6 + -1;
      param_4 = param_4 + 8;
    } while (lVar6 != 0);
  }
  return;
}

