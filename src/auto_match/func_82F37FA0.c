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
extern int fn_82F377E8();
extern int fn_82F37AA8();


undefined8 fn_82F37FA0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piStack_50;
  int *apiStack_4c [19];
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar4 = param_1 + 8;
    uVar3 = 1;
    do {
      fn_82F377E8(iVar4,uVar5,&piStack_50);
      if (*piStack_50 == param_2) {
        fn_82F377E8(iVar4,uVar5,apiStack_4c);
        piVar1 = (int *)*apiStack_4c[0];
        if (((piVar1 == (int *)0x0) || (*(uint *)(param_1 + 0x70) < uVar3)) ||
           (iVar2 = fn_82F37AA8(iVar4,uVar5), iVar2 < 0)) {
          return 0xffffffff8000ffff;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar5 = uVar5 - 1;
        uVar3 = uVar3 - 1;
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x70));
  }
  return 0;
}

