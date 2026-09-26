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
extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82E44260();
extern int fn_82F68CC0();


undefined8 fn_82E44DA0(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x8000000) != 0) {
    return 0xffffffff8007000e;
  }
  if ((int)param_1[2] < (int)param_2 + 1) {
    if ((uVar1 & 0x30000000) != 0x20000000) {
      uVar4 = (ulonglong)(uVar1 >> 0x13) & 0xc0;
      if ((uVar1 & 0x80000000) == 0) {
        uVar4 = 0;
      }
      uVar4 = uVar4 + param_2 + 1;
      if ((uVar4 & 0xffffffff) < 0x4000001) {
        uVar2 = fn_82A2A360();
        lVar3 = fn_82A28568(uVar2,0,(uVar4 & 0x7fffffff) << 1);
        if (lVar3 == 0) {
          param_1[1] = 0;
          *param_1 = *param_1 | 0x8000000;
          return 0xffffffff8007000e;
        }
        if (param_1[3] != 0) {
          fn_82F68CC0(lVar3,param_1[3],param_1[1] << 1);
          fn_82E44260(param_1);
          *param_1 = *param_1 & 0xbfffffff;
        }
        param_1[3] = (uint)lVar3;
        param_1[2] = (uint)uVar4;
        goto LAB_82e44eb0;
      }
    }
    *param_1 = uVar1 | 0x8000000;
    uVar2 = 0xffffffff8007000e;
  }
  else {
LAB_82e44eb0:
    uVar2 = 0;
  }
  return uVar2;
}

