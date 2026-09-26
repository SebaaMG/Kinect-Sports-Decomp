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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8236DFD8();
extern int fn_8265C9E0();
extern unsigned int stack0x00000000;


void fn_8236DDB8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar4;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [4];
  int aiStack_54 [21];
  
  iVar7 = *param_2;
  iVar1 = param_2[1];
  uVar2 = *(undefined4 *)(iVar7 + 4);
  iVar5 = 0;
  iVar6 = 0;
  if (iVar1 != 0) {
    cVar4 = fn_8223AAC0(iVar1);
    if (cVar4 != '\0') {
      iVar5 = iVar7;
      iVar6 = iVar1;
    }
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)(param_1 + 8);
    puVar3[1] = *(undefined4 *)(param_1 + 8);
    puVar3[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 0x19) = 0;
    iVar7 = iVar6;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = uVar2;
      puVar3[4] = 0;
      puVar3[5] = 0;
      if (puVar3 + 4 != (undefined4 *)(&stack0x00000000 + -0x54)) {
        iVar7 = puVar3[5];
        puVar3[5] = iVar6;
        puVar3[4] = iVar5;
      }
    }
    fn_8236DFD8(&stack0x00000000 + -0x58,param_1 + 4);
    if (iVar7 != 0) {
      fn_822315A0(iVar7);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0x60);
}

