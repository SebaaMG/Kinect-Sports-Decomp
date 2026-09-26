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
extern int fn_8265C940();
extern int fn_82F691F0();
extern int fn_8306CBE0();
extern int fn_8306E380();


undefined8 fn_8306CD18(ulonglong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = fn_8265C940(0x1b60,0x20980000);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_8306CBE0();
  }
  if (iVar2 == 0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    if ((param_1 & 0xffffffff) == 0) {
      uVar4 = 0xffffffff80070057;
    }
    else {
      uVar1 = fn_8265C940(0x14ee0,0x20980000);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_8306E380(uVar1,iVar2 + 0x80,param_1,param_2);
      }
      *(int *)(iVar2 + 0x1b20) = iVar3;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(iVar2 + 0xc,0,0x30);
      }
      uVar4 = 0xffffffff8007000e;
    }
    (**(code **)(*(int *)(iVar2 + 8) + 4))(iVar2 + 8);
  }
  *param_3 = 0;
  return uVar4;
}

