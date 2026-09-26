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
extern unsigned int *auStack_50;
extern unsigned int *auStack_78;
extern int fn_82230040();
extern int fn_82359C18();
extern int fn_824D4F18();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821C128C;
extern unsigned int stack0x00000000;


void fn_824E23B0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_78 [8];
  int aiStack_70 [8];
  undefined1 auStack_50 [80];
  
  fn_824D4F18();
  puVar2 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821C128C;
    fn_82F68CC0(puVar2 + 2,&stack0x00000000 + -0x50,0x28);
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    piVar5 = (int *)(iVar3 + 0x80);
    if (piVar5 != (int *)(&stack0x00000000 + -0x70)) {
      piVar1 = *(int **)(iVar3 + 0x90);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,piVar5 != piVar1);
        *(undefined4 *)(iVar3 + 0x90) = 0;
      }
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar3 + 0x90) = 0;
      }
      else if (puVar2 == (undefined4 *)(&stack0x00000000 + -0x70)) {
        uVar4 = (**(code **)*puVar2)(puVar2,piVar5);
        *(undefined4 *)(iVar3 + 0x90) = uVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 0x90) = puVar2;
      }
    }
    fn_82359C18(&stack0x00000000 + -0x70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0x78);
}

