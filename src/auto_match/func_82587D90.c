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
extern int fn_8251F720();
extern int fn_82588380();
extern int fn_82A1E230();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821961F0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B86C;
extern unsigned int lbl_8326B874;
extern unsigned int lbl_8326B878;
extern unsigned int lbl_8326B87C;
extern unsigned int lbl_8326B8D8;
extern unsigned int lbl_8326B8DC;
extern unsigned int lbl_8326B8E0;
extern unsigned int lbl_8326B8E4;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_8326B8F8;
extern unsigned int uRam8326b854;
extern unsigned int uRam8326b858;
extern unsigned int uRam8326b864;
extern unsigned int uRam8326b868;
extern unsigned int uRam8326b870;


void fn_82587D90(void)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = fn_82A1E230();
  if (iVar4 == 2) {
    uVar9 = 1;
  }
  else if (iVar4 == 7) {
    uVar9 = 2;
  }
  else if (iVar4 == 8) {
    uVar9 = 4;
  }
  else {
    if (iVar4 != 10) {
      uVar9 = 0;
      lbl_8326B8F8 = 0;
      goto LAB_82587dc8;
    }
    uVar9 = 3;
  }
  lbl_8326B8F8 = 1;
LAB_82587dc8:
  iVar4 = 0;
  do {
    iVar8 = lbl_8326B8E0;
    if ((((uVar9 != 1) && (iVar8 = lbl_8326B8E4, uVar9 != 2)) && (iVar8 = lbl_8326B8D8, 2 < uVar9))
       && (uVar9 < 5)) {
      iVar8 = lbl_8326B8DC;
    }
    uVar5 = fn_8251F720(iVar4 + iVar8,0);
    *(undefined4 *)((int)&lbl_8326B8E8 + iVar4) = uVar5;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 8);
  fn_82588380();
  uRam8326b864 = 0;
  uRam8326b854 = 0;
  puVar7 = (undefined4 *)0x831e7820;
  lbl_8326B85C = lbl_821CA460;
  lbl_8326B860 = lbl_821CA460;
  lbl_8326B850 = 0;
  puVar6 = (undefined4 *)0x832700d8;
  uRam8326b858 = lbl_821961F0;
  lbl_8326B874 = *(float *)(lbl_8326B8E8 + 0x10) * lbl_8218E8E8;
  lbl_8326B878 = *(float *)(lbl_8326B8E8 + 0x10) * lbl_8218E8E8;
  uRam8326b868 = lbl_821CC160;
  uRam8326b870 = lbl_821916FC;
  lbl_8326B87C = lbl_821CC160;
  lbl_8326B86C = lbl_821CC160;
  do {
    psVar3 = (short *)*puVar7;
    iVar4 = 0;
    sVar2 = *psVar3;
    psVar1 = psVar3;
    while (sVar2 != 0) {
      psVar1 = psVar1 + 6;
      iVar4 = iVar4 + 1;
      sVar2 = *psVar1;
    }
    puVar6[1] = iVar4;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 2;
    *puVar6 = psVar3;
  } while ((int)puVar7 < -0x7ce187d8);
  return;
}

