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
extern int fn_8267C498();
extern int fn_82698C48();
extern int fn_82698CC0();
extern int fn_826997B0();
extern int fn_82699828();
extern unsigned int iStack_50;


ulonglong fn_82699B40(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iStack_50;
  int aiStack_4c [19];
  
  iVar5 = *param_1;
  piVar1 = *(int **)(param_2 * 4 + iVar5);
  if ((*(byte *)((int)piVar1 + 0x66) & 0x40) == 0) {
    param_1[3] = 0;
    if (piVar1 == (int *)0x0) {
      fn_826997B0(param_1,param_2);
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0x78))(piVar1);
      if ((uVar3 & 0xff) == 0) {
        iVar5 = *(int *)(*(int *)(param_2 * 4 + iVar5) + 0x14);
        if (-1 < iVar5) {
          iStack_50 = 0;
          iVar5 = -1 - iVar5;
          fn_82698CC0(&iStack_50);
          fn_826997B0(param_1,param_2);
          iVar2 = iStack_50;
          *(int *)(iStack_50 + 0x14) = iVar5;
          aiStack_4c[0] = iVar5;
          uVar4 = fn_82698C48(param_1,0,param_1[1],aiStack_4c,0xffffffff82698c28);
          fn_82699828(param_1,uVar4,&iStack_50);
          fn_8267C498(iVar2);
        }
      }
      else {
        (**(code **)(*piVar1 + 0x74))(piVar1);
        fn_826997B0(param_1,param_2);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

