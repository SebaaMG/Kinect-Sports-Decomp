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
extern int fn_826441E0();
extern int fn_82645110();


ulonglong fn_82643A48(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0x3fffffff) * 4;
  if (((((ulonglong)*(uint *)(param_1 + 0x34) <
         (lVar2 + (ulonglong)*(uint *)(param_1 + 0x30) & 0xffffffff)) &&
       (fn_82645110(),
       (ulonglong)*(uint *)(param_1 + 0x34) <
       (lVar2 + (ulonglong)*(uint *)(param_1 + 0x30) & 0xffffffff))) &&
      (uVar1 = fn_826441E0(param_1,param_2), (uVar1 & 0xffffffff) == 0)) &&
     ((ulonglong)*(uint *)(param_1 + 0x34) <
      (lVar2 + (ulonglong)*(uint *)(param_1 + 0x30) & 0xffffffff))) {
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x30);
}

