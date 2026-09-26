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
extern int fn_82CE5410();
extern int fn_82D8E878();
extern int fn_82DA0180();
extern unsigned int lbl_82142544;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DBBBA0(int param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  byte abStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = *(ushort **)(param_1 + 0x10);
  if (puVar5 != (ushort *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    if (*puVar5 == param_3) {
      puVar3 = *(ushort **)(puVar5 + 10);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[3] = puVar3;
        *(ushort *)(puVar2 + 4) = puVar5[9];
      }
      *(uint *)(param_1 + 0x10) = 0x17 - ((0x16 < *puVar3) + 0x17) & (uint)puVar3;
LAB_82dbbc6c:
      if (puVar2 != (undefined4 *)0x0) {
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        abStack_50[0] = 0;
        fn_82DA0180(puVar5,&uStack_40,abStack_50);
        abStack_50[0] =
             (*(byte *)(*(int *)(param_1 + 0x18) + 0xd2) |
             *(byte *)(*(int *)(param_1 + 0x14) + 0xd2)) & abStack_50[0];
        uVar1 = *(ushort *)(&lbl_82142544 + (abStack_50[0] & 7) * 2);
        param_2[3] = (uint)uVar1 + param_2[3];
        *(ushort *)(*(int *)(param_1 + 0x30) + 0x14) =
             *(short *)(*(int *)(param_1 + 0x30) + 0x14) + uVar1;
        fn_82D8E878(param_2,*puVar2,&uStack_40);
      }
      uVar1 = puVar5[8];
      iVar4 = fn_82CE5410();
      (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),puVar5,uVar1);
    }
    else {
      uVar1 = **(ushort **)(puVar5 + 10);
      puVar3 = puVar5;
      puVar5 = *(ushort **)(puVar5 + 10);
      while (0x16 < uVar1) {
        if (uVar1 == param_3) {
          *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(puVar5 + 10);
          puVar3[9] = puVar5[9];
          goto LAB_82dbbc6c;
        }
        uVar1 = **(ushort **)(puVar5 + 10);
        puVar3 = puVar5;
        puVar5 = *(ushort **)(puVar5 + 10);
      }
    }
  }
  return;
}

