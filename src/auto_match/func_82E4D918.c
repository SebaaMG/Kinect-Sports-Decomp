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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4D758();
extern int fn_82E913E0();
extern int fn_82E91718();
extern int fn_82E91FE8();
extern int fn_82E92560();
extern int fn_82E92AF8();


void fn_82E4D918(int param_1,int *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  uVar1 = fn_8265C940(0x18,0x248c8000);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82E91718(uVar1,param_2,param_3);
  }
  *(int *)(param_1 + 0x230) = iVar2;
  if (iVar2 == 0) {
    *param_2 = -3;
    return;
  }
  if (*param_2 == 0) {
    iVar5 = 0;
    iVar2 = (int)param_3;
    if (0 < iVar2) {
      do {
        piVar3 = (int *)fn_8265C940(0x68,0x248c8000);
        if (piVar3 == (int *)0x0) {
          *param_2 = -3;
          goto LAB_82e4da38;
        }
        iVar4 = fn_8265C940(*(undefined4 *)(param_1 + 0x110),0x248c8000);
        *piVar3 = iVar4;
        if (iVar4 == 0) {
LAB_82e4da4c:
          fn_8265C990(piVar3,0x248c8000);
          fn_82E4D758(param_1);
          return;
        }
        iVar4 = fn_8265C940(*(int *)(param_1 + 0x110) >> 4,0x248c8000);
        piVar3[1] = iVar4;
        if (iVar4 == 0) goto LAB_82e4da4c;
        fn_82E913E0(*(undefined4 *)(param_1 + 0x230),piVar3,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      if (0 < iVar2) {
        iVar2 = fn_8265C940(0xb0,0x248c8000);
        if (iVar2 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = fn_82E91FE8();
        }
        *(int *)(param_1 + 0x234) = (int)uVar1;
        if (((uVar1 & 0xffffffff) == 0) ||
           (iVar2 = fn_82E92AF8(uVar1,param_3,*(undefined4 *)(param_1 + 0x20),
                                      *(undefined4 *)(param_1 + 0x1c)), iVar2 != 0))
        goto LAB_82e4da38;
        fn_82E92560(*(undefined4 *)(param_1 + 0x234),0);
      }
    }
    *param_2 = 0;
  }
  else {
LAB_82e4da38:
    fn_82E4D758(param_1);
  }
  return;
}

