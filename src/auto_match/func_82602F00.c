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
extern int fn_825A27B8();


int * fn_82602F00(undefined8 param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if ((param_2 != 0) && (piVar2 = (int *)fn_825A27B8(), piVar2 != (int *)0x0)) {
    piVar3 = piVar2 + 2;
    iVar6 = *piVar2;
    iVar5 = 0;
    piVar2 = piVar3;
    if (param_3 != (int *)0x0) {
      piVar7 = piVar3;
      if (0 < iVar6) {
        do {
          if (piVar7 == param_3) break;
          pbVar1 = (byte *)((int)piVar7 + 1);
          piVar7 = (int *)((uint)*pbVar1 + (int)piVar7);
          if (*pbVar1 == 0) {
            piVar7 = (int *)0x0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      piVar2 = (int *)((uint)*(byte *)((int)piVar7 + 1) + (int)piVar7);
      if (*(byte *)((int)piVar7 + 1) == 0) {
        piVar2 = (int *)0x0;
      }
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar5;
    if (iVar6 <= iVar5) {
      iVar4 = iVar6;
    }
    for (; iVar5 < iVar6; iVar5 = iVar5 + 1) {
      if ((((1 << ((int)(short)*piVar2 & 0x3fU) & param_2) != 0) && (*(short *)(piVar2 + 2) != -1))
         && (*(char *)piVar2 == '\0')) {
        return piVar2;
      }
      pbVar1 = (byte *)((int)piVar2 + 1);
      piVar2 = (int *)((uint)*pbVar1 + (int)piVar2);
      if (*pbVar1 == 0) {
        piVar2 = (int *)0x0;
      }
    }
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if ((((1 << ((int)(short)*piVar3 & 0x3fU) & param_2) != 0) && (*(short *)(piVar3 + 2) != -1)
            ) && (*(char *)piVar3 == '\0')) {
          return piVar3;
        }
        pbVar1 = (byte *)((int)piVar3 + 1);
        piVar3 = (int *)((uint)*pbVar1 + (int)piVar3);
        if (*pbVar1 == 0) {
          piVar3 = (int *)0x0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  return (int *)0x0;
}

