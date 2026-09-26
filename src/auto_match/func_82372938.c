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
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_82F63108();
extern unsigned int lbl_821B37B4;
extern unsigned int uStack_60;


void fn_82372938(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_60;
  undefined4 *apuStack_5c [3];
  undefined **ppuStack_50;
  undefined4 *puStack_4c;
  undefined ***pppuStack_40;
  undefined1 auStack_30 [24];
  
  iVar4 = *(int *)(param_1 + 0x204);
  if (iVar4 == 0) {
    return;
  }
  uStack_60 = 0;
  if (iVar4 == 1) {
    uStack_60 = *(undefined4 *)(*(int *)(param_1 + 0x260) + 0x1e0);
    iVar4 = *(int *)(*(int *)(param_1 + 0x260) + 0x1d8);
  }
  else {
    if (iVar4 != 2) goto LAB_8237299c;
    uStack_60 = *(undefined4 *)(*(int *)(param_1 + 0x260) + 0x21c);
    iVar4 = *(int *)(*(int *)(param_1 + 0x260) + 0x270);
  }
  if (iVar4 != 0) {
    return;
  }
LAB_8237299c:
  puStack_4c = &uStack_60;
  pppuStack_40 = &ppuStack_50;
  ppuStack_50 = &lbl_821B37B4;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + 4);
  iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
  iVar3 = fn_822C5B18(auStack_30,&ppuStack_50);
  puVar2 = *(undefined4 **)(iVar4 + 4);
  apuStack_5c[0] = (undefined4 *)*puVar2;
  while( true ) {
    if (apuStack_5c[0] == puVar2) {
      fn_82359C18(iVar3);
      fn_82359C18(&ppuStack_50);
      return;
    }
    piVar1 = *(int **)(iVar3 + 0x10);
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 4))(piVar1,apuStack_5c[0][4]);
    fn_82381BC0(apuStack_5c);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

