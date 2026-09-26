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
extern int fn_829E0B08();
extern int fn_829E11B8();
extern int fn_829E1800();
extern int fn_82A2B2F0();
extern int fn_82A2B3B0();
extern int fn_82F691F0();
extern unsigned int uStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint fn_829E18D0(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar1 = fn_829E0B08(*(undefined8 *)(param_1 + 8));
  if (-1 < (int)uVar1) {
    if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_2,0,param_3);
    }
    uVar1 = fn_829E11B8(auStack_40);
    if (((-1 < (int)uVar1) && (uVar1 = fn_829E1800(param_1,auStack_40), -1 < (int)uVar1)) &&
       (uVar1 = fn_82A2B2F0(0xffffffff82057520,0), -1 < (int)uVar1)) {
      uVar1 = fn_82A2B3B0(0xffffffff82057520,*(undefined8 *)(param_1 + 8),(int)param_2,
                                (((U64)(uStack_38) >> 0) & 0xFFFFFFFF),0);
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return uVar1;
}

