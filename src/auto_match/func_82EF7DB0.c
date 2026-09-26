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
extern int fn_82EF75C0();


ulonglong fn_82EF7DB0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = (int)param_5;
  if (iVar4 < 0) {
    param_5 = 0;
  }
  else {
    uVar1 = fn_82EF75C0(param_1,param_2,param_3,param_4);
    if ((int)((uVar1 & 0xffffffff) << 3) <= iVar4 * 5) {
      lVar2 = fn_82EF75C0(param_1 + 8,param_2,param_3 + 8,param_4);
      if ((int)((lVar2 + uVar1 & 0xffffffff) << 3) <=
          (int)((param_5 + (param_5 & 0x7fffffff) * 2 & 0xffffffff) << 1)) {
        param_1 = (param_2 & 0x1fffffff) * 8 + param_1;
        param_3 = (param_4 & 0x1fffffff) * 8 + param_3;
        lVar3 = fn_82EF75C0(param_1 + 8,param_2,param_3 + 8,param_4);
        uVar1 = lVar3 + lVar2 + uVar1;
        if ((int)((uVar1 & 0xffffffff) << 3) <= iVar4 * 7) {
          lVar2 = fn_82EF75C0(param_1,param_2,param_3,param_4);
          param_5 = lVar2 + uVar1;
        }
      }
    }
  }
  return param_5;
}

