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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822733C8();
extern int fn_8259BA48();
extern int fn_8259C558();
extern int fn_825BF428();
extern int fn_8265CA20();
extern int fn_827D55A0();
extern int fn_827D9A90();
extern int fn_82F63CA0();
extern unsigned int lbl_821C7BA0;


void fn_8259A698(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [64];
  
  puVar1 = (undefined4 *)param_1[0x2b];
  *param_1 = &lbl_821C7BA0;
  if (puVar1 != (undefined4 *)param_1[0x2c]) {
    do {
      fn_827D55A0(param_1[0x1d],*puVar1,0);
      fn_82F63CA0(puVar1,puVar1 + 1,(param_1[0x2c] - (int)(puVar1 + 1) >> 2) << 2);
      param_1[0x2c] = param_1[0x2c] + -4;
    } while (puVar1 != (undefined4 *)param_1[0x2c]);
  }
  piVar4 = *(int **)param_1[0xe];
  if (piVar4 != (int *)param_1[0xe]) {
    do {
      if (*(int *)((int)piVar4 + 0xc) != 0) {
        fn_8265CA20();
      }
      piVar4 = (int *)fn_8259BA48(auStack_40,param_1 + 0xd,piVar4);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)param_1[0xe]);
  }
  fn_8259C558(param_1 + 0x18);
  if (param_1[0x2b] != 0) {
    fn_8265CA20();
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = *(undefined4 **)(param_1[0x28] + 4);
  while (*(char *)((int)puVar1 + 0x11) == '\0') {
    fn_822733C8(param_1 + 0x27,puVar1[2]);
    puVar2 = (undefined4 *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(undefined4 *)(param_1[0x28] + 4) = param_1[0x28];
  *(undefined4 *)param_1[0x28] = param_1[0x28];
  *(undefined4 *)(param_1[0x28] + 8) = param_1[0x28];
  param_1[0x29] = 0;
  fn_8265CA20(param_1[0x28]);
  iVar5 = param_1[0x1e];
  if (iVar5 != 0) {
    iVar3 = param_1[0x1f];
    if (iVar5 != iVar3) {
      piVar4 = (int *)(iVar5 + 8);
      do {
        if (*piVar4 != 0) {
          fn_822315A0();
        }
        iVar5 = iVar5 + 0x14;
        piVar4 = piVar4 + 5;
      } while (iVar5 != iVar3);
    }
    fn_8265CA20(param_1[0x1e]);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  fn_825BF428(param_1 + 0xd);
  fn_827D9A90(param_1);
  return;
}

