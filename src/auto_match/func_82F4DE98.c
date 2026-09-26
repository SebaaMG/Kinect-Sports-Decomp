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
extern int fn_824B42A0();
extern int fn_82F63108();
extern unsigned int lbl_83261824;
extern unsigned int lbl_8326183C;
extern unsigned int lbl_83261874;


void fn_82F4DE98(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if ((*(uint *)(lbl_8326183C + 0x2b28) >> 1 & 1) == 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    piVar4 = &lbl_83261874;
    do {
      if (*piVar4 == (&lbl_83261824)[*(int *)(param_1 + 0x28)]) {
        *(int *)(param_1 + 0x2c) = iVar2;
        break;
      }
      uVar3 = uVar3 + 0x1c0;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x70;
    } while ((uVar3 & 0xffffffff) < 0xa80);
  }
  uVar1 = fn_824B42A0();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_1 + 0x18) + 4))(*(int **)(param_1 + 0x18),param_1);
  }
  return;
}

