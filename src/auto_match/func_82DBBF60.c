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
extern int fn_82D92F30();
extern int fn_82DA0180();
extern unsigned int lbl_82142544;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82DBBF60(int param_1,int *param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  byte bVar5;
  ushort *puVar6;
  byte abStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  short sStack_2a;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = *(ushort **)(param_1 + 0x10);
  if (puVar6 == (ushort *)0x0) {
    puVar6 = (ushort *)0x0;
  }
  else {
    uVar1 = **(ushort **)(puVar6 + 10);
    puVar4 = *(ushort **)(puVar6 + 10);
    while (0x16 < uVar1) {
      uVar1 = **(ushort **)(puVar4 + 10);
      puVar6 = puVar4;
      puVar4 = *(ushort **)(puVar4 + 10);
    }
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*param_3 == 0x1a) && (puVar6 != (ushort *)0x0)) {
    *(undefined4 *)(param_3 + 10) = *(undefined4 *)(puVar6 + 10);
    param_3[9] = puVar6[9];
    *(short **)(puVar6 + 10) = param_3;
    puVar6[9] = param_3[8];
  }
  else {
    psVar3 = *(short **)(param_1 + 0x10);
    if ((psVar3 == (short *)0x0) || (*psVar3 != 0x1b)) {
      *(short **)(param_1 + 0x10) = param_3;
      if (iVar2 == 0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),auStack_40);
        param_3[9] = sStack_2a;
        *(undefined4 *)(param_3 + 10) = uStack_30;
        return;
      }
      *(undefined4 *)(param_3 + 10) = *(undefined4 *)(iVar2 + 0xc);
      param_3[9] = *(short *)(iVar2 + 0x10);
      *(short **)(iVar2 + 0xc) = param_3;
      *(short *)(iVar2 + 0x10) = param_3[8];
    }
    else {
      *(undefined4 *)(param_3 + 10) = *(undefined4 *)(psVar3 + 10);
      param_3[9] = *(short *)(*(int *)(param_1 + 0x10) + 0x12);
      *(short **)(*(int *)(param_1 + 0x10) + 0x14) = param_3;
      *(short *)(*(int *)(param_1 + 0x10) + 0x12) = param_3[8];
    }
  }
  if (iVar2 != 0) {
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    abStack_60[0] = 0;
    bVar5 = fn_82DA0180(param_3,&uStack_50,abStack_60);
    fn_82D92F30(param_2,param_1,&uStack_50);
    uVar1 = *(ushort *)
             (&lbl_82142544 +
             (((*(byte *)(*(int *)(param_1 + 0x18) + 0xd2) |
               *(byte *)(*(int *)(param_1 + 0x14) + 0xd2)) & abStack_60[0]) & 7) * 2);
    param_2[3] = param_2[3] - (uint)uVar1;
    *(ushort *)(*(int *)(param_1 + 0x30) + 0x14) =
         *(short *)(*(int *)(param_1 + 0x30) + 0x14) - uVar1;
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x12) = *(byte *)(iVar2 + 0x12) | bVar5;
    }
  }
  return;
}

