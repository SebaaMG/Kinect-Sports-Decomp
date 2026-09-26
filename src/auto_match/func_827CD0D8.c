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


void fn_827CD0D8(int param_1,int param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char cVar7;
  int *piVar8;
  ulonglong uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar2 = *(uint *)(param_1 + 100);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      if ((ulonglong)uVar1 != 0) {
        pcVar4 = (char *)(*param_3 + -1);
        pbVar6 = (byte *)(*(int *)(param_2 + (int)param_3) + -1);
        uVar5 = (ulonglong)uVar1;
        do {
          cVar7 = '\0';
          if (0 < (int)uVar2) {
            piVar8 = (int *)(iVar3 + -4);
            uVar9 = (ulonglong)uVar2;
            do {
              pbVar6 = pbVar6 + 1;
              piVar8 = piVar8 + 1;
              cVar7 = *(char *)((uint)*pbVar6 + *piVar8) + cVar7;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar4 + 1;
          *pcVar4 = cVar7;
        } while (uVar5 != 0);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}

