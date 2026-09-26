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
extern unsigned int *auStack_40;
extern int fn_82A1DDC0();
extern int fn_82A453D0();


longlong fn_82A47A60(int param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint auStack_40 [16];
  
  uVar2 = 0;
  auStack_40[0] = 0;
  lVar1 = fn_82A453D0(*(undefined4 *)(param_1 + 0x1d8),0,param_2,auStack_40);
  lVar3 = lVar1;
  if ((ulonglong)*(uint *)(param_1 + 0x1e4) < (lVar1 + param_3 & 0xffffffffU)) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x1e4) - param_3;
    uVar2 = lVar1 - lVar3;
  }
  fn_82A1DDC0(((longlong)*(int *)(param_1 + 0x40) * (longlong)(int)param_3 & 0x7fffffffU) * 2
                    + (ulonglong)*(uint *)(param_1 + 0x1e0),auStack_40[0],
                    ((longlong)*(int *)(param_1 + 0x40) * (longlong)(int)lVar3 & 0x7fffffffU) << 1);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82A1DDC0(*(undefined4 *)(param_1 + 0x1e0),
                      ((longlong)*(int *)(param_1 + 0x40) * (longlong)(int)lVar3 & 0x7fffffffU) * 2
                      + (ulonglong)auStack_40[0],
                      ((longlong)*(int *)(param_1 + 0x40) * (longlong)(int)uVar2 & 0x7fffffffU) << 1
                     );
  }
  return lVar1;
}

