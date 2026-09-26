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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8236DFD8();
extern int fn_8265C9E0();
extern unsigned int iStack_30;
extern unsigned int stack0x00000000;
extern unsigned int uStack_34;


void fn_822AEED0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  
  uVar1 = *(undefined4 *)(*param_2 + 8);
  fn_82365BD8(&stack0x00000000 + -0x34);
  puVar3 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)(param_1 + 8);
    puVar3[1] = *(undefined4 *)(param_1 + 8);
    puVar3[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 0x19) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = uVar1;
      puVar3[4] = 0;
      puVar3[5] = 0;
      if (puVar3 + 4 != (undefined4 *)(&stack0x00000000 + -0x34)) {
        iVar2 = puVar3[5];
        puVar3[5] = iStack_30;
        puVar3[4] = uStack_34;
        iStack_30 = iVar2;
      }
    }
    fn_8236DFD8(&stack0x00000000 + -0x38,param_1 + 4);
    if (iStack_30 != 0) {
      fn_822315A0(iStack_30);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0x40);
}

