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
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8304F0A8();
extern int fn_83050008();
extern int fn_83056200();
extern unsigned int uStack_34;


void fn_830530F8(double param_1,int param_2,int *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStack_40 [2];
  float fStack_38;
  undefined1 uStack_34;
  
  fn_83056200();
  iVar2 = fn_83050008(param_3);
  iVar3 = *param_3;
  if (iVar2 == 1) {
    iVar3 = (**(code **)(iVar3 + 0x14))(param_3,param_4,auStack_40);
    if (iVar3 == 0) {
      (**(code **)(*param_3 + 0x1c))(param_3,0,0,param_4,0,0x35);
      fn_8304F0A8(0,100);
      return;
    }
    uStack_34 = *(undefined1 *)(param_3 + 0x1c);
    fStack_38 = (float)param_1;
    iVar2 = **(int **)(param_2 + 0x80);
    if (((uint)param_3[0x1d] >> 0x1d & 1) == 0) {
      pcVar1 = *(code **)(iVar2 + 0x10);
    }
    else {
      pcVar1 = *(code **)(iVar2 + 0x14);
    }
    uVar5 = (*pcVar1)(*(int **)(param_2 + 0x80),auStack_40[0],&fStack_38,iVar3);
    if ((int)uVar5 == 1) {
      return;
    }
    iVar2 = *(int *)(iVar3 + 0x18);
    iVar3 = *param_3;
    uVar4 = *(undefined8 *)(iVar2 + 0x10);
  }
  else {
    uVar5 = 2;
    uVar4 = 0;
    iVar2 = 0;
  }
  (**(code **)(iVar3 + 0x1c))(param_3,iVar2,uVar4,param_4,0,uVar5);
  return;
}

