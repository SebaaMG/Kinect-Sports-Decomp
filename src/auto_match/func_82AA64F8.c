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
extern int fn_82AA62B8();
extern int fn_82F6C420();


void fn_82AA64F8(int param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_120 [264];
  
  fn_82AA62B8(param_1,auStack_120,0x100,param_2,param_3);
  iVar2 = (int)param_2;
  if ((*(code **)(param_1 + 0x9bc) != (code *)0x0) && (iVar2 != 0xdd1)) {
    (**(code **)(param_1 + 0x9bc))
              (*(undefined4 *)(param_1 + 0x9b8),1,0,param_2 + -0x44c,auStack_120);
  }
  if (iVar2 == 0xdbd) {
    uVar1 = 0x8007000e;
  }
  else {
    if (iVar2 == 0xdc5) goto LAB_82aa65a0;
    if (iVar2 == 0xdc7) {
      uVar1 = 0x80004004;
    }
    else if (iVar2 == 0xdd1) {
      uVar1 = 0x80004001;
    }
    else {
      uVar1 = 0x80004005;
    }
  }
  *(undefined4 *)(param_1 + 0x9b0) = uVar1;
LAB_82aa65a0:
                    /* WARNING: Subroutine does not return */
  fn_82F6C420(param_1 + 0x470,param_2);
}

