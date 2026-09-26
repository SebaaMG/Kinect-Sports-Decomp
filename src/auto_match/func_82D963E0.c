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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82D962A8();
extern int fn_82DBF460();
extern int fn_82DBF6D8();


void fn_82D963E0(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar4;
  longlong lVar3;
  
  if (param_4 == 0) {
    if ((*(int *)(param_1 + 0x18) == 0) ||
       ((iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 8), iVar4 != 0 &&
        (*(int *)(param_1 + 0x18) == *(int *)(iVar4 + 0x24))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
LAB_82d964e0:
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x38);
      *(undefined2 *)(iVar4 + 4) = 0x38;
      lVar3 = fn_82D962A8(iVar4,param_2,param_3,*(undefined4 *)(param_1 + 0xc),
                            *(undefined1 *)(param_1 + 0x1c));
      goto LAB_82d9651c;
    }
    uVar2 = fn_82DBF460(*(undefined4 *)(param_1 + 0xc));
    iVar4 = fn_82CE5410();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x38);
    param_3 = 0;
  }
  else {
    if (param_4 != 1) goto LAB_82d964e0;
    uVar2 = fn_82DBF6D8(*(undefined4 *)(param_1 + 0xc));
    if ((uVar2 & 0xffffffff) == 0) {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
      fn_82CE4040(uVar2);
    }
    iVar4 = fn_82CE5410();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x38);
  }
  *(undefined2 *)(iVar4 + 4) = 0x38;
  lVar3 = fn_82D962A8(iVar4,param_2,param_3,uVar2,*(undefined1 *)(param_1 + 0x1c));
  fn_82CE4118(uVar2);
LAB_82d9651c:
                    /* WARNING: Subroutine does not return */
  fn_82CED628(lVar3 + 0x28,*(uint *)(param_1 + 0x28) & 0xfffffffe);
}

