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
extern int fn_82459C60();
extern int fn_82522FF0();
extern int fn_82CE08F0();
extern int fn_82CE0A20();
extern int fn_82CE0BB0();


void fn_8245A260(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  double dVar4;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  iVar2 = fn_82CE08F0(*(undefined4 *)(param_1 + 0x20),0x4004667f,aiStack_30);
  if ((iVar2 == 0) && (aiStack_30[0] != 0)) {
    iVar2 = *(int *)(param_1 + 0x4f8);
    if (0x3ff < iVar2) {
      iVar2 = 0x400;
    }
    uVar1 = fn_82CE0A20(*(undefined4 *)(param_1 + 0x20),param_1 + 0xf0,iVar2,0);
    if ((int)uVar1 == -1) {
      iVar2 = fn_82CE0BB0(uVar1,uVar1);
      if (iVar2 == 0x2733) goto LAB_8245a324;
      uVar3 = 0x10;
    }
    else {
      *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f8) - (int)uVar1;
      if (*(code **)(param_1 + 0x518) != (code *)0x0) {
        (**(code **)(param_1 + 0x518))
                  (param_1 + 0xf0,uVar1,*(undefined4 *)(param_1 + 0x4f4),
                   *(undefined4 *)(param_1 + 0x51c));
      }
      if (*(int *)(param_1 + 0x4f8) != 0) goto LAB_8245a324;
      uVar3 = 10;
    }
    *(undefined4 *)(param_1 + 0x84) = uVar3;
  }
LAB_8245a324:
  dVar4 = (double)fn_82522FF0();
  if (*(double *)(param_1 + 0xe0) < dVar4 - *(double *)(param_1 + 0xe8)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    fn_82459C60(param_1);
    *(undefined4 *)(param_1 + 0x84) = 0x11;
  }
  return;
}

