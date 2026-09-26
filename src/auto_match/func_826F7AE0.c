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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_8268CC00();
extern int fn_8268D758();
extern int fn_8269A240();
extern int fn_8269A358();


void fn_826F7AE0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xa90);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  if (uVar6 != 0) {
    iVar5 = 0;
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8c) + iVar5);
      iVar3 = piVar4[8];
      fn_8268CC00(auStack_90);
      fn_8269A240(iVar3,auStack_90);
      iVar3 = piVar4[8];
      fn_8268D758(auStack_70);
      fn_8269A358(iVar3,auStack_70);
      *(undefined1 **)(param_2 + 0x40) = auStack_90;
      *(undefined1 **)(param_2 + 0x44) = auStack_70;
      (**(code **)(*piVar4 + 0x60))(piVar4,param_2);
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 != 0);
  }
  *(undefined4 *)(param_2 + 0x40) = uVar1;
  *(undefined4 *)(param_2 + 0x44) = uVar2;
  return;
}

