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
#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_823588D0();
extern int fn_82396230();
extern int fn_82396620();
extern int fn_82399990();
extern int fn_82399D48();
extern int fn_82399F48();
extern int fn_8239A2D8();
extern int fn_8239A6B0();
extern int fn_8239A9D8();
extern int fn_8239C4D8();
extern int fn_8239C7F0();
extern int fn_8239D1D0();
extern int fn_8239FE38();
extern int fn_82566018();
extern int fn_8265CA20();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_823962C8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  *(float *)(param_2 + 0x878) = (float)(param_1 + (double)*(float *)(param_2 + 0x878));
  (**(code **)(**(int **)(param_2 + 0x2e0) + 0x70))();
  iVar2 = *(int *)(param_2 + 0xd4);
  if ((*(int *)(iVar2 + 0x44) != 0) && (*(int *)(*(int *)(iVar2 + 0x44) + 0xc) == 0)) {
    iVar3 = *(int *)(iVar2 + 0x44);
    *(undefined4 *)(iVar2 + 0x44) = 0;
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 0) {
        fn_822315A0();
      }
      fn_8265CA20(iVar3);
    }
  }
  fn_82396230(param_2);
  fVar7 = lbl_821CC160;
  if ((*(int *)(param_2 + 0x8c0) != 0) && (*(int *)(param_2 + 0x8c8) != 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x8c8) - param_1);
    fVar5 = -fVar1;
    fVar6 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar6 = fVar1;
    }
    *(float *)(param_2 + 0x8c8) = fVar6;
    if (fVar6 == fVar7) {
      fn_82566018(param_2 + 0x8a8,(undefined4 *)(param_2 + 0x8c0));
      iVar2 = *(int *)(param_2 + 0x8c4);
      *(undefined4 *)(param_2 + 0x8c4) = 0;
      *(undefined4 *)(param_2 + 0x8c0) = 0;
      if (iVar2 != 0) {
        fn_822315A0();
      }
    }
  }
  uVar4 = *(undefined4 *)(param_2 + 0x174);
  fn_8239A6B0(param_1,param_2);
  fn_8239A9D8(param_2,0);
  fn_823588D0(param_1,param_2);
  if (*(int *)(param_2 + 0x178) != 2) {
    fn_82399D48(param_2,uVar4);
  }
  fn_82399F48(param_2);
  fn_8239FE38(param_1,*(undefined4 *)(param_2 + 0x2dc));
  fn_8239A2D8(param_2);
  fn_8239C7F0(param_1,param_2);
  if ((*(int *)(param_2 + 0x178) != 0) &&
     ((*(int *)(param_2 + 0x54) == 0x11 || (*(int *)(param_2 + 0x54) == 5)))) {
    fn_8239C4D8(param_2);
  }
  if (*(int *)(param_2 + 0x54) == 0x10) {
    *(undefined4 *)(param_2 + 0x2a0) = 0;
    *(undefined4 *)(param_2 + 0x240) = 0;
    fn_82396230(param_2);
    fn_8239D1D0(param_2);
    fn_82396620(param_2);
    if (*(int *)(param_2 + 0x178) == 0) {
      fn_82399990(param_2);
    }
    uVar8 = 2;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

