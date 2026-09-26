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
extern int fn_82230300();
extern int fn_822305B0();
extern int fn_82F622A8();


byte fn_822304F8(undefined4 *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  
  if (0xfffffffe < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196214);
  }
  if ((ulonglong)(uint)param_1[5] < (param_2 & 0xffffffff)) {
    fn_822305B0(param_1,param_2,param_1[4]);
  }
  else if ((param_3 == '\0') || (0xf < (param_2 & 0xffffffff))) {
    if ((param_2 & 0xffffffff) == 0) {
      param_1[4] = 0;
      if (0xf < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      *(undefined1 *)param_1 = 0;
    }
  }
  else {
    uVar1 = (ulonglong)(uint)param_1[4];
    if ((param_2 & 0xffffffff) < (ulonglong)(uint)param_1[4]) {
      uVar1 = param_2;
    }
    fn_82230300(param_1,1,uVar1);
  }
  return -(param_2 != 0) & 1;
}

