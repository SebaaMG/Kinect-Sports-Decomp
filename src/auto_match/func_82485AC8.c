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
extern int fn_824858E0();


void fn_82485AC8(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char cVar6;
  undefined4 uVar5;
  
  pcVar3 = (char *)(param_1 + 0x34);
  cVar4 = 'p';
  cVar6 = *pcVar3;
  if (cVar6 == 'p') {
    iVar2 = (int)"partymode" - (int)pcVar3;
    cVar6 = 'p';
    do {
      pcVar3 = pcVar3 + 1;
      if (cVar6 == '\0') goto LAB_82485b30;
      cVar4 = pcVar3[iVar2];
      cVar6 = *pcVar3;
    } while (cVar6 == cVar4);
  }
  if (cVar6 == cVar4) {
LAB_82485b30:
    iVar2 = 1;
  }
  else {
    iVar2 = fn_824858E0((char *)(param_1 + 0x234));
  }
  *(int *)(param_1 + 0x18c0) = iVar2;
  if (iVar2 == 0) {
    pcVar3 = strstr((char *)(param_1 + 0x234),"athletics");
    uVar5 = 2;
    if (pcVar3 == (char *)0x0) {
      uVar5 = 6;
    }
    *(undefined4 *)(param_1 + 0x18c8) = uVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x18c0);
  if (uVar1 == 0) {
LAB_82485bb4:
    uVar5 = 2;
  }
  else {
    if ((uVar1 != 1) && (2 < uVar1)) {
      if (uVar1 < 6) {
        uVar5 = 1;
        goto LAB_82485bb8;
      }
      if (uVar1 == 6) goto LAB_82485bb4;
      if (7 < uVar1) {
        uVar5 = 3;
        goto LAB_82485bb8;
      }
    }
    uVar5 = 0;
  }
LAB_82485bb8:
  *(undefined4 *)(param_1 + 0x18b8) = uVar5;
  return;
}

