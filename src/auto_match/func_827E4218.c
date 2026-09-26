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
extern unsigned int *auStack_60;
extern int fn_82811438();
extern int fn_82F691F0();
extern unsigned int lbl_83156AA0;


void fn_827E4218(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  auStack_60[0] = 0;
  fn_82811438(auStack_50,auStack_60,0x10);
  iVar3 = *(int *)lbl_83156AA0;
  lVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  iVar3 = (**(code **)(iVar3 + 0xc))(lbl_83156AA0,lVar1 + 0x28,auStack_50);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  *param_2 = iVar3;
  *(int *)(iVar3 + 0x1c) = iVar3 + 0x28;
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(*param_2 + 0x1c),0,uVar2);
}

