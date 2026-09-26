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
extern unsigned int *auStack_20;
extern unsigned int *auStack_40;
extern int fn_822ABBF0();
extern int fn_82359558();
extern int fn_823C88F0();
extern int fn_823CA0A8();
extern int fn_823CA708();
extern unsigned int iStack_34;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821B2FB8;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823C8C78(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 auStack_40 [2];
  undefined **ppuStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  
  iVar4 = fn_82359558(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x10));
  if (iVar4 != 0) {
    iStack_34 = 0;
    ppuStack_38 = &lbl_821B2FB8;
    fn_822ABBF0(*(undefined4 *)((*(int **)(iVar4 + 0x1c))[4] * 4 + **(int **)(iVar4 + 0x1c)),
                      &ppuStack_38);
    ppuStack_38 = &lbl_821AC4A4;
    if (iStack_34 != 0) {
      fn_823C88F0(param_1,iStack_34,auStack_20,&uStack_30,auStack_40);
      *(undefined4 *)(param_1 + 0x228) = auStack_40[0];
      puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + 0x1a0U & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      *(undefined4 *)(param_1 + 0x214) = uStack_30;
      *(undefined4 *)(param_1 + 0x218) = uStack_2c;
      *(undefined4 *)(param_1 + 0x21c) = uStack_28;
      return;
    }
  }
  uVar3 = fn_823CA0A8(param_1);
  fn_823CA708(param_1,uVar3);
  return;
}

