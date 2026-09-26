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
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CF28E8();


void fn_82CF2CF0(int param_1,uint *param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  if (0 < iVar2) {
    fn_82CF28E8();
    uVar4 = (ulonglong)*(uint *)(*param_3 + 4) - (ulonglong)*param_2;
    if ((int)param_2[1] <= (int)uVar4) {
      uVar4 = (ulonglong)param_2[1];
    }
    uVar1 = param_2[5];
    iVar5 = ((param_2[3] + param_2[2]) * iVar2 + param_2[4]) * (int)uVar4;
    iVar2 = fn_82CE5410(((uVar4 & 0xffffffff) >> 0x1f) - (ulonglong)(1 < uVar4),0,uVar1,1 - uVar4);
    lVar6 = ((longlong)(int)uVar1 * (longlong)iVar5 & 0x3fffffffU) << 2;
    uVar3 = fn_82CE52E0(*(undefined4 *)(iVar2 + 0x10),lVar6);
    *param_4 = uVar3;
    *param_5 = iVar5;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_82f691f0(*param_4,0,lVar6);
  }
  return;
}

