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
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82F64318();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined4
fn_82DC25D0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = *(int *)(param_3 + 4);
  iVar5 = fn_82CE5410();
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = 0x13;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(param_3 + 4);
  iVar5 = fn_82CE5410();
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(uint *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = param_4 & 0xff;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(param_3 + 4);
  iVar5 = fn_82CE5410();
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(uint *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = param_5 & 0xff;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  dVar6 = (double)fn_82F64318(param_2);
  dVar7 = (double)(float)dVar6;
  dVar6 = (double)fn_82F64318(param_1);
  iVar1 = *(int *)(param_3 + 4);
  fStack_50 = (float)dVar6;
  fStack_4c = (float)dVar7;
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  uStack_48 = lbl_821AAD20;
  uStack_44 = lbl_821AAD20;
  iVar5 = fn_82CE5410();
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),(int *)(iVar1 + 0x10),0x10);
  }
  puVar3 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar4 = (undefined4 *)
           (in_r0 + *(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar8;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  iVar1 = *(int *)(param_3 + 4);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x30;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  return uVar2;
}

