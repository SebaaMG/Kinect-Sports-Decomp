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
extern int fn_8223C478();
extern int fn_8232A988();
extern int fn_828E9F18();


void fn_82429A78(undefined8 param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_30 [8];
  double dStack_28;
  
  dStack_28 = (double)*param_3;
  uVar2 = (ulonglong)dStack_28 & 0xfffffffffffff;
  uVar3 = (ulonglong)dStack_28 >> 0x34 & 0x7ff;
  if ((((ulonglong)dStack_28 & 0x8000000000000000) == 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 0x3fc;
    if (0 < (longlong)uVar3) {
      if (uVar3 < 8) {
        fn_8232A988(auStack_30,uVar3,0,3);
        uVar2 = uVar2 >> 0x2f;
      }
      else {
        fn_8232A988(auStack_30,7,0,3);
        uVar2 = 0x1f;
      }
      goto LAB_82429b4c;
    }
    if (-uVar3 < 0x40) {
      fn_8232A988(auStack_30,0,0,3);
      uVar2 = ((uVar2 | 0x10000000000000) >> (-uVar3 + 1 & 0x7f)) >> 0x2f;
      goto LAB_82429b4c;
    }
  }
  fn_8232A988(auStack_30,0,0,3);
  uVar2 = 0;
LAB_82429b4c:
  fn_8232A988(auStack_30,uVar2,3,5);
  fn_8223C478(param_2,8,0);
  lVar1 = fn_8223A9E0(auStack_30,0,3);
  uVar2 = fn_8223A9E0(auStack_30,3,5);
  fn_828E9F18(param_2,lVar1 << 5 | uVar2,8);
  return;
}

