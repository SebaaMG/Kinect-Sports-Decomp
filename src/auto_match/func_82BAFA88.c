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
extern int fn_82B7BD28();
extern int fn_82BAF3D8();
extern int fn_82BC0928();
extern int fn_82BC38E0();


void fn_82BAFA88(int *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(char *)(param_1 + 8) = param_2;
  param_1[9] = 0;
  if (param_2 == '\0') {
    param_1[10] = 0x20;
  }
  else {
    param_1[10] = 0;
  }
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x1c);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BAF3D8(puVar4,*(undefined4 *)(*param_1 + 0x5ac),0xffffffff82baf478,0xffffffff82baf468,
                  0x10);
  }
  param_1[1] = (int)puVar4;
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x1c);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BAF3D8(puVar4,*(undefined4 *)(*param_1 + 0x5ac),0xffffffff82baf168,0xffffffff82baf118,
                  0x10);
  }
  param_1[2] = (int)puVar4;
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x1c);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BAF3D8(puVar4,*(undefined4 *)(*param_1 + 0x5ac),0xffffffff82baf198,0xffffffff82baf120,
                  0x10);
  }
  param_1[3] = (int)puVar4;
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x1c);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BAF3D8(puVar4,*(undefined4 *)(*param_1 + 0x5ac),0xffffffff82baf1e8,0xffffffff82baf130,
                  0x10);
  }
  param_1[4] = (int)puVar4;
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x1c);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BAF3D8(puVar4,*(undefined4 *)(*param_1 + 0x5ac),0xffffffff82baf258,0xffffffff82baf148,
                  0x10);
  }
  param_1[5] = (int)puVar4;
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x34);
  *puVar2 = uVar1;
  if (puVar2 + 1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82BC0928(puVar2 + 1,0,0,*param_1);
  }
  param_1[6] = iVar3;
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
  *puVar2 = uVar1;
  if (puVar2 + 1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82BC38E0(puVar2 + 1,*param_1);
  }
  param_1[7] = iVar3;
  *(undefined4 *)(*param_1 + 0x598) = 0;
  *(undefined4 *)(*param_1 + 0x57c) = 0;
  *(undefined4 *)(*param_1 + 0x580) = 0;
  *(undefined4 *)(*param_1 + 0x584) = 1;
  *(undefined4 *)(*param_1 + 0x588) = 0;
  return;
}

