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
extern int fn_82E2AC98();
extern int fn_82F64CE0();
extern int fn_82F68CC0();


undefined8
fn_82E2B720(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined4 *param_5)

{
  short *psVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  
  uVar3 = 0;
  RtlEnterCriticalSection(param_1 + 8);
  psVar2 = (short *)fn_82E2AC98(param_1,param_2);
  if (psVar2 == (short *)0x0) {
    uVar3 = 0xffffffffc00d36e6;
  }
  else if (*psVar2 == 0x1f) {
    uVar1 = fn_82F64CE0(*(undefined4 *)(psVar2 + 4));
    if ((uVar1 & 0xffffffff) < 0x7ffffffe) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = (int)uVar1;
      }
      if ((param_4 & 0xffffffff) < (uVar1 + 1 & 0xffffffff)) {
        uVar3 = 0xffffffff8007007a;
      }
      else {
        fn_82F68CC0(param_3,*(undefined4 *)(psVar2 + 4),(uVar1 + 1 & 0x7fffffff) << 1);
      }
    }
    else {
      uVar3 = 0xffffffff8007000e;
    }
  }
  else {
    uVar3 = 0xffffffffc00d36bd;
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar3;
}

