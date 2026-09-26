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
extern int fn_82CE2AE0();
extern int fn_82CE3410();


longlong fn_82CE2100(int param_1,uint param_2,undefined8 param_3,ulonglong param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  longlong lVar1;
  int aiStack_50 [20];
  
  aiStack_50[0] = 0;
  if (param_2 < 0x440) {
    if (param_1 != 0) {
      return -0x7ff8ff86;
    }
    lVar1 = XamAlloc(0,0x440,aiStack_50);
    param_1 = aiStack_50[0];
    if (lVar1 < 0) goto LAB_82ce21b8;
  }
  lVar1 = fn_82CE2AE0(param_1,0xffffffff8323a8f0,param_3,param_5,param_6,param_7,*param_8,
                            (~param_4 & 0xffffffff) >> 2 & 1);
  if ((-1 < lVar1) && (lVar1 = fn_82CE3410(param_1), -1 < lVar1)) {
    *param_8 = *(undefined4 *)(param_1 + 0x14);
  }
LAB_82ce21b8:
  if (aiStack_50[0] != 0) {
    XamFree();
  }
  return lVar1;
}

