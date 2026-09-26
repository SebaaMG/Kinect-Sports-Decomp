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
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_82816600();
extern int fn_82816F98();
extern int fn_828171A0();
extern int fn_82A1EFC0();
extern unsigned int iStack_58;
extern unsigned int uStack_5c;


undefined4
fn_8259A070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 param_5,char param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 auStack_1a0 [4];
  undefined1 auStack_190 [308];
  undefined4 uStack_5c;
  int iStack_58;
  
  auStack_1a0[0] = 0;
  uStack_5c = 0;
  iStack_58 = 0;
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_190,0,0x148);
  }
  *(undefined4 *)(param_7 + 4) = *param_1;
  fn_82816600(0xffffffff821c7b80,0xffffffff82ba02a8,param_7,auStack_1a0,1);
  if (param_6 != '\0') {
    fn_82522ED8(*param_1);
    *param_1 = 0;
  }
  *(undefined4 *)(param_7 + 4) = 0;
  fn_82816F98(auStack_1a0[0],1,param_5);
  uVar1 = fn_828171A0(auStack_1a0[0],0xffffffff821c7b34);
  *param_2 = uVar1;
  uVar2 = fn_828171A0(auStack_1a0[0],0xffffffff821c7b44);
  uVar1 = auStack_1a0[0];
  *param_3 = uVar2;
  *param_4 = 0;
  if (iStack_58 != 0) {
    fn_822315A0(iStack_58);
  }
  return uVar1;
}

