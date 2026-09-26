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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F728D0();
extern int fn_82F73308();
extern unsigned int lbl_82169B94;
extern unsigned int lbl_82169B98;
extern unsigned int lbl_82169B9C;
extern unsigned int lbl_82169BA0;
extern unsigned int lbl_82169BA4;
extern unsigned int lbl_82169BA8;
extern unsigned int lbl_82169BAC;
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 * fn_82F73368(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uStack_20;
  uint uStack_1c;
  
  if ((longlong)*lbl_832635C0 == 0) {
    fn_82F728D0(param_1,1);
    return param_1;
  }
  uVar2 = (longlong)*lbl_832635C0 - 0x41;
  lbl_832635C0 = lbl_832635C0 + 1;
  if (0xe < (uVar2 & 0xffffffff)) {
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 4) = 2;
    *(undefined4 *)param_1 = 0;
    return param_1;
  }
  uStack_20 = 0;
  uStack_1c = uStack_1c & 0xffff | 0x2000000;
  uVar1 = (ulonglong)lbl_832635D0;
  if (((~uVar1 & 0xffffffff) >> 1 & 1) == 0) goto code_r0x82f7350c;
  uVar2 = uVar2 & 0xfffffffe;
  if (uVar2 == 0) {
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169B94);
code_r0x82f73500:
      uVar2 = uVar2 + 2;
    }
    else {
      uVar2 = ZEXT48(lbl_82169B94);
    }
  }
  else if (uVar2 == 2) {
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169B98);
      goto code_r0x82f73500;
    }
    uVar2 = ZEXT48(lbl_82169B98);
  }
  else if (uVar2 == 4) {
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169BA0);
      goto code_r0x82f73500;
    }
    uVar2 = ZEXT48(lbl_82169BA0);
  }
  else if (uVar2 == 6) {
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169B9C);
      goto code_r0x82f73500;
    }
    uVar2 = ZEXT48(lbl_82169B9C);
  }
  else if (uVar2 == 8) {
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169BA4);
      goto code_r0x82f73500;
    }
    uVar2 = ZEXT48(lbl_82169BA4);
  }
  else if (uVar2 == 0xc) {
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169BA8);
      goto code_r0x82f73500;
    }
    uVar2 = ZEXT48(lbl_82169BA8);
  }
  else {
    if (uVar2 != 0xe) goto code_r0x82f7350c;
    if ((~uVar1 & 1) == 0) {
      uVar2 = ZEXT48(lbl_82169BAC);
      goto code_r0x82f73500;
    }
    uVar2 = ZEXT48(lbl_82169BAC);
  }
  fn_82F73308(&uStack_20,uVar2);
code_r0x82f7350c:
  *param_1 = CONCAT44(uStack_20,uStack_1c);
  return param_1;
}

