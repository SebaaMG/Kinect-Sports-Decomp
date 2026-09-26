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
extern int fn_82897620();
extern int fn_8289B608();
extern int fn_82F622E0();


void fn_8288BC38(int *param_1,int *param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (*(int *)(*(int *)(iVar2 + 0x10) + 8) != 0) {
    iVar2 = 0;
    do {
      if ((ulonglong)(uint)(param_2[1] - *param_2 >> 2) <= (uVar4 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      iVar3 = *(int *)(iVar2 + *param_2);
      if (iVar3 != 0) {
        uVar1 = (**(code **)(*param_1 + 8))(param_1);
        uVar1 = fn_82897620(uVar1,uVar4);
        fn_8289B608(uVar1,iVar3);
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = (**(code **)(*param_1 + 8))(param_1);
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(iVar3 + 0x10) + 8));
  }
  return;
}

