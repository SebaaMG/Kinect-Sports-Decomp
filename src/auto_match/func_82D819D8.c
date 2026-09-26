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
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D819D8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar5;
  undefined1 *puVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [48];
  
  puVar2 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x338);
  puVar2 = (undefined4 *)(param_1 + 0x310U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (undefined4 *)(param_1 + 800U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(param_2 + 0x40U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 8);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0) {
    fn_82CE4040(iVar1);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    fn_82CE4118();
  }
  *(int *)(param_2 + 0x58) = iVar1;
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    fn_82CE4040(iVar1);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    fn_82CE4118();
  }
  *(int *)(param_2 + 0x5c) = iVar1;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar5 = 3;
  }
  else {
    uVar5 = (undefined1)*(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x30);
  }
  *(undefined1 *)(param_2 + 0x28) = uVar5;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    puVar4 = auStack_30;
    auStack_30[0] = 0;
  }
  else {
    puVar4 = (undefined1 *)(*(int *)(param_1 + 0x1bc) + 0x34);
  }
  *(undefined1 *)(param_2 + 0x29) = *puVar4;
  *(char *)(param_2 + 0x50) = '\x01' - (*(int *)(param_1 + 0x5c) == 0);
  *(undefined1 *)(param_2 + 0x53) = *(undefined1 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1e40);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1e44);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined1 *)(param_2 + 0x94) = *(undefined1 *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_82CE4040();
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    fn_82CE4118();
  }
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x334);
  *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(param_1 + 0x340);
  *(undefined1 *)(param_2 + 0x75) = *(undefined1 *)(*(int *)(param_1 + 0x78) + 0x6d);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined1 *)(param_2 + 0x88) = *(undefined1 *)(param_1 + 0x304);
  *(undefined1 *)(param_2 + 0xa0) = *(undefined1 *)(param_1 + 0x305);
  *(undefined1 *)(param_2 + 0xa1) = *(undefined1 *)(param_1 + 0x306);
  *(undefined1 *)(param_2 + 0xa2) = *(undefined1 *)(param_1 + 0x307);
  *(undefined4 *)(param_2 + 0x98) = **(undefined4 **)(*(int *)(param_1 + 0x78) + 0x70);
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0x70) + 4);
  *(undefined1 *)(param_2 + 0x95) = *(undefined1 *)(*(int *)(param_1 + 0x78) + 0x6c);
  *(undefined1 *)(param_2 + 0xa3) = *(undefined1 *)(param_1 + 0xd6);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0xe4);
  *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_1 + 0x100);
  *(undefined1 *)(param_2 + 0xcc) = *(undefined1 *)(param_1 + 0xd5);
  *(char *)(param_2 + 0xcd) = (char)*(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  *(undefined1 *)(param_2 + 0xce) = *(undefined1 *)(param_1 + 200);
  *(undefined1 *)(param_2 + 0xd4) = *(undefined1 *)(param_1 + 0xb0);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0xb4);
  *(char *)(param_2 + 0xdc) = '\x01' - (*(int *)(param_1 + 0x1c0) == 0);
  return;
}

