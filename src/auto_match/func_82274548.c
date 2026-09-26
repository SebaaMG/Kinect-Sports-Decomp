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
extern int fn_82275128();
extern int fn_8227EB10();
extern int fn_824BF8A8();
extern unsigned int uStack_4c;


void fn_82274548(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piStack_50;
  undefined4 uStack_4c;
  
  iVar2 = fn_82275128();
  piStack_50 = param_1;
  uStack_4c = param_2;
  if (param_3 == 0) {
    if (0 < *(int *)(iVar2 + 0x14)) {
      param_1[0xc] = 0;
      (**(code **)(*param_1 + 0xc))(param_1,iVar2,2);
    }
    fn_824BF8A8(iVar2 + 0x34,&piStack_50);
  }
  else {
    if (*(int *)(iVar2 + 0x24) != *(int *)(iVar2 + 0x28)) {
      piVar3 = *(int **)(*(int *)(iVar2 + 0x28) + -8);
      fn_8227EB10(piVar3,0);
      (**(code **)(*piVar3 + 0x18))(piVar3);
      piVar3[0xc] = 0;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar2,2);
    }
    fn_824BF8A8(iVar2 + 0x24,&piStack_50);
    if (param_4 != 0) {
      piVar3 = *(int **)(iVar2 + 0x34);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      if (piVar3 != *(int **)(iVar2 + 0x38)) {
        do {
          piVar1 = (int *)*piVar3;
          fn_8227EB10(piVar1,0);
          (**(code **)(*piVar1 + 0x18))(piVar1);
          piVar1 = (int *)*piVar3;
          piVar1[0xc] = 0;
          (**(code **)(*piVar1 + 0xc))(piVar1,iVar2,2);
          piVar3 = piVar3 + 2;
        } while (piVar3 != *(int **)(iVar2 + 0x38));
      }
    }
  }
  *(undefined4 *)(iVar2 + 0x18) = 1;
  return;
}

