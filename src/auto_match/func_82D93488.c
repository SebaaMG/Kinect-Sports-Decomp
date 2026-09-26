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


void fn_82D93488(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar4;
  longlong lVar3;
  int *piVar5;
  undefined8 uVar6;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x7c)) {
    piVar5 = *(int **)(param_2 + 0x78);
    do {
      if (*piVar5 == param_3) {
        iVar1 = *(int *)(param_2 + 0x7c) + -1;
        puVar2 = (undefined8 *)(*(int *)(param_2 + 0x78) + iVar4 * 0x10);
        uVar6 = *(undefined8 *)(*(int **)(param_2 + 0x78) + iVar4 * 4 + 2);
        iVar4 = (iVar1 - iVar4) * 0x10;
        *(int *)(param_2 + 0x7c) = iVar1;
        if (0 < iVar4) {
          lVar3 = (ulonglong)(iVar4 - 1U >> 3) + 1;
          do {
            *puVar2 = puVar2[2];
            puVar2 = puVar2 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        *param_1 = uVar6;
        return;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x7c));
  }
  *param_1 = 0;
  return;
}

