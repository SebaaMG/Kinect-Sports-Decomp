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
extern double _seed_nan;
extern int fn_8277DB10();
extern int fn_8277F4F0();
extern int fn_8277FB80();
extern int fn_8277FDC0();
extern int fn_8277FF98();


void fn_827804A8(int param_1,int param_2,float *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 4) == 0)) goto LAB_8278061c;
  uVar1 = *(uint *)(*(int *)(param_2 + 4) + 4);
  uVar3 = 0xffffffffffffffff;
  if (uVar1 == 0xffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = (ulonglong)
            *(uint *)(*(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x170)) +
                     (uVar1 & 0x3ff) * 8);
  }
  uVar2 = 0;
  param_3[2] = -(_seed_nan);
  param_3[3] = -(_seed_nan);
  do {
    fVar5 = (float)uVar4;
    if ((fVar5 == -(_seed_nan)) ||
       (*(float *)(*(int *)(((uint)(uVar4 >> 8) & 0xbffffc) + *(int *)(param_1 + 0x110)) +
                   ((uint)((uVar4 & 0xbfffffff) << 3) & 0x1ff8) + 4) < *param_3)) break;
    if ((uVar4 & 0x40000000) == 0) {
      param_3[3] = fVar5;
    }
    else {
      param_3[2] = (float)((uint)fVar5 & 0xbfffffff);
    }
    fn_8277DB10(param_1,*(undefined4 *)(param_2 + 4));
    uVar1 = *(uint *)(*(int *)(param_2 + 4) + 4);
    uVar4 = uVar3;
    if (uVar1 != 0xffffffff) {
      uVar4 = (ulonglong)
              *(uint *)(*(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x170)) +
                       (uVar1 & 0x3ff) * 8);
    }
    uVar2 = uVar2 + 1;
  } while ((uVar2 & 0xffffffff) < 2);
  if (*(int *)(*(int *)(param_2 + 4) + 0x14) != 0) {
    fn_8277FF98(param_1,param_2,param_3);
    return;
  }
  if ((int)uVar4 == -1) {
    fVar5 = param_3[3];
    if (fVar5 == -(_seed_nan)) {
      fVar5 = param_3[2];
      if (fVar5 == -(_seed_nan)) goto LAB_827805f4;
      param_3[2] = (float)uVar3;
    }
    else {
      param_3[3] = (float)uVar3;
    }
    uVar4 = (ulonglong)(uint)fVar5;
    fn_8277F4F0(param_1,*(undefined4 *)(param_2 + 4));
  }
LAB_827805f4:
  if ((uVar4 & 0x40000000) == 0) {
    fn_8277FDC0(param_1,param_2,param_3,uVar4);
  }
  else {
    fn_8277FB80();
  }
LAB_8278061c:
  param_3[5] = 0.0;
  return;
}

