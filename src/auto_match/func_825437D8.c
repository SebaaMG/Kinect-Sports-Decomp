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
extern int fn_8263CBB0();
extern int fn_828461E8();


void fn_825437D8(undefined4 *param_1,int param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(*(int *)(param_2 + 4) + 0x4c) + param_3 * 0x10);
  iVar1 = *piVar2;
  if ((int)param_5 == -1) {
    if ((param_4 & 0xffffffff) == 5) {
      param_5 = 1;
    }
    else {
      param_5 = -(ulonglong)(param_4 == 7) & 2;
    }
  }
  fn_828461E8(iVar1,piVar2[1],*param_1,0xffffffff821960d0,param_5,0,0,0);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x2014] =
       *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + (int)param_5 * 0xc + 4) + 0x10);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*param_1,0xd,param_1[0x2a1c],0x40000);
}

