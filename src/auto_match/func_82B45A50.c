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

undefined8
fn_82B45A50(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  int iVar1;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  if ((param_2 != 0) &&
     ((((*(int *)(param_2 + 4) == 0xe || (*(int *)(param_2 + 0x1c) == 0)) &&
       (*(int *)(param_2 + 0x14) == 1)) && (*(int *)(param_2 + 0x18) == 1)))) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((iVar1 == 0) || (param_8 = (ulonglong)*(uint *)(iVar1 + 4), *(uint *)(iVar1 + 4) != 9)) {
      uStack00000020 = param_3;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
      fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
    }
    if (((*(int *)(iVar1 + 0x14) == 0) &&
        (iVar1 = *(int *)(param_2 + 0x20), *(int *)(iVar1 + 4) == 1)) &&
       ((*(int *)(iVar1 + 0xc) == 0 &&
        ((iVar1 = *(int *)(iVar1 + 8), *(int *)(iVar1 + 4) == 0xf && (*(int *)(iVar1 + 0x10) == 0)))
        ))) {
      *(char *)param_3 = '\x01' - (*(int *)(iVar1 + 0x18) == 0);
      return 1;
    }
  }
  return 0;
}

