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
extern int fn_82E26DD0();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


void fn_82E26E28(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  
  uStack00000014 = (uint)param_1;
  uStack00000024 = (uint)param_3;
  uStack0000001c = (uint)param_2;
  uStack0000002c = (uint)param_4;
  if (((((param_3 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) ||
      ((param_1 & 0xffffffff) == 0)) || ((param_2 & 0xffffffff) == 0)) {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)param_6 = 0;
  }
  else {
    fn_82E26DD0(param_1,param_2,&stack0x00000014,&stack0x0000001c);
    fn_82E26DD0(param_3,param_4,&stack0x00000024,&stack0x0000002c);
    uVar2 = (ulonglong)uStack00000014;
    for (uVar1 = (ulonglong)uStack0000001c; (0xffff < uVar2 || (0xffff < uVar1)); uVar1 = uVar1 >> 1
        ) {
      uVar2 = uVar2 >> 1;
    }
    uVar4 = (ulonglong)uStack00000024;
    for (uVar3 = (ulonglong)uStack0000002c; (0xffff < uVar4 || (0xffff < uVar3)); uVar3 = uVar3 >> 1
        ) {
      uVar4 = uVar4 >> 1;
    }
    fn_82E26DD0((longlong)(int)uVar2 * (longlong)(int)uVar4,
                  (longlong)(int)uVar1 * (longlong)(int)uVar3,param_5,param_6);
  }
  return;
}

