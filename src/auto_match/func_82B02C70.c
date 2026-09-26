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
extern int fn_82AC9F80();
extern int fn_82AD12C8();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AF6E60();
extern int fn_82AF7710();
extern int fn_82AFA378();
extern int fn_82AFE7E0();
extern int fn_82B16698();
extern int fn_82B8A3A0();
extern unsigned int lbl_821AAD20;


int fn_82B02C70(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar8;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar9;
  undefined8 uVar7;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  
  iVar1 = param_2[0x29];
  dVar14 = (double)lbl_821AAD20;
  iVar8 = fn_82B8A3A0(dVar14,dVar14,dVar14,param_1,1);
  iVar10 = 1;
  do {
    uVar13 = param_2[0x28];
    uVar12 = 0;
    if (uVar13 != 0) {
      do {
        iVar11 = (param_2[0x28] - uVar12) + -1;
        iVar9 = param_2[iVar11 * 4 + 8];
        uVar2 = param_2[iVar11 * 4 + 9];
        uVar3 = param_2[iVar11 * 4 + 10];
        uVar4 = param_2[iVar11 * 4 + 0xb];
        if ((uint)LZCOUNT((int)param_3 - iVar9) >> 5 != (uint)LZCOUNT(iVar10 + -1) >> 5) {
          uVar5 = fn_82AD18C0(param_1,iVar8,0);
          uVar6 = fn_82AD1918(param_1,iVar9,uVar2,uVar3);
          uVar7 = uVar6;
          if ((*(uint *)(iVar8 + 8) & 0x3f80) != 0x80) {
            uVar7 = uVar5;
            uVar5 = uVar6;
          }
          iVar9 = fn_82AF7710(param_1,0,iVar1,uVar5,uVar7);
          if ((uVar3 & 8) != 0) {
            uVar7 = fn_82AD12C8(uVar4);
            uVar7 = fn_82AC9F80(param_1,uVar7,0);
            fn_82AD1978(iVar9,uVar7);
          }
          *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x1000000;
          fn_82B16698(param_1,iVar8,*(undefined4 *)(param_1 + 0x294));
          fn_82AF6E60(param_1,iVar9);
          fn_82AFA378(param_1,iVar8);
          iVar8 = iVar9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
  uVar7 = fn_82AD18C0(param_1,param_3,0);
  uVar5 = fn_82AD18C0(param_1,iVar8,0);
  iVar10 = fn_82AF7710(param_1,0,iVar1,uVar5,uVar7);
  *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x1000000;
  fn_82B16698(param_1,iVar8,*(undefined4 *)(param_1 + 0x294));
  fn_82AFA378(param_1,iVar8);
  iVar8 = param_2[7];
  uVar13 = 0;
  iVar9 = iVar10;
  if (iVar8 != 1) {
    do {
      uVar2 = param_2[(param_2[7] - uVar13) + 2];
      uVar5 = fn_82AD18C0(param_1,iVar10,0);
      uVar6 = fn_82AD1918(param_1,*param_2,uVar2,param_2[1]);
      uVar7 = uVar6;
      if ((*(uint *)(iVar10 + 8) & 0x3f80) != 0x80) {
        uVar7 = uVar5;
        uVar5 = uVar6;
      }
      iVar9 = fn_82AF7710(param_1,0,iVar1,uVar5,uVar7);
      if (param_2[2] != 0) {
        uVar7 = fn_82AC9F80(param_1,param_2[2],0);
        fn_82AD1978(iVar9,uVar7);
      }
      *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x1000000;
      fn_82B16698(param_1,iVar10,*(undefined4 *)(param_1 + 0x294));
      fn_82AF6E60(param_1,iVar9);
      fn_82AFA378(param_1,iVar10);
      uVar13 = uVar13 + 1;
      iVar10 = iVar9;
    } while (uVar13 < iVar8 - 1U);
  }
  if ((*(uint *)(iVar1 + 8) & 1) != 0) {
    *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 1;
  }
  fn_82AFE7E0(param_1,iVar1,param_4,iVar9);
  return iVar9;
}

