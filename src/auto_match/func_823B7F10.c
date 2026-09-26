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
extern int fn_82250928();
extern int fn_828AAF70();
extern int fn_82F63108();


void fn_823B7F10(int param_1)

{
  undefined4 *puVar1;
  int *piVar3;
  longlong lVar2;
  undefined4 *apuStack_20 [2];
  
  piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar3 = (int *)0x0;
  }
  lVar2 = (**(code **)(*piVar3 + 8))();
  fn_828AAF70(lVar2 + 0x144,1);
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  apuStack_20[0] = (undefined4 *)*puVar1;
  while( true ) {
    if (apuStack_20[0] == puVar1) break;
    piVar3 = (int *)apuStack_20[0][4];
    if (piVar3[2] != 0) {
      (**(code **)(*piVar3 + 0x18))(piVar3);
      piVar3[2] = 0;
    }
    fn_82250928(apuStack_20);
    puVar1 = *(undefined4 **)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 4))();
  }
  return;
}

