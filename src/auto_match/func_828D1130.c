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
extern int fn_825089A0();
extern int fn_828D1070();
extern int fn_82F622A8();


void fn_828D1130(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  undefined8 uVar3;
  int iVar5;
  
  if (0x14e5e0a < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((param_1[2] - *param_1) / 0xc4) < (param_2 & 0xffffffff)) {
    piVar4 = (int *)fn_825089A0();
    uVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,param_2 * 0xc4,1);
    fn_828D1070(*param_1,param_1[1],uVar3,param_1 + 3);
    iVar1 = param_1[1];
    iVar2 = *param_1;
    if (iVar2 != 0) {
      piVar4 = (int *)fn_825089A0();
      (**(code **)(*piVar4 + 0x28))(piVar4,iVar2);
    }
    iVar5 = (int)uVar3;
    *param_1 = iVar5;
    param_1[2] = (int)(param_2 * 0xc4) + iVar5;
    param_1[1] = ((iVar1 - iVar2) / 0xc4) * 0xc4 + iVar5;
  }
  return;
}

