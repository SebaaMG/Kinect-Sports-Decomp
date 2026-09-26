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
extern unsigned int *auStack_e0;
extern int fn_82F691F0();
extern int fn_8314276C();
extern unsigned int iStack_d8;
extern unsigned int uStack0000004c;
extern unsigned int uStack_c4;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82655748(undefined8 param_1,int param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6,int *param_7,undefined4 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int *piStack00000044;
  undefined4 uStack0000004c;
  int *in_stack_00000054;
  undefined4 in_stack_00000064;
  undefined1 auStack_e0 [8];
  int iStack_d8;
  uint uStack_c4;
  
  piStack00000044 = param_7;
  uStack0000004c = param_8;
  fn_8314276C(auStack_e0);
  uVar2 = ((ulonglong)(iStack_d8 == 0) ^ 1) + 1;
  if ((param_2 == 0) && ((param_3 & 0xffffffff) == 0)) {
    param_3 = param_6;
  }
  uVar1 = (param_3 & 0xffffffff) >> 0x10;
  uVar3 = (param_5 & 0xffffffff) >> 0x10;
  if (*in_stack_00000054 == 0) {
    if (uVar1 == uVar3) {
      iVar4 = 7;
    }
    else {
      iVar4 = (-(uint)(uVar1 < uVar3) & 0xfffffffc) + 5;
    }
    *in_stack_00000054 = iVar4;
  }
  if (*param_7 == 0) {
    uVar3 = (param_5 & 0xffff) / uVar2;
    trapWord(6,uVar2,0);
    if ((param_3 & 0xffff) == uVar3) {
      iVar4 = (-(uint)(iStack_d8 != 0) & 0xfffffffe) + 7;
    }
    else {
      iVar4 = (-(uint)((param_3 & 0xffff) < uVar3) & 0xfffffffc) + 5;
    }
    *param_7 = iVar4;
  }
  trapWord(6,(ulonglong)uStack_c4,0);
  trapWord(6,uVar1,0);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(in_stack_00000064,0,0x580);
}

