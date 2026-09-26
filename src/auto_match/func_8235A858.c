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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82361390();
extern int fn_823BC360();
extern int fn_823BCBF8();
extern int fn_823BCD98();
extern int fn_823BD380();
extern int fn_8265C9E0();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_82195A34;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B2964;
extern unsigned int uStack_78;


void fn_8235A858(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r0;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar8;
  undefined4 *puVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  
  puVar4 = (undefined4 *)((int)&puStack_80 + in_r0 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  uStack_78 = lbl_82195A34;
  puVar4 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821A8D8C;
    puVar4[1] = 1;
    puVar4[2] = 1;
    if (puVar4 + 4 != (undefined4 *)0x0) {
      fn_823BCBF8(puVar4 + 4,3,9);
    }
  }
  puStack_80 = puVar4 + 4;
  puStack_7c = puVar4;
  puVar5 = (undefined4 *)fn_82361390(auStack_70,&puStack_80);
  uVar1 = puVar5[1];
  uVar2 = *puVar5;
  *puVar5 = 0;
  puVar5[1] = 0;
  iVar3 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  puVar5 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      fn_823BD380(puVar5 + 3,3,5,2,7,0,0,5);
    }
  }
  puVar6 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      puVar6[4] = 0;
      puVar6[3] = &lbl_821B2964;
      puVar6[5] = 0;
      puVar6[6] = 0;
      if ((puVar5 != (undefined4 *)0x0) && (cVar8 = fn_8223AAC0(puVar5), cVar8 != '\0')) {
        if (puVar6[6] != 0) {
          fn_822315A0();
        }
        puVar6[6] = puVar5;
        puVar6[5] = puVar5 + 3;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 **)(param_1 + 0x3c) = puVar6;
  *(undefined4 **)(param_1 + 0x38) = puVar6 + 3;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  puVar6 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &lbl_821A8D8C;
    puVar6[1] = 1;
    puVar6[2] = 1;
    if (puVar6 + 4 != (undefined4 *)0x0) {
      fn_823BCD98(puVar6 + 4,3,9,3,9,5,9);
    }
  }
  puStack_80 = puVar6 + 4;
  puStack_7c = puVar6;
  puVar7 = (undefined4 *)fn_82361390(auStack_68,&puStack_80);
  uVar1 = puVar7[1];
  uVar2 = *puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  iVar3 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  fn_823BC360(param_1,param_1 + 0x30);
  fn_823BC360(param_1,param_1 + 0x38);
  fn_823BC360(param_1,param_1 + 0x40);
  if (puVar6 != (undefined4 *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
  if (puVar4 != (undefined4 *)0x0) {
    fn_822315A0(puVar4);
  }
  return;
}

