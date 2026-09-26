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
extern unsigned int *auStack_230;
extern int fn_82F65350();
extern int fn_82F68CC0();


void fn_82424C80(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_230 [560];
  
  uVar6 = 2;
  uVar5 = param_1;
  do {
    uVar5 = uVar5 + 0x1f0;
    if ((uVar5 & 0xffffffff) == (param_2 & 0xffffffff)) {
      return;
    }
    uVar3 = 0x7fff;
    uVar1 = fn_82F65350();
    uVar1 = uVar1 & 0x7fff;
    if (0x7fff < uVar6) {
      do {
        if (uVar3 == 0xffffffff) break;
        uVar2 = fn_82F65350();
        uVar1 = (uVar1 & 0x1ffff) << 0xf | uVar2 & 0xffffffff00007fff;
        uVar3 = uVar3 << 0xf | 0x7fff;
      } while (uVar3 < uVar6);
    }
    lVar4 = (uVar1 - (longlong)(int)((uVar1 & 0xffffffff) / (ulonglong)uVar6) * (longlong)(int)uVar6
            ) * 0x1f0 + param_1;
    fn_82F68CC0(auStack_230,uVar5,0x1f0);
    fn_82F68CC0(uVar5,lVar4,0x1f0);
    fn_82F68CC0(lVar4,auStack_230,0x1f0);
    uVar6 = uVar6 + 1;
  } while( true );
}

