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
extern int fn_82A3FF60();
extern int fn_82A43408();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;


undefined8 fn_82A68C70(double param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4)

{
  float fVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  longlong lVar5;
  uint uVar6;
  double dVar7;
  
  param_2[4] = (float)param_1;
  lVar5 = ((ulonglong)(uint)param_2[1] & 0x3fffffff) << 2;
  if (0x3fffffff < (uint)param_2[1]) {
    lVar5 = -1;
  }
  uVar2 = fn_82A3FF60(0xffffffff83219d50,lVar5,0x20970005,0);
  param_2[3] = (int)uVar2;
  fVar1 = lbl_82002AE0;
  if ((uVar2 & 0xffffffff) != 0) {
    dVar7 = (double)lbl_82002AE0;
    if ((param_4 & 0xffffffff) == 0) {
      uVar6 = 0;
      if (param_2[1] != 0) {
        iVar4 = 0;
        do {
          uVar6 = uVar6 + 1;
          *(float *)(iVar4 + param_2[3]) = fVar1;
          iVar4 = iVar4 + 4;
        } while (uVar6 < (uint)param_2[1]);
      }
    }
    else {
      fn_82F68CC0(uVar2,param_4,param_2[1] << 2);
    }
    lVar5 = ((longlong)(int)param_2[1] * (longlong)(int)param_2[2] & 0x3fffffffU) << 2;
    if (0x3fffffff < ((longlong)(int)param_2[1] * (longlong)(int)param_2[2] & 0xffffffffU)) {
      lVar5 = -1;
    }
    iVar4 = fn_82A3FF60(0xffffffff83219d50,lVar5,0x20970005,0);
    param_2[5] = iVar4;
    if (iVar4 != 0) {
      lVar5 = fn_82A3FF60(0xffffffff83219d50,
                                ((longlong)(int)param_2[1] * (longlong)(int)param_2[2] + 3U &
                                0x3fffffff) << 2,0x20970005,0);
      param_2[6] = (int)lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(int *)*param_2 + 0xc))
                  ((int *)*param_2,0,lVar5,
                   ((longlong)(int)param_2[1] * (longlong)(int)param_2[2] + 3U & 0x3fffffff) << 2);
        fn_82F68CC0(param_2[5],(ulonglong)(uint)param_2[6] + 0xc,
                     ((longlong)(int)param_2[1] * (longlong)(int)param_2[2] & 0x3fffffffU) << 2);
        if (((double)(float)param_2[4] == dVar7) && ((param_4 & 0xffffffff) == 0)) {
          return 0;
        }
        uVar3 = fn_82A43408(param_2,0x1337f001);
        return uVar3;
      }
    }
  }
  return 0xffffffff8007000e;
}

