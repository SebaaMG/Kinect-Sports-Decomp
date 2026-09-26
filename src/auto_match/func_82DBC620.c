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
extern int fn_82CF69B8();
extern int fn_830819D8();


void fn_82DBC620(uint *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(ushort *)(param_1 + 1) + param_4;
  uVar1 = *(ushort *)(param_1 + 1) - param_2;
  if ((int)(*(ushort *)((int)param_1 + 6) & 0x3fff) < (int)lVar2) {
    lVar3 = ((ulonglong)*(ushort *)((int)param_1 + 6) & 0x3fff) << 1;
    if ((int)lVar3 <= (int)lVar2) {
      lVar3 = lVar2;
    }
    fn_830819D8(param_1,lVar3,0x30);
  }
  lVar3 = (param_2 + (param_2 & 0x7fffffff) * 2 & 0xfffffff) * 0x10;
  fn_82CF69B8((param_2 + param_4 + (param_2 + param_4 & 0x7fffffff) * 2 & 0xfffffff) * 0x10 +
               (ulonglong)*param_1,(ulonglong)*param_1 + lVar3,
               (uVar1 + (uVar1 & 0x7fffffff) * 2 & 0xfffffff) << 4);
  fn_82CF69B8(lVar3 + (ulonglong)*param_1,param_3,
               (param_4 + (param_4 & 0x7fffffff) * 2 & 0xfffffff) << 4);
  *(short *)(param_1 + 1) = (short)lVar2;
  return;
}

