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
extern int fn_823B65F8();
extern int fn_8243C3D0();
extern int fn_8243C490();
extern int fn_8288B760();
extern int fn_828AAF70();
extern int fn_828B00A0();
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_823B6E70(uint *param_1)

{
  char cVar4;
  int *piVar2;
  longlong lVar1;
  int iVar3;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if (param_1[3] != 0) {
    cVar4 = fn_8288B760((ulonglong)param_1[3] - 0x68);
    if (cVar4 != '\0') {
      piVar2 = (int *)(param_1[3] - 0x68);
      if (param_1[3] == 0) {
        piVar2 = (int *)0x0;
      }
      lVar1 = (**(code **)(*piVar2 + 8))();
      iVar3 = fn_8243C3D0(lVar1 + 0x9c,0);
      if (iVar3 == 1) {
        piVar2 = (int *)(param_1[3] - 0x68);
        if (param_1[3] == 0) {
          piVar2 = (int *)0x0;
        }
        lVar1 = (**(code **)(*piVar2 + 8))();
        iVar3 = fn_8243C3D0(lVar1 + 0xf0,0);
        if (iVar3 == 0) {
          uStack_1c = (**(code **)(**(int **)(*param_1 + 0x308) + 8))();
          ppuStack_20 = &lbl_821B9BC8;
          fn_823B65F8(param_1,&ppuStack_20);
          uStack_18 = fn_828B00A0((ulonglong)*param_1 + 0x278);
          piVar2 = (int *)(param_1[3] - 0x68);
          if (param_1[3] == 0) {
            piVar2 = (int *)0x0;
          }
          lVar1 = (**(code **)(*piVar2 + 8))();
          fn_8243C490(lVar1 + 0xf0,&uStack_18);
          piVar2 = (int *)(param_1[3] - 0x68);
          if (param_1[3] == 0) {
            piVar2 = (int *)0x0;
          }
          lVar1 = (**(code **)(*piVar2 + 8))();
          fn_828AAF70(lVar1 + 0x144,1);
          param_1[4] = 0;
        }
      }
    }
  }
  return;
}

