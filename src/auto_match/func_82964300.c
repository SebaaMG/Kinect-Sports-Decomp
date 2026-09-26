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
extern int fn_8265C940();
extern int fn_82964180();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005F78;


ulonglong fn_82964300(int param_1,uint *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 8) == uVar1) {
    uVar5 = ((ulonglong)uVar1 & 0x7fffffff) << 1;
    if (uVar1 == 0) {
      uVar5 = 0x400;
    }
    lVar4 = fn_8265C940((uVar5 & 0x3fffffff) << 2,0x24810000);
    if (lVar4 != 0) {
      fn_82F68CC0(lVar4,*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 8) << 2);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(((ulonglong)*(uint *)(param_1 + 8) & 0x3fffffff) * 4 + lVar4,0,
                   (uVar5 - *(uint *)(param_1 + 8) & 0x3fffffff) << 2);
    }
    if (param_2 != (uint *)0x0) {
      fn_82BA02A8(param_2);
      fn_82964180(param_2);
    }
    uVar5 = 0xffffffffffffffff;
  }
  else {
    if (((param_2 != (uint *)0x0) &&
        ((*(uint *)(*(int *)(param_2[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0)) &&
       (param_2[2] == 0xffffffff)) {
      uVar1 = *param_2;
      dVar6 = *(double *)(param_2 + 8);
      *param_2 = uVar1 | 0x80;
      dVar3 = lbl_82005758;
      dVar2 = lbl_82005710;
      if ((dVar6 == lbl_82005710) || (dVar6 == lbl_82005758)) {
        *param_2 = uVar1 | 0x81;
      }
      if (ABS(dVar6 - (double)(longlong)(int)dVar6) < lbl_82005F78) {
        *param_2 = *param_2 | 2;
      }
      if (dVar2 <= dVar6) {
        *param_2 = *param_2 | 4;
      }
      if (dVar6 <= dVar2) {
        *param_2 = *param_2 | 8;
      }
      if (ABS(dVar6) <= dVar3) {
        *param_2 = *param_2 | 0x10;
      }
    }
    *(uint **)(*(int *)(param_1 + 8) * 4 + *(int *)(param_1 + 0x14)) = param_2;
    uVar5 = (ulonglong)*(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) + 1;
  }
  return uVar5;
}

