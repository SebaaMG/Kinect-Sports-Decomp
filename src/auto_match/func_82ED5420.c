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


void fn_82ED5420(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  short *psVar5;
  short *psVar6;
  byte *pbVar7;
  short *psVar8;
  byte *pbVar9;
  longlong lVar10;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  psVar8 = (short *)(in_stack_0000005c + -2);
  pbVar1 = (byte *)(param_7 + -1);
  lVar10 = 8;
  psVar5 = (short *)(in_stack_00000054 + 4);
  pbVar9 = (byte *)(param_4 + -1);
  pbVar2 = (byte *)(param_6 + -1);
  psVar6 = (short *)(param_8 + -2);
  pbVar3 = (byte *)(param_5 + -1);
  pbVar4 = (byte *)(param_3 + 2);
  pbVar7 = (byte *)(param_2 + 2);
  do {
    psVar6[1] = (ushort)pbVar7[-2] - (ushort)pbVar7[(param_5 - param_2) + -2];
    psVar6[2] = (ushort)pbVar7[-1] - (ushort)pbVar3[2];
    psVar6[3] = (ushort)*pbVar7 - (ushort)pbVar3[3];
    psVar6[4] = (ushort)pbVar7[1] - (ushort)pbVar3[4];
    psVar6[5] = (ushort)pbVar7[2] - (ushort)pbVar3[5];
    psVar6[6] = (ushort)pbVar7[3] - (ushort)pbVar3[6];
    psVar6[7] = (ushort)pbVar7[4] - (ushort)pbVar3[7];
    psVar6[8] = (ushort)pbVar7[5] - (ushort)pbVar3[8];
    psVar6[9] = (ushort)pbVar7[6] - (ushort)pbVar3[9];
    psVar6[10] = (ushort)pbVar7[7] - (ushort)pbVar3[10];
    psVar6[0xb] = (ushort)pbVar7[8] - (ushort)pbVar3[0xb];
    psVar6[0xc] = (ushort)pbVar7[9] - (ushort)pbVar3[0xc];
    psVar6[0xd] = (ushort)pbVar7[10] - (ushort)pbVar3[0xd];
    psVar6[0xe] = (ushort)pbVar7[0xb] - (ushort)pbVar3[0xe];
    psVar6[0xf] = (ushort)pbVar7[0xc] - (ushort)pbVar3[0xf];
    psVar6[0x10] = (ushort)pbVar7[0xd] - (ushort)pbVar3[0x10];
    psVar6[0x11] = (ushort)pbVar7[0xe] - (ushort)pbVar3[0x11];
    psVar6[0x12] = (ushort)pbVar7[0xf] - (ushort)pbVar3[0x12];
    psVar6[0x13] = (ushort)pbVar7[0x10] - (ushort)pbVar3[0x13];
    psVar6[0x14] = (ushort)pbVar7[0x11] - (ushort)pbVar3[0x14];
    psVar6[0x15] = (ushort)pbVar7[0x12] - (ushort)pbVar3[0x15];
    psVar6[0x16] = (ushort)pbVar7[0x13] - (ushort)pbVar3[0x16];
    psVar6[0x17] = (ushort)pbVar7[0x14] - (ushort)pbVar3[0x17];
    psVar6[0x18] = (ushort)pbVar7[0x15] - (ushort)pbVar3[0x18];
    psVar6[0x19] = (ushort)pbVar7[0x16] - (ushort)pbVar3[0x19];
    psVar6[0x1a] = (ushort)pbVar7[0x17] - (ushort)pbVar3[0x1a];
    psVar6[0x1b] = (ushort)pbVar7[0x18] - (ushort)pbVar3[0x1b];
    psVar6[0x1c] = (ushort)pbVar7[0x19] - (ushort)pbVar3[0x1c];
    psVar6[0x1d] = (ushort)pbVar7[0x1a] - (ushort)pbVar3[0x1d];
    psVar6[0x1e] = (ushort)pbVar7[0x1b] - (ushort)pbVar3[0x1e];
    psVar6[0x1f] = (ushort)pbVar7[0x1c] - (ushort)pbVar3[0x1f];
    pbVar3 = pbVar3 + 0x20;
    psVar6 = psVar6 + 0x20;
    *psVar6 = (ushort)pbVar7[0x1d] - (ushort)*pbVar3;
    psVar5[-2] = (ushort)pbVar4[-2] - (ushort)pbVar2[1];
    psVar5[-1] = (ushort)pbVar4[-1] - (ushort)pbVar2[2];
    *psVar5 = (ushort)*pbVar4 - (ushort)pbVar2[3];
    psVar5[1] = (ushort)pbVar4[1] - (ushort)pbVar2[4];
    psVar5[2] = (ushort)pbVar4[2] - (ushort)pbVar2[5];
    psVar5[3] = (ushort)pbVar4[3] - (ushort)pbVar2[6];
    psVar5[4] = (ushort)pbVar4[4] - (ushort)pbVar2[7];
    pbVar2 = pbVar2 + 8;
    psVar5[5] = (ushort)pbVar4[5] - (ushort)*pbVar2;
    pbVar7 = pbVar7 + 0x20;
    *(ushort *)((in_stack_0000005c - in_stack_00000054) + -4 + (int)psVar5) =
         (ushort)pbVar4[(param_4 - param_3) + -2] - (ushort)pbVar1[1];
    psVar5 = psVar5 + 8;
    pbVar4 = pbVar4 + 8;
    psVar8[2] = (ushort)pbVar9[2] - (ushort)pbVar1[2];
    psVar8[3] = (ushort)pbVar9[3] - (ushort)pbVar1[3];
    psVar8[4] = (ushort)pbVar9[4] - (ushort)pbVar1[4];
    psVar8[5] = (ushort)pbVar9[5] - (ushort)pbVar1[5];
    psVar8[6] = (ushort)pbVar9[6] - (ushort)pbVar1[6];
    psVar8[7] = (ushort)pbVar9[7] - (ushort)pbVar1[7];
    pbVar1 = pbVar1 + 8;
    pbVar9 = pbVar9 + 8;
    psVar8 = psVar8 + 8;
    *psVar8 = (ushort)*pbVar9 - (ushort)*pbVar1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

