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
extern int fn_828647D8();
extern unsigned int lbl_821CC160;


undefined8 fn_8246C658(int param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  iVar1 = fn_828647D8(param_1 + 4);
  if (iVar1 == param_2) {
    cVar5 = *param_3;
    cVar3 = 'G';
    cVar4 = cVar5;
    if (cVar5 == 'G') {
      cVar4 = 'G';
      pcVar2 = param_3;
      do {
        pcVar2 = pcVar2 + 1;
        if (cVar4 == '\0') goto LAB_8246c6d0;
        cVar3 = pcVar2[(int)"Go To Photo Highlights" - (int)param_3];
        cVar4 = *pcVar2;
      } while (cVar4 == cVar3);
    }
    if (cVar4 == cVar3) {
LAB_8246c6d0:
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    else {
      cVar3 = 'R';
      cVar4 = cVar5;
      if (cVar5 == 'R') {
        cVar4 = 'R';
        pcVar2 = param_3;
        do {
          pcVar2 = pcVar2 + 1;
          if (cVar4 == '\0') goto LAB_8246c774;
          cVar3 = pcVar2[(int)"Results" - (int)param_3];
          cVar4 = *pcVar2;
        } while (cVar4 == cVar3);
      }
      if (cVar4 != cVar3) {
        cVar4 = 'R';
        if (cVar5 == 'R') {
          iVar1 = (int)"Results " - (int)param_3;
          cVar5 = 'R';
          do {
            param_3 = param_3 + 1;
            if (cVar5 == '\0') goto LAB_8246c774;
            cVar4 = param_3[iVar1];
            cVar5 = *param_3;
          } while (cVar5 == cVar4);
        }
        if (cVar5 != cVar4) {
          return 0;
        }
      }
LAB_8246c774:
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(undefined4 *)(param_1 + 0x2c) = lbl_821CC160;
    }
  }
  return 0;
}

