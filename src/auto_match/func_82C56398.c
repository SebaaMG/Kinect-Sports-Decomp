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
extern int fn_82C53960();
extern int fn_82F68B7C();
extern unsigned int uStack_20;


ulonglong fn_82C56398(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uStack_20;
  
  if (param_1[0xf] != 0) {
    uVar2 = fn_82F68B7C(param_1 + 0xd);
    return uVar2;
  }
  if (param_2 < 0xfffffffb) {
    RtlEnterCriticalSection(*param_1);
    uVar1 = param_2 + 3 & 0xfffffffc;
    if (uVar1 < 0xffffffff) {
      uVar2 = fn_82C53960(uVar1,0);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        RtlEnterCriticalSection(*param_1);
        RtlLeaveCriticalSection(*param_1);
      }
    }
    else {
      uVar2 = (ulonglong)uStack_20;
    }
    RtlLeaveCriticalSection(*param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

