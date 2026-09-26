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
extern int fn_82D41A70();
extern unsigned int lbl_82134508;


void fn_82D41B18(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort *puVar9;
  byte *pbVar10;
  longlong lVar11;
  int iVar12;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  *param_3 = lbl_82134508;
  puVar2 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar2 = in_register_000100d0;
  puVar2[1] = in_register_000100d4;
  puVar2[2] = in_register_000100d8;
  puVar2[3] = in_vr13;
  iVar12 = 0;
  puVar2 = (undefined4 *)((uint)(param_3 + 4) & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
        pbVar10 = (byte *)(*(int *)(param_1 + 0x44) * iVar12 + *(int *)(param_1 + 0x40));
        uVar6 = (uint)*pbVar10;
        uVar5 = (uint)pbVar10[1];
        uVar3 = (uint)pbVar10[2];
LAB_82d41bfc:
        iVar1 = *(int *)(param_1 + 0x1c);
        lVar7 = (longlong)(int)uVar5 * (longlong)iVar1;
        lVar11 = (longlong)(int)uVar3 * (longlong)iVar1 + uVar8;
        lVar4 = (longlong)(int)uVar6 * (longlong)iVar1 + uVar8;
      }
      else {
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
        puVar9 = (ushort *)(*(int *)(param_1 + 0x44) * iVar12 + *(int *)(param_1 + 0x40));
        if (*(char *)(param_1 + 0x48) == '\x02') {
          uVar6 = (uint)*puVar9;
          uVar5 = (uint)puVar9[1];
          uVar3 = (uint)puVar9[2];
          goto LAB_82d41bfc;
        }
        iVar1 = *(int *)(param_1 + 0x1c);
        lVar7 = (longlong)*(int *)(puVar9 + 2) * (longlong)iVar1;
        lVar4 = (longlong)iVar1 * (longlong)*(int *)puVar9 + uVar8;
        lVar11 = (longlong)*(int *)(puVar9 + 4) * (longlong)iVar1 + uVar8;
      }
      fn_82D41A70(param_3,0xffffffff8323b1d0,lVar4,param_2);
      fn_82D41A70(param_3,0xffffffff8323b1d0,lVar7 + uVar8,param_2);
      fn_82D41A70(param_3,0xffffffff8323b1d0,lVar11,param_2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x14));
  }
  return;
}

