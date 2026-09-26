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
extern int fn_82BE8D50();
extern int fn_82BEDD30();
extern int fn_82BF7540();
extern unsigned int iStack_30;


void fn_82BEDE38(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_30;
  int aiStack_2c [11];
  
  if (param_1[0x14] == 2) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_2[5] == 0) {
    return;
  }
  iStack_30 = param_2[2];
  piVar2 = (int *)0x0;
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  if (iVar1 != 0) {
    if (param_2[4] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2[4] + 0x10);
    }
    if (iVar1 != 0) {
      aiStack_2c[0] = 0;
      iVar1 = fn_82BF7540(param_1 + 3,&iStack_30,aiStack_2c);
      if (iVar1 == 0) goto LAB_82bedf6c;
      if (param_2[4] == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_2[4] + 0x10);
      }
      if (*(int *)(aiStack_2c[0] + 0x18) == *(int *)(iVar1 + 0xc)) {
        piVar2 = (int *)(**(code **)(*param_1 + 8))(param_1,*(undefined4 *)(aiStack_2c[0] + 0xc));
        if (piVar2 == (int *)0x0) goto LAB_82bedf6c;
        if (param_2[4] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2[4] + 0x10);
        }
        iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar3);
        if (iVar1 != 0) goto LAB_82bedf6c;
        fn_82BE8D50(piVar2);
      }
    }
  }
  piVar2 = (int *)0x0;
  fn_82BEDD30(param_1,iStack_30);
LAB_82bedf6c:
  (*(code *)param_2[5])(iStack_30,piVar2,param_2[6]);
  return;
}

