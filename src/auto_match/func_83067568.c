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
extern int fn_82F664B0();
extern int fn_83065B90();
extern int fn_83065BA8();


void fn_83067568(int param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    fn_83065BA8();
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_83065BA8();
  }
  pcVar3 = param_2;
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)param_2;
    uVar2 = fn_83065B90(iVar4);
    *(int *)(param_1 + 4) = (int)uVar2;
    fn_82F664B0(uVar2,iVar4,param_2);
  }
  pcVar3 = param_3;
  if (param_3 == (char *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)param_3;
    uVar2 = fn_83065B90(iVar4);
    *(int *)(param_1 + 8) = (int)uVar2;
    fn_82F664B0(uVar2,iVar4,param_3);
  }
  *(undefined4 *)(param_1 + 0xc) = param_4;
  return;
}

