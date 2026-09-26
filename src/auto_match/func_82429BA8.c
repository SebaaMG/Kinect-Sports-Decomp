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
extern unsigned int *auStack_30;
extern int fn_8223A9E0();
extern int fn_8232A988();
extern int fn_823B4900();
extern unsigned int lbl_82195518;


void fn_82429BA8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_30 [24];
  
  uVar1 = fn_823B4900(param_2,8,0,0);
  fn_8232A988(auStack_30,uVar1 >> 5 & 7,0,3);
  fn_8232A988(auStack_30,uVar1 & 0x1f,3,5);
  lVar2 = fn_8223A9E0(auStack_30,0,3);
  lVar3 = fn_8223A9E0(auStack_30,3,5);
  if (lVar2 == 0) {
    dVar4 = lbl_82195518;
    if (lVar3 == 0) goto LAB_82429c90;
    lVar2 = 0x3fd;
    for (uVar1 = lVar3 << 0x2f; (uVar1 & 0xfff0000000000000) == 0; uVar1 = uVar1 << 1) {
      lVar2 = lVar2 + -1;
    }
    uVar1 = uVar1 & 0xfffffffffffff;
  }
  else {
    lVar2 = lVar2 + 0x3fc;
    uVar1 = lVar3 << 0x2f;
  }
  dVar4 = (double)(lVar2 << 0x34 | uVar1);
LAB_82429c90:
  if (param_3 != (float *)0x0) {
    *param_3 = (float)dVar4;
  }
  return;
}

