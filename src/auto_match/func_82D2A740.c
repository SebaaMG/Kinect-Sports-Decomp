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
extern unsigned int *auStack_40;
extern int fn_82D1CE60();
extern unsigned int lbl_82002AE0;


double fn_82D2A740(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  iVar1 = *(int *)(param_2 + 0x20);
  dVar4 = (double)fn_82D1CE60(param_1 + 0x10,(ulonglong)*(uint *)(iVar1 + 8) + 0x10,
                                    (ulonglong)*(uint *)(iVar1 + 0xc) + 0x10,
                                    (ulonglong)*(uint *)(iVar1 + 0x10) + 0x10,auStack_40,auStack_30)
  ;
  if (dVar4 < (double)*(float *)(param_1 + 0x20)) {
    *(float *)(param_1 + 0x20) = (float)dVar4;
    *(int *)(param_1 + 0x50) = iVar1;
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    uVar8 = *puVar3;
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    puVar3 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar2 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  return (double)lbl_82002AE0;
}

