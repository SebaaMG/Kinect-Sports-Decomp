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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_8265BF48();
extern int fn_827D78D0();
extern unsigned int lbl_83265A24;
extern unsigned int uStack0000002c;


void fn_82559368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uStack0000002c;
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  uStack0000002c = param_4;
  fn_82230300(auStack_70,0,0);
  auStack_a0[0] = fn_8265BF48(param_1,0);
  uVar1 = fn_825200F0(auStack_90,auStack_a0);
  fn_827D78D0(auStack_50,lbl_83265A24,uVar1,0xffffffffffffffff,0);
  fn_822402F8(auStack_70,auStack_50);
  fn_82230300(auStack_50,1,0);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x148);
}

