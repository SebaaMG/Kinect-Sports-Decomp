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
extern int fn_828FA8D8();
extern int fn_82F66AA0();


int fn_828FB358(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  if (*(char **)(param_1 + 4) <= param_2) {
    return 0;
  }
  if ((*param_2 != 0x5c) || ((*(uint *)(param_1 + 0x28) & 4) != 0)) {
    *param_3 = (int)*param_2;
    pcVar4 = param_2 + 1;
    goto LAB_828fb554;
  }
  pcVar6 = param_2 + 1;
  if (*(char **)(param_1 + 4) <= pcVar6) {
    fn_828FA8D8(*(undefined4 *)(param_1 + 0x30),param_1 + 8,0x3ef,0xffffffff82029980);
  }
  cVar1 = *pcVar6;
  if (cVar1 == 'a') {
    iVar2 = 7;
LAB_828fb540:
    pcVar4 = param_2 + 2;
  }
  else {
    if (cVar1 == 'b') {
      iVar2 = 8;
      goto LAB_828fb540;
    }
    if (cVar1 == 'f') {
      iVar2 = 0xc;
      goto LAB_828fb540;
    }
    if (cVar1 == 'n') {
      iVar2 = 10;
      goto LAB_828fb540;
    }
    if (cVar1 == 'r') {
      iVar2 = 0xd;
      goto LAB_828fb540;
    }
    if (cVar1 == 't') {
      iVar2 = 9;
      goto LAB_828fb540;
    }
    if (cVar1 == 'v') {
      iVar2 = 0xb;
      goto LAB_828fb540;
    }
    if ((cVar1 < '0') || ('7' < cVar1)) {
      if ((cVar1 == 'x') &&
         ((pcVar4 = param_2 + 2, pcVar4 < *(char **)(param_1 + 4) &&
          (iVar2 = fn_82F66AA0(*pcVar4), iVar2 != 0)))) {
        iVar5 = 0;
        iVar2 = 0;
        if (pcVar4 < *(char **)(param_1 + 4)) {
          do {
            iVar5 = iVar2;
            iVar2 = fn_82F66AA0(*pcVar4);
            if (iVar2 == 0) break;
            cVar1 = *pcVar4;
            if (cVar1 < 'a') {
              iVar2 = (int)cVar1 + iVar5 * 0x10;
              iVar5 = iVar2 + -0x37;
              if (cVar1 < 'A') {
                iVar5 = iVar2 + -0x30;
              }
            }
            else {
              iVar5 = (int)cVar1 + iVar5 * 0x10 + -0x57;
            }
            pcVar4 = pcVar4 + 1;
            iVar2 = iVar5;
          } while (pcVar4 < *(char **)(param_1 + 4));
        }
        *param_3 = iVar5;
        goto LAB_828fb554;
      }
      iVar2 = (int)*pcVar6;
      goto LAB_828fb540;
    }
    pcVar3 = param_2 + 4;
    if (*(char **)(param_1 + 4) <= param_2 + 4) {
      pcVar3 = *(char **)(param_1 + 4);
    }
    iVar2 = 0;
    for (pcVar4 = pcVar6; pcVar4 < pcVar3; pcVar4 = pcVar4 + 1) {
      cVar1 = *pcVar4;
      if ((cVar1 < '0') || ('7' < cVar1)) break;
      iVar2 = iVar2 * 8 + (int)cVar1 + -0x30;
    }
  }
  *param_3 = iVar2;
LAB_828fb554:
  return (int)pcVar4 - (int)param_2;
}

