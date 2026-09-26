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
extern int fn_82AA66A8();
extern int fn_82AC65F0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD2770();
extern int fn_82B841E8();
extern int fn_82B84290();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern unsigned int lbl_821AAD20;


uint fn_82AD2888(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  double dVar13;
  
  if ((*(uint *)(param_2 + 0x4c) >> 0x16 & 1) == 0) {
    dVar13 = (double)lbl_821AAD20;
    uVar5 = fn_82B8A3A0(dVar13,dVar13,dVar13,param_1,1);
  }
  else {
    uVar4 = fn_82AD2770();
    uVar5 = fn_82B84290(param_1,param_2);
    uVar4 = fn_82AD18C0(param_1,uVar4,0);
    fn_82AD1978(uVar5,uVar4);
  }
  if ((*(uint *)(param_2 + 0x24) & 1) == 0) {
    lVar6 = ((ulonglong)*(uint *)(param_2 + 0x20) & 0xfffffffe) - 0x28;
  }
  else {
    lVar6 = 0;
  }
  iVar7 = fn_82AC65F0(lVar6);
  uVar1 = *(uint *)(iVar7 + 0xc);
  uVar12 = *(uint *)(uVar1 + 8) >> 7 & 0x7f;
  if (uVar12 == 0x3b) {
    uVar4 = 0x15;
  }
  else if (uVar12 == 0x3c) {
    uVar4 = 0x16;
  }
  else if (uVar12 == 0x3d) {
    uVar4 = 0x17;
  }
  else {
    if (uVar12 != 0x3e) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar4 = 0x18;
  }
  uVar8 = fn_82B841E8(param_1,param_2,0,uVar4,2,1);
  *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) | 0x40;
  uVar5 = fn_82AD18C0(param_1,uVar5,0);
  uVar9 = fn_82AD1978(uVar8,uVar5);
  *(undefined4 *)(uVar8 + 0x2c) = uVar9;
  uVar9 = fn_82AD1978(uVar8,*(undefined4 *)(uVar1 + 0x2c));
  uVar12 = uVar1 & 0xfffffffe;
  *(undefined4 *)(uVar8 + 0x30) = uVar9;
  uVar3 = uVar8 & 0xfffffffe;
  *(undefined4 *)(uVar3 + 0x28) = *(undefined4 *)(uVar12 + 0x28);
  *(uint *)((*(uint *)(uVar12 + 0x28) & 0xfffffffe) + 0x24) = uVar3 + 0x28;
  *(uint *)(uVar3 + 0x24) = uVar12 + 0x28;
  *(uint *)(uVar12 + 0x28) = uVar3;
  if ((*(uint *)(param_2 + 0x4c) >> 0x16 & 1) == 0) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) | 0x80000000;
  }
  piVar10 = (int *)(uVar1 + 4);
  while( true ) {
    iVar7 = *piVar10;
    if (iVar7 == 0) break;
    if (*(int *)(iVar7 + 0x10) != 0) {
      piVar11 = (int *)(*(int *)(iVar7 + 0xc) + 4);
      for (iVar2 = *piVar11; iVar2 != iVar7; iVar2 = *(int *)(iVar2 + 8)) {
        piVar11 = (int *)(iVar2 + 8);
      }
      *piVar11 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(uVar8 + 4);
      *(int *)(uVar8 + 4) = iVar7;
      *(uint *)(iVar7 + 0xc) = uVar8;
    }
    if (*piVar10 == iVar7) {
      piVar10 = (int *)(iVar7 + 8);
    }
  }
  fn_82B8AC10(param_1,uVar1,0,1);
  return uVar8;
}

