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
extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern int fn_82967E78();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_130;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


undefined8
fn_82979498(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  uint uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  undefined1 auStack_150 [32];
  int iStack_130;
  undefined1 auStack_120 [288];
  
  uStack00000014 = (undefined4)param_1;
  uStack0000001c = (undefined4)param_2;
  if (param_3 != 0) {
    if (4 < param_3) {
      return 0;
    }
    uVar2 = 1;
    uStack00000024 = param_3;
    uStack0000002c = param_4;
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    uStack00000044 = param_7;
    uStack0000004c = param_8;
    if (1 < param_3) {
      do {
        iVar1 = fn_82967E78(param_1);
        if (iVar1 == 0) break;
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)param_3);
    }
    if ((uVar2 & 0xffffffff) != (ulonglong)param_3) {
      iVar1 = param_3 << 2;
      iStack_130 = iVar1;
      fn_82F68CC0(auStack_150,param_2,iVar1);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_120,0,iVar1);
    }
  }
  return 1;
}

