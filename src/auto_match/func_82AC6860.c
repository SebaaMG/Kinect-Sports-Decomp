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

void fn_82AC6860(undefined8 param_1,uint param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = (uint)param_4 & 0xfffffffe;
    param_2 = param_2 & 0xfffffffe;
    puVar2 = (uint *)(uVar1 + 0x24);
    *(uint *)(param_2 + 0x24) = *puVar2;
    *(uint *)(*puVar2 & 0xfffffffe) = param_2;
    *(uint *)(param_2 + 0x28) = uVar1;
    *puVar2 = param_2 + 0x28;
    return;
  }
  if ((param_3 & 0xffffffff) != 1) {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(param_1,0x12c0,&stack0x00000020);
  }
  uVar1 = (uint)param_4 & 0xfffffffe;
  param_2 = param_2 & 0xfffffffe;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(uVar1 + 0x28);
  *(uint *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = param_2 + 0x28;
  *(uint *)(param_2 + 0x24) = uVar1 + 0x28;
  *(uint *)(uVar1 + 0x28) = param_2;
  return;
}

