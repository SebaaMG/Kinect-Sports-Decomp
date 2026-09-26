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
extern int fn_822762E8();
extern int fn_82276590();
extern int fn_822766D0();
extern int fn_82276818();
extern int fn_82356F98();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


undefined4 * fn_82276E10(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_30 [48];
  
  uVar1 = *(uint *)(*(int *)(param_2 + 0x24) + 4);
  if (uVar1 == 0) {
    fn_82520158(0xffffffff821a80c4,auStack_30,0);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    puVar3 = (undefined4 *)fn_8265C9E0(0x148);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      *puVar3 = &lbl_821A8D8C;
      puVar3[2] = 1;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        fn_822762E8(puVar3 + 4,auStack_30,uVar2,*(undefined4 *)(param_2 + 0x28));
      }
      goto LAB_82276fb8;
    }
  }
  else if (uVar1 == 1) {
    fn_82520158(0xffffffff821a80d8,auStack_30,0);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    puVar3 = (undefined4 *)fn_8265C9E0(0x140);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      *puVar3 = &lbl_821A8D8C;
      puVar3[2] = 1;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        fn_82276590(puVar3 + 4,auStack_30,uVar2);
      }
      goto LAB_82276fb8;
    }
  }
  else if (uVar1 < 3) {
    fn_82520158(0xffffffff821a80ec,auStack_30,0);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    puVar3 = (undefined4 *)fn_8265C9E0(0x140);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      *puVar3 = &lbl_821A8D8C;
      puVar3[2] = 1;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        fn_822766D0(puVar3 + 4,auStack_30,uVar2);
      }
      goto LAB_82276fb8;
    }
  }
  else {
    if (uVar1 != 3) {
      fn_82356F98();
      return param_1;
    }
    fn_82520158(0xffffffff821a8104,auStack_30,0);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    puVar3 = (undefined4 *)fn_8265C9E0(0x148);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      *puVar3 = &lbl_821A8D8C;
      puVar3[2] = 1;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        fn_82276818(puVar3 + 4,auStack_30,uVar2,*(undefined4 *)(param_2 + 0x28));
      }
      goto LAB_82276fb8;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_82276fb8:
  param_1[1] = puVar3;
  *param_1 = puVar3 + 4;
  return param_1;
}

