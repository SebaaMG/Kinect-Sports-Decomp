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
extern unsigned int *auStack_40;
extern int fn_828FA8D8();
extern int fn_828FB358();
extern int fn_829301D0();


int fn_828FB948(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar9;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_40 [64];
  
  pcVar8 = *(char **)(param_1 + 4);
  if (pcVar8 <= param_2) {
    return 0;
  }
  cVar9 = *param_2;
  if (cVar9 != '\"') {
    if (cVar9 != '<') {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
      return 0;
    }
    cVar9 = '>';
  }
  pcVar10 = param_2 + 1;
  pcVar12 = pcVar10;
  if (pcVar10 < pcVar8) {
    pcVar6 = param_2 + 2;
    do {
      cVar1 = *pcVar12;
      if ((cVar9 == cVar1) || (cVar1 == '\n')) break;
      pcVar7 = pcVar6;
      pcVar11 = pcVar12;
      if ((cVar1 == '\\') && ((*(uint *)(param_1 + 0x28) & 4) == 0)) {
        pcVar11 = pcVar12 + 1;
        pcVar7 = pcVar6 + 1;
        if (pcVar11 < pcVar8) {
          if (*pcVar11 != '\n') {
            if (((*pcVar11 != '\r') || (pcVar8 <= pcVar7)) || (*pcVar7 != '\n')) goto LAB_828fba28;
            pcVar11 = pcVar12 + 2;
            pcVar7 = pcVar6 + 2;
          }
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
      }
LAB_828fba28:
      pcVar12 = pcVar11 + 1;
      pcVar6 = pcVar7 + 1;
    } while (pcVar12 < *(char **)(param_1 + 4));
  }
  if (pcVar12 < pcVar8) {
    if (*pcVar12 != '\n') goto LAB_828fba7c;
    uVar4 = 0x3ed;
    uVar5 = 0xffffffff820299cc;
  }
  else {
    uVar4 = 0x3ee;
    uVar5 = 0xffffffff820299f0;
    pcVar12 = pcVar8;
  }
  fn_828FA8D8(*(undefined4 *)(param_1 + 0x30),param_1 + 8,uVar4,uVar5);
LAB_828fba7c:
  puVar2 = (undefined1 *)
           fn_829301D0(*(undefined4 *)(param_1 + 0x2c),(int)pcVar12 - (int)param_2,1);
  if (puVar2 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = puVar2;
  do {
    pcVar8 = pcVar10 + 1;
    if (pcVar8 < pcVar12) {
      pcVar6 = pcVar10 + 2;
      do {
        if ((*pcVar10 != '\\') || ((*(uint *)(param_1 + 0x28) & 4) != 0)) break;
        if (*pcVar8 == '\n') {
          pcVar10 = pcVar10 + 2;
          pcVar6 = pcVar6 + 2;
          pcVar8 = pcVar8 + 2;
        }
        else {
          if (((*pcVar8 != '\r') || (pcVar12 <= pcVar6)) || (*pcVar6 != '\n')) break;
          pcVar10 = pcVar10 + 3;
          pcVar6 = pcVar6 + 3;
          pcVar8 = pcVar8 + 3;
        }
      } while (pcVar8 < pcVar12);
    }
    if (pcVar12 <= pcVar10) {
      *puVar2 = 0;
      return ((int)pcVar12 - (int)param_2) + 1;
    }
    iVar3 = fn_828FB358(param_1,pcVar10,auStack_40);
    pcVar10 = pcVar10 + iVar3;
    *puVar2 = (char)(((U64)(auStack_40) >> 0) & 0xFFFFFFFF);
    puVar2 = puVar2 + 1;
  } while( true );
}

