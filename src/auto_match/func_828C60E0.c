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


void fn_828C60E0(int param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_120 [264];
  
  acStack_120[0] = '\0';
  if ((int)param_3 != 0) {
    do {
      pcVar4 = acStack_120;
      do {
        pcVar7 = pcVar4;
        pcVar4 = pcVar7 + 1;
        pcVar6 = "\t";
      } while (*pcVar7 != '\0');
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = fn_82240158(param_2,acStack_120);
  uVar5 = fn_82240158(uVar5,0xffffffff820260fc);
  uVar5 = fn_82520AC8(uVar5,uVar3);
  uVar5 = fn_82240158(uVar5,0xffffffff820260f0);
  uVar5 = fn_82520AC8(uVar5,uVar2);
  fn_82517B60(uVar5,10);
  fn_8223FDB8(uVar5);
  return;
}

