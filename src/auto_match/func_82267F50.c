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
extern int fn_82230300();
extern int fn_82266230();
extern int fn_82267460();
extern int fn_82267628();
extern int fn_82267E00();
extern int fn_822688A0();
extern int fn_8251F720();
extern int fn_825373A0();
extern int fn_8265C9E0();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_821A8C90;


int fn_82267F50(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  
  *(int *)(param_1 + 0x4a0) = (int)param_3;
  fn_82F68CC0(param_1 + 0x4b0,param_2,0x110);
  *(undefined ***)(param_1 + 0x5c4) = &lbl_821A8C90;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  fn_825373A0(param_1 + 0x5dc,*param_2);
  *(undefined4 *)(param_1 + 0x628) = 1;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x630) = 3;
  lVar7 = 2;
  iVar5 = param_1 + 0x640;
  do {
    fn_82230300(iVar5,0,0);
    lVar7 = lVar7 + -1;
    iVar5 = iVar5 + 0x38;
  } while (-1 < lVar7);
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(int *)(param_1 + 0x5c8) = param_1;
  *(code **)(param_1 + 0x5cc) = fn_822688A0;
  *(code **)(param_1 + 0x5d0) = fn_82BA02A8;
  *(code **)(param_1 + 0x5d4) = fn_82BA02A8;
  uVar1 = fn_8265C9E0(0x78);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82267460(uVar1,param_1 + 0x5c4,*(undefined4 *)(param_1 + 0x5b4),param_1 + 0x5a4
                              ,param_1 + 0x5a8,param_3,param_4);
  }
  *(undefined4 *)(param_1 + 0x5c0) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x3f,0);
  *(undefined4 *)(param_1 + 0x6e0) = uVar2;
  piVar3 = (int *)fn_8251F720(param_2 + 0x40,0);
  piVar4 = *(int **)(param_1 + 0x6e0);
  *(int **)(param_1 + 0x6e4) = piVar3;
  for (; (piVar4 != (int *)0x0 && (*piVar4 != 0));
      piVar4 = (int *)(-(uint)(piVar4[1] != 0) & (uint)(piVar4 + 1))) {
  }
  for (; (piVar3 != (int *)0x0 && (*piVar3 != 0));
      piVar3 = (int *)(-(uint)(piVar3[1] != 0) & (uint)(piVar3 + 1))) {
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x630) != 0) {
    pfVar6 = (float *)(param_2 + 0x33);
    iVar5 = param_1;
    do {
      pfVar6 = pfVar6 + 1;
      lVar7 = uVar1 + *(uint *)(param_1 + 0x4bc);
      fn_82266230((double)*pfVar6,(double)(float)param_2[0x38],iVar5,0xffffffff821a7d20,lVar7,
                        lVar7,param_2 + 0x39,param_2 + 0x3a);
      uVar1 = uVar1 + 1;
      iVar5 = iVar5 + 0xf0;
    } while ((uVar1 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x630));
  }
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(undefined4 *)(param_1 + 0x620) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  fn_82266230((double)(float)param_2[0x37],(double)(float)param_2[0x38],param_1 + 0x3c0,
                    0xffffffff821a7d28,3,3,param_2 + 0x39,param_2 + 0x3a);
  uVar2 = param_2[0x3c];
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x490) = uVar2;
  fn_82267628(*(undefined4 *)(param_1 + 0x5c0),param_1 + 0x3c0);
  fn_82267E00((double)(float)param_2[0x37],*(undefined4 *)(param_1 + 0x5c0),3);
  return param_1;
}

