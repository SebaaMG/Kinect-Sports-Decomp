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
extern int fn_8223FDB8();
extern int fn_82240158();
extern int fn_82517B60();
extern int fn_82520AC8();


void fn_828C5FA0(int param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  char acStack_130 [304];
  
  acStack_130[0] = '\0';
  if ((param_3 & 0xffffffff) != 0) {
    uVar7 = param_3;
    do {
      pcVar3 = acStack_130;
      do {
        pcVar6 = pcVar3;
        pcVar3 = pcVar6 + 1;
        pcVar5 = "\t";
      } while (*pcVar6 != '\0');
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar4 = fn_82240158(param_2,acStack_130);
  uVar4 = fn_82240158(uVar4,0xffffffff820260e0);
  uVar4 = fn_82520AC8(uVar4,uVar2);
  fn_82517B60(uVar4,10);
  fn_8223FDB8(uVar4);
  uVar4 = fn_82240158(param_2,acStack_130);
  uVar4 = fn_82240158(uVar4,0xffffffff820260dc);
  fn_82517B60(uVar4,10);
  fn_8223FDB8(uVar4);
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10),param_2,param_3 + 1);
  (**(code **)(**(int **)(param_1 + 0x14) + 4))(*(int **)(param_1 + 0x14),param_2,param_3 + 1);
  uVar4 = fn_82240158(param_2,acStack_130);
  uVar4 = fn_82240158(uVar4,0xffffffff82196fb0);
  fn_82517B60(uVar4,10);
  fn_8223FDB8(uVar4);
  return;
}

