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
extern int fn_8223A9E0();
extern int fn_8232A988();
extern int fn_823B4900();
extern unsigned int lbl_82195620;
extern unsigned int uStack_30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_823298E0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 uStack_30;
  
  uVar1 = fn_823B4900(param_2,0x21,0,0);
  uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) & 0xffffff)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_30 = (ulonglong)(((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
  fn_8232A988(&uStack_30,uVar1 >> 0x20 & 1,0,1);
  fn_8232A988(&uStack_30,uVar1 >> 0x18 & 0xff,1,8);
  fn_8232A988(&uStack_30,uVar1 & 0xffffff,9,0x18);
  lVar2 = fn_8223A9E0(&uStack_30,0,1);
  lVar3 = fn_8223A9E0(&uStack_30,1,8);
  lVar4 = fn_8223A9E0(&uStack_30,9,0x18);
  if (lVar3 == 0) {
    dVar6 = lbl_82195620;
    if (lVar4 == 0) goto LAB_823299f4;
    uVar5 = 0x381;
    for (uVar1 = lVar4 << 0x1c; (uVar1 & 0xfff0000000000000) == 0; uVar1 = uVar1 << 1) {
      uVar5 = uVar5 - 1;
    }
    uVar1 = uVar1 & 0xfffffffffffff;
  }
  else {
    uVar5 = lVar3 + 0x380;
    uVar1 = lVar4 << 0x1c;
  }
  dVar6 = (double)((lVar2 << 0xb | uVar5) << 0x34 | uVar1);
LAB_823299f4:
  if (param_3 != (float *)0x0) {
    *param_3 = (float)dVar6;
  }
  return;
}

