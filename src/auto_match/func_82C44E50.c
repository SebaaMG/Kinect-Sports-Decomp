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
extern int fn_82A1F198();
extern int fn_82C561E8();


ulonglong fn_82C44E50(int *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_1[4] != 0) {
      RtlEnterCriticalSection();
    }
    uVar1 = param_1[1];
    param_1[1] = param_1[1] + (int)param_2;
    if ((uint)param_1[1] <= (uint)(param_1[2] + -1 + *param_1)) {
      param_1[1] = param_1[1] + 0x1000U & 0xfffff000;
      if (param_1[4] != 0) {
        RtlLeaveCriticalSection();
      }
      fn_82C561E8(param_1[3],(ulonglong)uVar1,0,0);
      return (ulonglong)uVar1;
    }
    param_1[1] = param_1[1] - (int)param_2;
    if (param_1[4] != 0) {
      RtlLeaveCriticalSection();
    }
  }
  uVar2 = fn_82A1F198(param_2,0xffffffffffffffff,0,0x20000004);
  fn_82C561E8(param_1[3],uVar2,0,0);
  return uVar2;
}

