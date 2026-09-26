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


void fn_82CECF28(int param_1,int param_2,int param_3,longlong param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = (int)param_4;
  (**(code **)(**(int **)(param_1 + 8) + 0x10))
            (*(int **)(param_1 + 8),param_2,(longlong)param_3 * (longlong)iVar2);
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (param_3 == 2) {
      if (0 < iVar2) {
        puVar3 = (undefined1 *)(param_2 + -1);
        do {
          uVar1 = puVar3[1];
          puVar3[1] = puVar3[2];
          puVar3 = puVar3 + 2;
          *puVar3 = uVar1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if (param_3 == 4) {
      if (0 < iVar2) {
        puVar3 = (undefined1 *)(param_2 + -2);
        do {
          uVar1 = puVar3[2];
          puVar3[2] = puVar3[5];
          puVar3[5] = uVar1;
          uVar1 = puVar3[3];
          puVar3[3] = puVar3[4];
          puVar3 = puVar3 + 4;
          *puVar3 = uVar1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if ((param_3 == 8) && (0 < iVar2)) {
      puVar3 = (undefined1 *)(param_2 + -4);
      do {
        uVar1 = puVar3[4];
        puVar3[4] = puVar3[0xb];
        puVar3[0xb] = uVar1;
        uVar1 = puVar3[5];
        puVar3[5] = puVar3[10];
        puVar3[10] = uVar1;
        uVar1 = puVar3[6];
        puVar3[6] = puVar3[9];
        puVar3[9] = uVar1;
        uVar1 = puVar3[7];
        puVar3[7] = puVar3[8];
        puVar3 = puVar3 + 8;
        *puVar3 = uVar1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

