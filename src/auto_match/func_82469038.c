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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_821BC088;
extern unsigned int lbl_821BC08C;
extern unsigned int lbl_821BC094;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82469038(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  
  uStack_20 = 0;
  uStack_1c = 0;
  if (param_2 != *(uint *)(param_1 + 0x130)) {
    *(uint *)(param_1 + 0x130) = param_2;
    if (param_2 == 0) {
      puVar1 = (undefined4 *)fn_82279C58(auStack_30,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc040,0,0);
      iStack_4c = iStack_2c;
    }
    else if (param_2 == 1) {
      puVar1 = (undefined4 *)fn_82279C58(auStack_38,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc04c,0,0);
      iStack_4c = iStack_34;
    }
    else if (param_2 < 3) {
      puVar1 = (undefined4 *)fn_82279C58(auStack_40,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc060,0,0);
      iStack_4c = iStack_3c;
    }
    else if (param_2 == 3) {
      puVar1 = (undefined4 *)fn_82279C58(auStack_48,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc074,0,0);
      iStack_4c = iStack_44;
    }
    else {
      if (4 < param_2) goto LAB_824691b8;
      if (*(int *)(param_1 + 0x134) == 0) {
        fn_82273CD8(&uStack_20,4);
        puStack_18 = &lbl_821BC088;
      }
      else if (*(int *)(param_1 + 0x134) == 1) {
        fn_82273CD8(&uStack_20,4);
        puStack_18 = &lbl_821BC08C;
      }
      else {
        fn_82273CD8(&uStack_20,4);
        puStack_18 = &lbl_821BC094;
      }
      puVar1 = (undefined4 *)fn_82279C58(auStack_50,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc09c,&uStack_20,1);
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
LAB_824691b8:
  fn_82273C88(&uStack_20);
  return;
}

