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
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA05E8();
extern int fn_82BB31A0();
extern int fn_82BC0088();
extern int fn_82BC0810();
extern int fn_82BC0A30();
extern int fn_82BC34D8();
extern int fn_82BC3A28();
extern int fn_82BC43D8();
extern int fn_82BC6160();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82BC0B00(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar8;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double dVar9;
  
  if (*(undefined4 **)(param_1[0xb] + 4) == (undefined4 *)0x0) {
    cVar8 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar8 == '\0') {
      cVar8 = (**(code **)(*param_1 + 0x18))(param_1);
      if (cVar8 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e33a8,0xec);
      }
      uVar3 = *(undefined4 *)(param_3 + 0x5ac);
      puVar6 = (undefined4 *)fn_82B7BD28(uVar3,0x3c4);
      *puVar6 = uVar3;
      if (puVar6 + 1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82BC3A28(puVar6 + 1,param_1,param_3);
      }
    }
    else {
      iVar4 = fn_82BC43D8(0x31,param_3);
      dVar9 = (double)lbl_821AAD20;
      fn_82BC34D8(dVar9,dVar9,dVar9,(double)lbl_82002AE0,iVar4,
                        *(undefined4 *)(param_3 + 0xab0),1);
      *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar4 + 0xe0);
      iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + 0x28);
      if (*(int *)(iVar1 + 4) == 0) {
        piVar5 = (int *)fn_82BC0088(iVar1,0);
      }
      else {
        piVar5 = *(int **)(iVar1 + 8);
      }
      iVar1 = *piVar5;
      fn_82BA05E8(iVar4,1,iVar1);
      iVar2 = *(int *)(iVar1 + 0x1c);
      if (*(int *)(*(int *)(iVar2 + 0x2c) + 4) == 0) {
        uVar3 = *(undefined4 *)(param_3 + 0x5b0);
        puVar6 = (undefined4 *)fn_82B7BD28(uVar3,0x110);
        puVar7 = puVar6 + 1;
        *puVar6 = uVar3;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar6[5] = iVar1;
          puVar6[0x42] = param_3;
          *(undefined1 *)(puVar6 + 0x43) = 0;
          *puVar7 = 3;
          puVar6[2] = 3;
          puVar6[3] = 3;
          puVar6[4] = 3;
        }
        fn_82BB31A0(puVar7);
        iVar1 = *(int *)(iVar2 + 0x2c);
        puVar6 = *(undefined4 **)(iVar1 + 4);
        if ((puVar6 == (undefined4 *)0x0) || (param_2[0xc] != puVar6[1])) {
          fn_82BC0810(iVar1,param_2[0xc],puVar7);
        }
        else {
          *puVar6 = puVar7;
        }
      }
    }
    *(int **)(iVar4 + 0x1c) = param_1;
    fn_82BC0A30(param_1,iVar4);
    (**(code **)(*param_2 + 0x28))(param_2,iVar4);
    if (*(char *)((int)param_1 + 5) == '\0') {
      cVar8 = (**(code **)(*param_1 + 0x10))(param_1);
      if (cVar8 != '\0') {
        *(undefined4 *)(iVar4 + 0x50) = 0;
        *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar4 + 0xe0);
      }
    }
    else {
      iVar1 = param_1[4];
      *(int *)(iVar4 + 0x50) = param_1[8];
      *(int *)(iVar4 + 0x38) = iVar1;
      *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) | 0x40;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) | 0x20;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x5b0);
    puVar7 = (undefined4 *)fn_82B7BD28(uVar3,0x110);
    puVar6 = puVar7 + 1;
    *puVar7 = uVar3;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar7[5] = iVar4;
      puVar7[0x42] = param_3;
      *(undefined1 *)(puVar7 + 0x43) = 0;
      *puVar6 = 3;
      puVar7[2] = 3;
      puVar7[3] = 3;
      puVar7[4] = 3;
    }
    fn_82BB31A0(puVar6);
    fn_82BC6160(param_2,param_1,puVar6);
  }
  else {
    puVar6 = (undefined4 *)**(undefined4 **)(param_1[0xb] + 4);
  }
  return puVar6;
}

