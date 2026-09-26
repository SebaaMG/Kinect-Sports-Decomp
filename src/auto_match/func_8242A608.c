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
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82361390();
extern int fn_823BC360();
extern int fn_823BCD98();
extern int fn_82446A88();
extern int fn_8265C9E0();
extern unsigned int iStack_44;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B9018;


void fn_8242A608(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  char cVar7;
  undefined4 *puVar6;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  uVar4 = fn_8265C9E0(0x18);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined4 *)uVar4;
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (uVar4 != 0xfffffffffffffff4) {
      fn_82446A88();
    }
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_821B9018;
      puVar5[5] = 0;
      puVar5[6] = 0;
      if (((uVar4 & 0xffffffff) != 0) && (cVar7 = fn_8223AAC0(uVar4), cVar7 != '\0')) {
        if (puVar5[6] != 0) {
          fn_822315A0();
        }
        puVar5[6] = (int)uVar4;
        puVar5[5] = (int)uVar4 + 0xc;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 **)(param_1 + 0x3c) = puVar5;
  *(undefined4 **)(param_1 + 0x38) = puVar5 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821A8D8C;
    if (puVar5 + 4 != (undefined4 *)0x0) {
      fn_823BCD98(puVar5 + 4,6,6,6,6,6,6);
    }
  }
  puStack_50 = puVar5 + 4;
  puStack_4c = puVar5;
  puVar6 = (undefined4 *)fn_82361390(auStack_48,&puStack_50);
  uVar2 = puVar6[1];
  uVar3 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_823BC360(param_1,param_1 + 0x38);
  fn_823BC360(param_1,param_1 + 0x30);
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822315A0(uVar4);
  }
  return;
}

