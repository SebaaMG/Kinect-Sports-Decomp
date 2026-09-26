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
extern int fn_82231540();
extern int fn_826741F0();
extern int fn_82F622A8();


void fn_827D8E60(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 3) < param_2) {
    piVar5 = param_1 + 3;
    uVar3 = (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],param_2 * 8,param_1 + 4);
    iVar4 = (int)uVar3;
    fn_826741F0(*param_1,param_1[1],uVar3,piVar5,0);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      fn_82231540(iVar1,iVar2,piVar5);
      (**(code **)(*(int *)*piVar5 + 0x18))((int *)*piVar5,*param_1,param_1 + 4);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 * 8 + iVar4;
    param_1[1] = (iVar2 - iVar1 >> 3) * 8 + iVar4;
  }
  return;
}

