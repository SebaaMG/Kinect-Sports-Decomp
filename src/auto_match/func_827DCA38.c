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
extern int fn_827DC988();
extern int fn_82F622A8();


void fn_827DCA38(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < param_2) {
    uVar4 = (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],param_2 * 4,param_1 + 4);
    iVar5 = (int)uVar4;
    fn_827DC988(*param_1,param_1[1],uVar4,param_1 + 3,0,0);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      piVar3 = (int *)param_1[3];
      (**(code **)(*piVar3 + 0x18))(piVar3,iVar1,param_1 + 4);
    }
    *param_1 = iVar5;
    param_1[2] = param_2 * 4 + iVar5;
    param_1[1] = (iVar2 - iVar1 >> 2) * 4 + iVar5;
  }
  return;
}

