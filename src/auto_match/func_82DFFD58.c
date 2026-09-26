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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82CE5410();
extern int fn_82D40FE8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82132790;
extern unsigned int lbl_821AAD20;


void fn_82DFFD58(double param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [48];
  
  fStack_38 = (float)(param_1 * (double)lbl_82002C5C);
  dVar4 = (double)lbl_821AAD20;
  puVar1 = (undefined4 *)((uint)(&lbl_82132790 + in_r0) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  fStack_40 = lbl_821AAD20;
  fStack_3c = lbl_821AAD20;
  fStack_34 = lbl_821AAD20;
  puVar1 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x60);
  *(undefined2 *)(iVar3 + 4) = 0x60;
  fn_82D40FE8(param_2,dVar4,iVar3,auStack_30,&fStack_40);
  return;
}

