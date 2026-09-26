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
extern int fn_82AD1270();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AF77E0();
extern int fn_82AF80A8();
extern int fn_82AFA378();
extern int fn_82AFE7E0();


int fn_82B02A28(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint *puVar5;
  int iVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_3[7] == 3) {
    param_3[6] = param_3[0x35];
    param_3[7] = param_3[7] + 1;
  }
  uVar9 = 0;
  iVar6 = param_3[7];
  while (iVar6 != 0) {
    iVar6 = param_3[7];
    param_3[7] = iVar6 + -1;
    uVar9 = param_3[iVar6 + 2] | uVar9 << 2;
    iVar6 = param_3[7];
  }
  uVar1 = param_3[1];
  puVar5 = (uint *)fn_82AD17B0(param_1,*param_3);
  *puVar5 = *puVar5 & 0xf1ffffff | 0x8000000;
  fn_82AD1270(puVar5,uVar1);
  *puVar5 = (uVar9 & 0xff) << 5 | *puVar5 & 0xffffe01f;
  iVar6 = fn_82AF80A8(param_1,0,param_2,puVar5);
  if (param_3[2] != 0) {
    uVar2 = fn_82AC9F80(param_1,param_3[2],0);
    fn_82AD1978(iVar6,uVar2);
  }
  iVar8 = param_3[0x28];
  while (iVar8 != 0) {
    iVar8 = param_3[0x28] + -1;
    param_3[0x28] = iVar8;
    uVar9 = param_3[iVar8 * 4 + 10];
    uVar1 = param_3[iVar8 * 4 + 0xb];
    iVar7 = iVar6;
    if (param_3[0x28] != param_3[0x34] + -1) {
      uVar3 = fn_82AD1918(param_1,param_3[iVar8 * 4 + 8],param_3[iVar8 * 4 + 9],uVar9);
      uVar4 = fn_82AD18C0(param_1,iVar6,0);
      uVar2 = uVar4;
      if ((*(uint *)(iVar6 + 8) & 0x3f80) == 0x180) {
        uVar2 = uVar3;
        uVar3 = uVar4;
      }
      iVar7 = fn_82AF77E0(param_1,0,param_2,uVar3,uVar2);
      if ((uVar9 & 8) != 0) {
        uVar2 = fn_82AD12C8(uVar1);
        uVar2 = fn_82AC9F80(param_1,uVar2,0);
        fn_82AD1978(iVar7,uVar2);
      }
      fn_82AD1B28(iVar6);
      *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x1000000;
      fn_82AFA378(param_1,iVar6);
    }
    iVar6 = iVar7;
    iVar8 = param_3[0x28];
  }
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 1;
  }
  fn_82AFE7E0(param_1,param_2,0,iVar6);
  return iVar6;
}

