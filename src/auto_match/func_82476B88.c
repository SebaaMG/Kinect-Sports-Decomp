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
extern unsigned int *auStack_50;
extern int fn_82476DA0();
extern int fn_82476E30();
extern int fn_82573530();
extern int fn_825764F0();
extern int fn_82F63F40();


void fn_82476B88(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x15c) + 0x3e4);
  if (iVar1 != 0) {
    uVar2 = (ulonglong)*(uint *)(iVar1 + 0x8c0);
    if ((*(int *)(*(int *)(param_1 + 0x15c) + 0x93c) != 0) && (uVar2 != 0)) {
      lVar4 = uVar2 + 0x128;
      fn_82476E30(param_1,0,1);
      lVar3 = 4;
      do {
        fn_82F63F40(auStack_50,0xffffffff821bcf30,lVar3);
        for (iVar1 = fn_82573530(lVar4,auStack_50); iVar1 != 0;
            iVar1 = fn_825764F0(lVar4,auStack_50,iVar1)) {
          (**(code **)(**(int **)(iVar1 + 0x1b0) + 8))(*(int **)(iVar1 + 0x1b0),0,0);
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < 0x19);
      lVar3 = 0x1e;
      do {
        fn_82F63F40(auStack_50,0xffffffff821bcf30,lVar3);
        for (iVar1 = fn_82573530(lVar4,auStack_50); iVar1 != 0;
            iVar1 = fn_825764F0(lVar4,auStack_50,iVar1)) {
          (**(code **)(**(int **)(iVar1 + 0x1b0) + 8))(*(int **)(iVar1 + 0x1b0),0,0);
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < 0x23);
    }
    fn_82476DA0(param_1,2);
  }
  return;
}

