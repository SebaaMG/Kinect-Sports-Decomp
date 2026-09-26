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
extern int fn_82243568();
extern int fn_8236D750();
extern int fn_8265C9E0();
extern int fn_82899478();
extern unsigned int lbl_820239B4;
extern unsigned int lbl_820239D4;
extern unsigned int lbl_820239F4;
extern unsigned int lbl_82197140;


void fn_82899B38(int param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
  fn_82243568(param_1 + 4,0,uVar1,0);
  if (param_2 == '\0') {
    puVar2 = (undefined4 *)fn_8265C9E0(0x24);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &lbl_820239F4;
      puVar2[2] = &lbl_820239B4;
      puVar2[3] = 9;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
    }
    *(undefined4 **)(param_1 + 0x20) = puVar2;
    iVar3 = 0;
    lVar4 = 4;
    do {
      *(undefined1 *)((int)puVar2 + iVar3 + 4) = 0;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar1 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
    fn_82899478(puVar2 + 2,uVar1,0);
  }
  else {
    puVar2 = (undefined4 *)fn_8265C9E0(0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &lbl_820239D4;
      puVar2[3] = &lbl_82197140;
      puVar2[4] = 9;
      puVar2[5] = 0;
      puVar2[6] = 0;
    }
    *(undefined4 **)(param_1 + 0x20) = puVar2;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    uVar1 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
    fn_82243568(puVar2 + 3,0,uVar1,0);
    puVar2[1] = param_3;
  }
  return;
}

