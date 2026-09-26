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
extern int fn_8251FBA8();


int fn_822ACDA0(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 != 0) {
    iVar5 = 0;
    uVar3 = fn_8251FBA8();
    if ((int)((uVar3 & 0xffffffff) / 0x88) != 0) {
      iVar6 = (iVar7 - (int)param_2) + 4;
      do {
        cVar2 = *(char *)(iVar7 + 4);
        cVar1 = *param_2;
        pcVar4 = param_2;
        while (cVar1 == cVar2) {
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return iVar7;
          }
          cVar2 = pcVar4[iVar6];
          cVar1 = *pcVar4;
        }
        if (cVar1 == cVar2) {
          return iVar7;
        }
        iVar7 = iVar7 + 0x88;
        iVar6 = iVar6 + 0x88;
        iVar5 = iVar5 + 1;
        uVar3 = fn_8251FBA8(*(undefined4 *)(param_1 + 4));
      } while (iVar5 < (int)((uVar3 & 0xffffffff) / 0x88));
    }
  }
  return 0;
}

