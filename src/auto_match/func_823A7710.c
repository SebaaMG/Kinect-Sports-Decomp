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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_823A9C98();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B5624;
extern unsigned int uStack_4c;


void fn_823A7710(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821B5624;
    puVar3[2] = 1;
    if (puVar3 + 4 != (undefined4 *)0x0) {
      fn_823A9C98(puVar3 + 4,param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(iVar1 + 4);
  piVar4 = (int *)fn_8265C9E0(0x10);
  if (piVar4 == (int *)0x0) {
    uStack_4c = 0;
    ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_50);
  }
  piVar6 = piVar4 + 2;
  *piVar4 = iVar1;
  piVar4[1] = iVar2;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar4[3] = 0;
    if ((puVar3 != (undefined4 *)0x0) && (cVar5 = fn_8223AAC0(puVar3), cVar5 != '\0')) {
      if (piVar4[3] != 0) {
        fn_822315A0();
      }
      piVar4[3] = (int)puVar3;
      *piVar6 = (int)(puVar3 + 4);
    }
  }
  if (*(int *)(param_1 + 0x20) != 0x1ffffffe) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(int **)(iVar1 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (puVar3 != (undefined4 *)0x0) {
      fn_822315A0(puVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff8219852c);
}

