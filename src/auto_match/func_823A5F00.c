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
extern unsigned int *auStack_30;
extern int fn_823970D0();
extern int fn_8239DBB0();
extern int fn_823B3FE0();
extern int fn_82F63CA0();


void fn_823A5F00(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 auStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(iVar1 + 0x1b4);
  if (piVar4 != *(int **)(iVar1 + 0x1b8)) {
    piVar2 = piVar4 + 1;
    do {
      iVar1 = fn_823970D0(iVar1,*piVar4);
      if (iVar1 == 0) {
        piVar4 = piVar4 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        if (*(int *)(*piVar4 + 0x1e4) != 0) {
          auStack_30[0] = 0;
          fn_823B3FE0(*(int *)(*piVar4 + 0x1e4),auStack_30);
        }
        fn_8239DBB0((ulonglong)*(uint *)(param_1 + 8) + 0x1a4,piVar4);
        iVar1 = *(int *)(param_1 + 8);
        fn_82F63CA0(piVar4,piVar2,(*(int *)(iVar1 + 0x1b8) - (int)piVar2 >> 2) << 2);
        *(int *)(iVar1 + 0x1b8) = *(int *)(iVar1 + 0x1b8) + -4;
      }
      iVar1 = *(int *)(param_1 + 8);
    } while (piVar4 != *(int **)(iVar1 + 0x1b8));
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x1c4);
  if (puVar5 != *(undefined4 **)(iVar1 + 0x1c8)) {
    puVar3 = puVar5 + 1;
    do {
      iVar1 = fn_823970D0(iVar1,*puVar5);
      if (iVar1 == 0) {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        fn_8239DBB0((ulonglong)*(uint *)(param_1 + 8) + 0x1a4,puVar5);
        iVar1 = *(int *)(param_1 + 8);
        fn_82F63CA0(puVar5,puVar3,(*(int *)(iVar1 + 0x1c8) - (int)puVar3 >> 2) << 2);
        *(int *)(iVar1 + 0x1c8) = *(int *)(iVar1 + 0x1c8) + -4;
      }
      iVar1 = *(int *)(param_1 + 8);
    } while (puVar5 != *(undefined4 **)(iVar1 + 0x1c8));
  }
  return;
}

