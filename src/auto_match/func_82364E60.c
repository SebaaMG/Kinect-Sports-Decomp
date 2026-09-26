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
extern int fn_8236D8F8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821B2CEC;
extern unsigned int lbl_821B7C00;
extern unsigned int lbl_821B7C50;
extern unsigned int stack0x00000000;


undefined4 * fn_82364E60(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_78 [8];
  int aiStack_70 [8];
  undefined1 auStack_50 [80];
  
  puVar2 = (undefined4 *)fn_8265C9E0(0xa0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_8236D8F8(puVar2,param_2,param_1);
    *puVar2 = &lbl_821B7C00;
    puVar2[0x1a] = &lbl_821B7C50;
    puVar2[0x26] = 0;
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &lbl_821B2CEC;
    fn_82F68CC0(puVar3 + 2,&stack0x00000000 + -0x50,0x20);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))();
    piVar6 = (int *)(iVar4 + 0x28);
    if (piVar6 != (int *)(&stack0x00000000 + -0x70)) {
      piVar1 = *(int **)(iVar4 + 0x38);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,piVar6 != piVar1);
        *(undefined4 *)(iVar4 + 0x38) = 0;
      }
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar4 + 0x38) = 0;
      }
      else {
        if (puVar3 != (undefined4 *)(&stack0x00000000 + -0x70)) {
          piVar6 = (int *)0x0;
        }
        uVar5 = (**(code **)*puVar3)(puVar3,piVar6);
        *(undefined4 *)(iVar4 + 0x38) = uVar5;
      }
    }
    fn_82359C18(&stack0x00000000 + -0x70);
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0x78);
}

