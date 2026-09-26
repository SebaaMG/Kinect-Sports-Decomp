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


void fn_83060438(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    piVar4 = (int *)(param_1 + 4);
    do {
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x14) = 1;
      lVar1 = (longlong)(*(int *)(param_1 + 8) - *piVar4 >> 3) + -1;
      if (0 < lVar1) {
        iVar3 = 0;
        do {
          puVar5 = (undefined4 *)(iVar3 + 8 + *piVar4);
          puVar6 = (undefined8 *)(iVar3 + *piVar4);
          if (*(int *)*puVar5 < **(int **)puVar6) {
            uVar7 = *puVar6;
            *(undefined4 *)puVar6 = *puVar5;
            *(undefined4 *)((int)puVar6 + 4) = puVar5[1];
            *(undefined8 *)(iVar3 + 8 + *piVar4) = uVar7;
            *(undefined1 *)(param_1 + 0x14) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 8;
        } while (iVar2 < (int)lVar1);
      }
    } while (*(char *)(param_1 + 0x14) == '\0');
  }
  return;
}

