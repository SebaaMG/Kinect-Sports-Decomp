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
extern int fn_828106A0();
extern int fn_8281D460();
extern int fn_828625D0();
extern int fn_82862648();


void fn_828627A0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  
  pcVar4 = (char *)(param_1 + 0xb);
  pcVar3 = "04.05.05.0032";
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x54) + (ulonglong)*(uint *)(param_2 + 8);
  fn_828106A0(lVar5);
  fn_8281D460(lVar5 + 0xc);
  iVar6 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar5 = 0;
    do {
      fn_828625D0((ulonglong)*(uint *)(param_1 + 0x34) + lVar5,param_2);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x2c;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar6 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar5 = 0;
    do {
      fn_82862648((ulonglong)*(uint *)(param_1 + 0x3c) + lVar5,cVar1 == cVar2,param_2);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

