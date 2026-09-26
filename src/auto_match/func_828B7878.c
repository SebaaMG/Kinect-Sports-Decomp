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
extern int fn_8265CA20();
extern int fn_828B71F8();
extern int fn_828E62F0();
extern int fn_82F622A8();
extern unsigned int uStack_40;


void fn_828B7878(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 uStack_40;
  
  if (0x1fffffff < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)(param_1[2] - *param_1 >> 3) < (param_2 & 0xffffffff)) {
    piVar5 = param_1 + 3;
    uVar3 = fn_828E62F0(piVar5,param_2);
    fn_828B71F8(*param_1,param_1[1],uVar3,piVar5,0,uStack_40);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      fn_82231540(iVar1,iVar2,piVar5,uStack_40);
      fn_8265CA20(*param_1);
    }
    iVar4 = (int)uVar3;
    *param_1 = iVar4;
    param_1[2] = (int)((param_2 & 0xffffffff) << 3) + iVar4;
    param_1[1] = (iVar2 - iVar1 >> 3) * 8 + iVar4;
  }
  return;
}

