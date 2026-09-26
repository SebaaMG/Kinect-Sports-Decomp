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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82297DB0();
extern int fn_822AAF60();
extern int fn_823210A8();
extern int fn_82358058();
extern int fn_82359BB0();
extern int fn_82359C18();
extern int fn_82362C30();
extern int fn_82362CC8();
extern int fn_82365580();
extern int fn_824040A0();
extern int fn_82456048();
extern int fn_82456B18();
extern int fn_82457610();
extern int fn_82458DC8();
extern int fn_824C5630();
extern int fn_82529320();
extern int fn_825521F0();
extern int fn_8265CA20();
extern unsigned int lbl_821B2B18;
extern unsigned int lbl_821B2C44;
extern unsigned int lbl_821CC160;


void fn_82362D40(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined1 auStack_50 [16];
  undefined **appuStack_40 [4];
  undefined ***pppuStack_30;
  
  *param_1 = &lbl_821B2B18;
  if (param_1[0x21] != 0) {
    fn_824040A0();
  }
  pppuStack_30 = appuStack_40;
  appuStack_40[0] = &lbl_821B2C44;
  uVar1 = (*(undefined4 **)param_1[2])[1];
  fn_822AAF60(**(undefined4 **)param_1[2],appuStack_40);
  pppuStack_30 = appuStack_40;
  appuStack_40[0] = &lbl_821B2C44;
  fn_822AAF60(uVar1,appuStack_40);
  fn_82297DB0(param_1 + 0x29d,1,0);
  if (param_1[0x21c] != 0) {
    fn_822315A0();
  }
  if (param_1[0x217] != 0) {
    fn_8265CA20();
  }
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  if (param_1[0x20f] != 0) {
    fn_8265CA20();
  }
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  if (param_1[0x20b] != 0) {
    fn_823210A8(param_1[0x20b],param_1[0x20c]);
    fn_8265CA20(param_1[0x20b]);
  }
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20b] = 0;
  pppuStack_30 = (undefined ***)0x0;
  dVar5 = (double)lbl_821CC160;
  fn_825521F0(dVar5,(double)(float)param_1[0x1fc]);
  fn_82359C18(param_1 + 0x200);
  if (param_1[0x1f9] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1f7] != 0) {
    fn_822315A0();
  }
  piVar3 = (int *)param_1[0x1f2];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3,param_1 + 0x1ee != piVar3);
    param_1[0x1f2] = 0;
  }
  fn_82457610(param_1 + 0x1e6);
  fn_82456B18(param_1 + 0x1c6);
  if (param_1[0x1c2] != 0) {
    fn_822315A0();
  }
  puVar4 = param_1 + 0x1c1;
  lVar2 = 1;
  do {
    puVar4 = puVar4 + -10;
    fn_82362CC8(puVar4);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  fn_82529320(param_1[0x1ab],0);
  fn_82456048(param_1 + 0x188);
  fn_82456048(param_1 + 0x16d);
  fn_82456048(param_1 + 0x152);
  fn_82458DC8(dVar5,param_1 + 0x14e);
  fn_824C5630(param_1 + 0x13c);
  lVar2 = 1;
  piVar3 = param_1 + 0x107;
  do {
    piVar3 = piVar3 + -2;
    if (*piVar3 != 0) {
      fn_822315A0();
    }
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  fn_82359BB0(param_1 + 0xfe);
  if (param_1[0xfc] != 0) {
    fn_822315A0();
  }
  puVar4 = param_1 + 0x84;
  lVar2 = 1;
  do {
    puVar4 = puVar4 + -0x11;
    fn_82362C30(puVar4);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  fn_82365580(auStack_50,param_1 + 0x5e,*(undefined4 *)param_1[0x5f]);
  fn_8265CA20(param_1[0x5f]);
  fn_82358058(param_1);
  return;
}

