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
extern int fn_822315A0();
extern int fn_822AF138();
extern int fn_822B8700();
extern int fn_822C64E0();
extern int fn_822C8C08();
extern int fn_82334110();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821A8D8C;


void fn_822BBB08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined1 auStack_38 [56];
  
  uVar1 = *(undefined4 *)(param_1 + 0x220);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  puVar4 = (undefined4 *)fn_8265C9E0(0x280);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821A8D8C;
    if (puVar4 + 4 != (undefined4 *)0x0) {
      fn_82334110(puVar4 + 4,uVar2,param_1,uVar1);
    }
  }
  puStack_40 = puVar4 + 4;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_3c = puVar4;
  uVar3 = fn_82365BD8(auStack_38,&puStack_40);
  fn_822C64E0(uVar1,uVar3);
  fn_822AF138(*(undefined4 *)(param_1 + 0x110),1);
  if (((*(int *)(param_1 + 0x24) == 0) || (*(int **)(param_1 + 0x238) == (int *)0x0)) ||
     (3 < (-(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3U))) {
    uVar3 = 0xffffffff821aca8c;
  }
  else {
    uVar3 = 0xffffffff821aca94;
  }
  fn_822C8C08(*(undefined4 *)(param_1 + 0x114),uVar3);
  fn_822B8700(*(undefined4 *)(param_1 + 0x118),0);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2b0) = lbl_82005748;
  if (puVar4 != (undefined4 *)0x0) {
    fn_822315A0(puVar4);
  }
  return;
}

