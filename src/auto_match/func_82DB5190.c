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


void fn_82DB5190(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar5 = 0;
    do {
      iVar2 = iVar5 + *(int *)(param_1 + 0x30);
      if ((*(int *)(iVar2 + 0xc) == param_2) || (*(int *)(iVar2 + 0x10) == param_2)) {
        iVar1 = *(int *)(iVar2 + 0xc);
        if (*(char *)(iVar1 + 0xe8) == '\x05') {
          iVar1 = *(int *)(iVar2 + 0x10);
        }
        (**(code **)(**(int **)(iVar2 + 0x14) + 0x20))
                  (*(int **)(iVar2 + 0x14),*(undefined4 *)(iVar1 + 0xcc),iVar2 + 0x18);
        iVar2 = *(int *)(param_1 + 0x34) + -1;
        *(int *)(param_1 + 0x34) = iVar2;
        if (iVar2 != iVar4) {
          puVar3 = (undefined8 *)(iVar5 + *(int *)(param_1 + 0x30));
          iVar2 = (iVar2 * 0x70 + *(int *)(param_1 + 0x30)) - (int)puVar3;
          lVar6 = 0xe;
          do {
            *puVar3 = *(undefined8 *)(iVar2 + (int)puVar3);
            puVar3 = puVar3 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + -0x70;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(int *)(param_1 + 0x34));
  }
  return;
}

