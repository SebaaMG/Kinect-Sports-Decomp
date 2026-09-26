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
extern int fn_82FEC7F0();
extern int fn_83037510();
extern unsigned int lbl_82002AE0;


void fn_8304C6E0(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    *(undefined2 *)((int)param_2 + 0xe) = 0;
    param_2[7] = lbl_82002AE0;
    *(undefined2 *)(param_2 + 3) = 0;
    param_2[2] = 0x2b;
    *(undefined2 *)(param_2 + 4) = 0;
    param_2[5] = 0;
    param_2[6] = -1;
    param_2[8] = -1;
    param_2[9] = 1;
    param_2[0xd0] = 2;
    return;
  }
  uVar1 = *(ushort *)(param_2 + 3);
  if (uVar1 == 0) {
    param_2[0xd0] = 0x11;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x14) == 0) {
    if ((uVar2 & 1) == 1) {
      iVar3 = fn_83037510(param_2,uVar1,uVar2 >> 0xe);
      if (iVar3 == 1) goto LAB_8304c78c;
    }
    else {
      iVar3 = fn_82FEC7F0((longlong)(int)(uint)uVar1 * (longlong)(int)(uVar2 >> 3 & 0x1f));
      if (iVar3 != 0) {
        *param_2 = iVar3;
        goto LAB_8304c784;
      }
    }
    param_2[0xd0] = 2;
  }
  else {
    *param_2 = *(int *)(param_1 + 0x14);
LAB_8304c784:
    param_2[1] = uVar2 >> 0xe;
    *(undefined2 *)((int)param_2 + 0xe) = 0;
LAB_8304c78c:
    param_2[2] = 0x2b;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),param_2);
    param_2[0xd0] = param_2[2];
    param_2 = param_2 + -1;
    piVar4 = (int *)(param_1 + 0x10);
    lVar5 = 10;
    do {
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = *param_2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

