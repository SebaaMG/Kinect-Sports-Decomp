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
extern int fn_82230040();
extern int fn_825AD990();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


int fn_825AD818(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar5 = fn_8265C9E0(0x1c);
  if (iVar5 != 0) {
    *(int *)(param_1 + 4) = iVar5;
    *(int *)iVar5 = iVar5;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x18) = 1;
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x19) = 1;
    if (param_1 != param_2) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
      cVar1 = *(char *)((int)piVar2 + 0x19);
      while (cVar1 == '\0') {
        fn_825AD990(param_1,piVar2[2]);
        piVar3 = (int *)*piVar2;
        fn_828B55B0(piVar2 + 3);
        fn_8265CA20(piVar2);
        piVar2 = piVar3;
        cVar1 = *(char *)((int)piVar3 + 0x19);
      }
      *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
      *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
      *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 8) = 0;
      uVar4 = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_2 + 4) = uVar4;
      uVar4 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_2 + 8) = uVar4;
    }
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

