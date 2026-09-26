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
extern int fn_8251E530();
extern int fn_825A1778();


undefined8 fn_8252AEB8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  iVar1 = (param_2 + 0x12) * 4;
  if (*(int *)(iVar1 + param_1 + 0x1d0) == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = 3;
    puVar5 = (undefined4 *)(param_2 * 0x14 + *(int *)(param_1 + 0x4c) + 0x324);
    do {
      for (piVar3 = (int *)*puVar5; piVar3 < (int *)puVar5[1]; piVar3 = piVar3 + 3) {
        if (*piVar3 == param_1) {
          fn_8251E530(puVar5);
          break;
        }
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 10;
    } while (lVar4 != 0);
    *(undefined4 *)(iVar1 + param_1 + 0x1d0) = 0;
    if (((param_3 != 0) && (param_2 == 0)) && ((ulonglong)*(uint *)(param_1 + 0x8c0) != 0)) {
      fn_825A1778((ulonglong)*(uint *)(param_1 + 0x8c0) + 0x11c,
                        *(undefined4 *)(param_1 + 0x4c));
    }
    uVar2 = 1;
  }
  return uVar2;
}

