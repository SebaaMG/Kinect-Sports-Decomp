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
extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * fn_82AC65F0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  ulonglong uStack00000040;
  ulonglong uStack00000048;
  
  puVar1 = (uint *)*param_1;
  do {
    if (puVar1 == (uint *)0x0) {
      uStack00000020 = param_3;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
      fn_82AA64F8(*(undefined4 *)(*(int *)((uint)param_1 & 0xfffff000) + 0x94),0x12c0,
                        &stack0x00000020);
    }
    uVar2 = *puVar1;
    param_7 = (ulonglong)uVar2;
    if ((uVar2 & 0x40000000) == 0) {
LAB_82ac6614:
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if ((uVar2 & 0xe000000) != 0) goto LAB_82ac6614;
    }
    param_8 = 0;
    if ((bVar3) && (param_8 = (ulonglong)uVar2 & 0x1ffe000, param_8 == 0xe000)) {
      return puVar1;
    }
    puVar1 = (uint *)puVar1[1];
  } while( true );
}

