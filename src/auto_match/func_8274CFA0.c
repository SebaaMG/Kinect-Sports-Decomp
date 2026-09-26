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
extern int fn_82681898();
extern int fn_82713EE8();


undefined8 fn_8274CFA0(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar5;
  undefined8 uVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
LAB_8274d0b0:
    uVar4 = fn_82713EE8();
  }
  else {
    pcVar6 = "width";
    pcVar8 = *(char **)*param_3;
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      if (*(int **)(iVar3 + 0xc) == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(**(int **)(iVar3 + 0xc) + 4))();
      }
    }
    else {
      pcVar7 = "height";
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) goto LAB_8274d0b0;
      if (*(int **)(iVar3 + 0xc) == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(**(int **)(iVar3 + 0xc) + 8))();
      }
    }
    fn_82681898((double)uVar5,param_4);
    uVar4 = 1;
  }
  return uVar4;
}

