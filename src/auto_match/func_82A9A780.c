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
extern int fn_82AAC750();
extern int fn_82AAC760();
extern int fn_82F68CC0();


void fn_82A9A780(int *param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((ulonglong)(uint)param_1[2] < (param_2 & 0xffffffff)) {
    uVar2 = ((ulonglong)(uint)param_1[2] & 0x7fffffff) << 1;
    if (uVar2 < (param_2 & 0xffffffff)) {
      uVar2 = param_2;
    }
    lVar1 = fn_82AAC750(param_1,uVar2 * 0x28);
    if (lVar1 == 0) {
      *param_3 = 0x8007000e;
    }
    else {
      param_1[2] = (int)uVar2;
      if (*param_1 != 0) {
        fn_82F68CC0(lVar1,*param_1,(ulonglong)(uint)param_1[1] * 0x28);
        fn_82AAC760(param_1,*param_1);
      }
      *param_1 = (int)lVar1;
    }
  }
  return;
}

