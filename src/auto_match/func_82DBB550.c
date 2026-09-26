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
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82DBBD28();
extern int fn_82DBBF60();
extern unsigned int lbl_8209AB20;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DBB550(int *param_1,int param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar4 = (**(code **)(*param_1 + 0x40))();
  if (iVar4 != 0) {
    (**(code **)(*param_3 + 0x18))(param_3);
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar1 = "TtSetSurfVel";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
    }
    puVar3 = (uint *)(in_r0 + param_4 & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    if (*(int *)(iVar4 + 0x14) == param_2) {
      puVar3 = (uint *)((uint)(&lbl_8209AB20 + in_r0) & 0xfffffff0);
      uVar10 = uVar10 ^ puVar3[3];
      uVar9 = uVar9 ^ puVar3[2];
      uVar8 = uVar8 ^ puVar3[1];
      uVar7 = uVar7 ^ *puVar3;
    }
    iVar5 = fn_82DBBD28(iVar4,0x1a);
    if (iVar5 == 0) {
      iVar5 = fn_82CE5410();
      puVar6 = (undefined2 *)
               (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x30);
      if (puVar6 == (undefined2 *)0x0) {
        puVar6 = (undefined2 *)0x0;
      }
      else {
        *puVar6 = 0x1a;
        puVar6[8] = 0x30;
      }
      puVar3 = (uint *)((uint)(puVar6 + 0x10) & 0xfffffff0);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      fn_82DBBF60(iVar4,param_3);
    }
    else {
      puVar3 = (uint *)(iVar5 + 0x20U & 0xfffffff0);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
    }
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
  }
  return;
}

