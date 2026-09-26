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
extern int fn_8263BFD0();
extern int fn_8265C940();
extern int fn_8265C990();
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


uint fn_8263C7F0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uStack_60;
  int iStack_5c;
  
  lVar4 = 0;
  uVar1 = fn_8265C940(0x34,0x64800000);
  if (uVar1 != 0) {
    fn_8263BFD0(param_8,param_1,param_2,param_3,param_4,param_5,param_6,2);
    uVar5 = ((~param_5 & 0xffffffff) >> 2 & 1 | 2) << 0x1c | 0x8c800000;
    uVar2 = fn_8265C940(uStack_60,uVar5);
    if (uVar2 == 0) {
      uVar3 = 0x24800000;
      uVar2 = uVar1;
    }
    else {
      if ((iStack_5c == 0) || (lVar4 = fn_8265C940(iStack_5c,uVar5), lVar4 != 0)) {
        *(uint *)(uVar1 + 0x20) = uVar2 & 0xfffff000 | *(uint *)(uVar1 + 0x20) & 0xfff;
        *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xfff | (uint)lVar4 & 0xfffff000;
        return uVar1;
      }
      fn_8265C990(uVar1,0x24800000);
      uVar3 = 0xffffffffb1800000;
    }
    fn_8265C990(uVar2,uVar3);
  }
  return 0;
}

