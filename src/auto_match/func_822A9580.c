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
extern unsigned int lbl_821CA460;


void fn_822A9580(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_1 + 0x20;
  pcVar3 = param_1;
  do {
    if (pcVar4 <= pcVar3) break;
    cVar1 = pcVar3[param_2 - (int)param_1];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == pcVar4) {
    pcVar3[-1] = '\0';
  }
  iVar2 = (param_2 + 0x20) - (int)pcVar4;
  do {
    if (param_1 + 0x40 <= pcVar4) break;
    cVar1 = pcVar4[iVar2];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_1 + 0x40) {
    pcVar4[-1] = '\0';
  }
  pcVar3 = param_1 + 0x54;
  iVar2 = (param_2 + 0x50) - (int)pcVar3;
  *(undefined4 *)(param_1 + 0x40) = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x4c);
  do {
    if (param_1 + 0x74 <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == param_1 + 0x74) {
    pcVar3[-1] = '\0';
  }
  pcVar3 = param_1 + 0x74;
  iVar2 = (param_2 + 0x70) - (int)pcVar3;
  do {
    if (param_1 + 0x94 <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == param_1 + 0x94) {
    pcVar3[-1] = '\0';
  }
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x98);
  return;
}

