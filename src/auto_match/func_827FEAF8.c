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
extern int fn_827FE978();
extern int fn_82800AC8();
extern int fn_82800AF0();
extern int fn_82800AF8();
extern int fn_82800B00();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


ulonglong fn_827FEAF8(int *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  int *piVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  uVar6 = 0;
  uVar1 = *param_3;
  piVar7 = param_1 + 1;
  *param_3 = 0;
  uVar2 = *(undefined4 *)(*param_1 + 0x1c);
  uVar3 = *(undefined4 *)(*param_1 + 0x20);
  uVar9 = fn_82800AF8(piVar7);
  uVar10 = fn_82800B00(piVar7);
  iVar5 = fn_82800AC8(piVar7);
  dVar12 = (double)(longlong)iVar5;
  iVar5 = fn_82800AF0(piVar7);
  dVar11 = (double)lbl_821AAD20;
  bVar8 = (double)(float)param_1[4] < dVar11;
  if ((dVar12 == dVar11) || (iVar5 == 1)) {
    uVar6 = fn_827FE978(uVar10,uVar9,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,bVar8);
  }
  else if (iVar5 == 0) {
    if (bVar8) {
      uVar4 = fn_827FE978(uVar10,dVar11,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,1);
      dVar11 = (double)lbl_82002AE0;
    }
    else {
      uVar4 = fn_827FE978(uVar10,(double)lbl_82002AE0,param_2,uVar1,param_3,uVar3,uVar2,param_6,
                            param_7,0);
    }
    uVar6 = fn_827FE978(dVar11,uVar9,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,bVar8);
    uVar6 = uVar6 | uVar4;
  }
  else if (iVar5 == 2) {
    if (!bVar8) {
      uVar4 = fn_827FE978(uVar10,dVar11,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,1);
    }
    else {
      dVar11 = (double)lbl_82002AE0;
      uVar4 = fn_827FE978(uVar10,dVar11,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,0);
    }
    uVar6 = fn_827FE978(dVar11,uVar9,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,bVar8);
    uVar6 = uVar6 | uVar4;
  }
  return uVar6;
}

