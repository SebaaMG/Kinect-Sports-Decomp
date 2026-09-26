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
extern int fn_82820EF8();
extern int fn_82827750();


void fn_8282E438(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  
  pcVar10 = (char *)0x0;
  puVar8 = (undefined4 *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8));
  puVar1 = (undefined4 *)**(int **)(param_1 + 0x2ec);
  puVar2 = (undefined4 *)*puVar1;
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
  if (*(char *)(param_1 + 0x3f2) == '\0') {
    iVar3 = *(int *)(param_1 + 0x24) * 4;
    iVar9 = *(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8);
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    pcVar10 = (char *)0x0;
    for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      *(char **)(puVar2[0x42] * 4 + iVar9 + -4) = pcVar10;
      cVar4 = fn_82827750(param_1);
      if (cVar4 != '\0') {
        fn_82820EF8(puVar2[0x42] * 4 + iVar9 + -4,4);
      }
      pcVar7 = (char *)(puVar2 + 2);
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      pcVar10 = pcVar7 + ((int)pcVar10 - (int)(puVar2 + 2));
    }
  }
  *puVar8 = pcVar10;
  cVar4 = fn_82827750(param_1);
  if (cVar4 != '\0') {
    fn_82820EF8(puVar8,4);
  }
  if (*(char *)(param_1 + 0x3f2) == '\0') {
    pcVar7 = (char *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8));
    puVar2 = *(undefined4 **)**(undefined4 **)(param_1 + 0x2ec);
    *(char **)(param_1 + 0x2d8) = pcVar10 + *(int *)(param_1 + 0x2d8);
    *(char **)(param_1 + 0x58) = pcVar10 + *(int *)(param_1 + 0x58);
    for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      pcVar6 = (char *)(puVar2 + 2);
      pcVar10 = pcVar6;
      do {
        cVar4 = *pcVar10;
        pcVar10[(int)pcVar7 - (int)pcVar6] = cVar4;
        pcVar10 = pcVar10 + 1;
        pcVar5 = pcVar6;
      } while (cVar4 != '\0');
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      pcVar7 = pcVar5 + ((int)pcVar7 - (int)pcVar6);
    }
  }
  return;
}

