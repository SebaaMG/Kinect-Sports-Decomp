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
extern int fn_82F63EC8();
extern unsigned int lbl_832643A4;


ulonglong fn_82FE88A0(char *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  
  pcVar1 = param_1;
  if ((lbl_832643A4 & 1) == 0) {
    lbl_832643A4 = lbl_832643A4 | 1;
    fn_82F63EC8(0xffffffff83141d60);
  }
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  uVar2 = 0xffffffff811c9dc5;
  if (param_1 < pcVar4) {
    iVar3 = (int)pcVar4 - (int)param_1;
    pbVar5 = (byte *)(param_1 + -1);
    do {
      pbVar5 = pbVar5 + 1;
      uVar2 = (longlong)(int)uVar2 * 0x1000193 ^ (ulonglong)*pbVar5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

