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


void fn_82C9EA58(int param_1,longlong param_2,int param_3,int param_4,char *param_5,int param_6,
                  int param_7,byte *param_8)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  
  uVar10 = (longlong)(int)*(uint *)(param_1 + 0x88) * (longlong)param_3;
  uVar6 = uVar10 + param_2;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff;
  uVar8 = ((uVar10 & 0x7fffffff) * 2 + param_2 & 0x7fffffff) * 2;
  uVar10 = uVar8 + uVar9 * -2;
  lVar7 = (uVar6 + (uVar6 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
          (ulonglong)*(uint *)(param_1 + 0xf84);
  pbVar3 = (byte *)lVar7;
  if ((*(int *)(param_1 + 0x50c8) == 0) && (*(int *)(param_1 + 0x120) == 2)) {
    lVar7 = lVar7 + -1;
    lVar12 = 6;
    do {
      lVar7 = lVar7 + 1;
      *(undefined1 *)lVar7 = 0xf;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  else {
    iVar2 = (int)pbVar3 - (int)param_5;
    lVar7 = 6;
    pcVar11 = param_5;
    do {
      cVar1 = *pcVar11;
      if (cVar1 == '\0') {
        pcVar11[iVar2] = '\x0f';
      }
      else if (cVar1 == '\x01') {
        pcVar11[iVar2] = -0x31;
      }
      else if (cVar1 == '\x02') {
        pcVar11[iVar2] = '?';
      }
      else if (cVar1 == '\x04') {
        pcVar11[iVar2] =
             (char)*(undefined4 *)
                    ((uint)(byte)pcVar11[(int)param_8 - (int)param_5] * 4 + -0x7ce88ce8);
      }
      pcVar11 = pcVar11 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (in_stack_00000064 == 0) {
    if (in_stack_0000006c != 0) {
      pbVar3[*(int *)(param_1 + 0xd48)] = pbVar3[*(int *)(param_1 + 0xd48)] & 0xfc;
      pbVar3[2] = pbVar3[2] & 0xfc;
      pbVar3[4] = pbVar3[4] & 0xfc;
      pbVar3[5] = pbVar3[5] & 0xfc;
    }
  }
  else {
    pbVar3[1] = pbVar3[1] & 0xf3;
    if (in_stack_0000006c == 0) {
      *pbVar3 = *pbVar3 & 0xf3;
      pbVar3[4] = pbVar3[4] & 0xf3;
      pbVar3[5] = pbVar3[5] & 0xf3;
    }
    else {
      *pbVar3 = *pbVar3 & 0xf0;
      pbVar3[2] = pbVar3[2] & 0xfc;
      pbVar3[4] = pbVar3[4] & 0xf0;
      pbVar3[5] = pbVar3[5] & 0xf0;
    }
  }
  if ((*(int *)(param_1 + 0x120) != 2) && (param_4 != 4)) {
    if ((in_stack_00000064 == 0) &&
       (((iVar2 = (int)((uVar8 & 0x7fffffff) << 1),
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar2) != 0x4000 &&
         (iVar5 = (int)((uVar10 & 0xffffffff) << 1),
         *(short *)(iVar5 + *(int *)(param_1 + 0x6f0)) ==
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar2))) &&
        (*(short *)(*(int *)(param_1 + 0x6f4) + iVar5) ==
         *(short *)(*(int *)(param_1 + 0x6f4) + iVar2))))) {
      *pbVar3 = ((byte)*(undefined4 *)
                        ((*(char *)(param_6 + 2) * 0x10 + (uint)*(byte *)(in_stack_00000054 + 2)) *
                         4 + -0x7ce88e28) |
                (byte)*(undefined4 *)((*param_5 * 0x10 + (uint)*param_8) * 4 + -0x7ce88f68)) &
                *pbVar3;
    }
    if (((in_stack_0000006c == 0) &&
        (iVar2 = (int)((uVar8 & 0x7fffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x6f0) + iVar2) != 0x4000)) &&
       ((psVar4 = (short *)(*(int *)(param_1 + 0x6f0) + iVar2), psVar4[-1] == *psVar4 &&
        (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar2), psVar4[-1] == *psVar4)))) {
      *pbVar3 = ((byte)*(undefined4 *)
                        ((*(char *)(param_7 + 1) * 0x10 + (uint)*(byte *)(in_stack_0000005c + 1)) *
                         4 + -0x7ce890a8) |
                (byte)*(undefined4 *)((*param_5 * 0x10 + (uint)*param_8) * 4 + -0x7ce891e8)) &
                *pbVar3;
    }
    if (((in_stack_00000064 == 0) &&
        (iVar2 = (int)((uVar8 & 0x7fffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x6f0) + iVar2 + 2) != 0x4000)) &&
       ((iVar5 = (int)((uVar10 & 0xffffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x6f0) + iVar5 + 2) ==
        *(short *)(*(int *)(param_1 + 0x6f0) + iVar2 + 2) &&
        (*(short *)(*(int *)(param_1 + 0x6f4) + iVar5 + 2) ==
         *(short *)(*(int *)(param_1 + 0x6f4) + iVar2 + 2))))) {
      pbVar3[1] = ((byte)*(undefined4 *)((param_5[1] * 0x10 + (uint)param_8[1]) * 4 + -0x7ce88f68) |
                  (byte)*(undefined4 *)
                         ((*(char *)(param_6 + 3) * 0x10 + (uint)*(byte *)(in_stack_00000054 + 3)) *
                          4 + -0x7ce88e28)) & pbVar3[1];
    }
    iVar2 = (int)((uVar8 & 0x7fffffff) << 1);
    if (((*(short *)(*(int *)(param_1 + 0x6f0) + iVar2 + 2) != 0x4000) &&
        (psVar4 = (short *)(*(int *)(param_1 + 0x6f0) + iVar2), *psVar4 == psVar4[1])) &&
       (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar2), *psVar4 == psVar4[1])) {
      pbVar3[1] = ((byte)*(undefined4 *)((param_5[1] * 0x10 + (uint)param_8[1]) * 4 + -0x7ce891e8) |
                  (byte)*(undefined4 *)((*param_5 * 0x10 + (uint)*param_8) * 4 + -0x7ce890a8)) &
                  pbVar3[1];
    }
    iVar5 = (int)((uVar9 * 2 + uVar8 & 0x7fffffff) << 1);
    if (((*(short *)(*(int *)(param_1 + 0x6f0) + iVar5) != 0x4000) &&
        (*(short *)(*(int *)(param_1 + 0x6f0) + iVar2) ==
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar5))) &&
       (*(short *)(*(int *)(param_1 + 0x6f4) + iVar2) ==
        *(short *)(*(int *)(param_1 + 0x6f4) + iVar5))) {
      pbVar3[2] = ((byte)*(undefined4 *)((param_5[2] * 0x10 + (uint)param_8[2]) * 4 + -0x7ce88f68) |
                  (byte)*(undefined4 *)((*param_5 * 0x10 + (uint)*param_8) * 4 + -0x7ce88e28)) &
                  pbVar3[2];
    }
    if (((in_stack_0000006c == 0) && (*(short *)(*(int *)(param_1 + 0x6f0) + iVar5) != 0x4000)) &&
       ((psVar4 = (short *)(*(int *)(param_1 + 0x6f0) + iVar5), psVar4[-1] == *psVar4 &&
        (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar5), psVar4[-1] == *psVar4)))) {
      pbVar3[2] = ((byte)*(undefined4 *)((param_5[2] * 0x10 + (uint)param_8[2]) * 4 + -0x7ce891e8) |
                  (byte)*(undefined4 *)
                         ((*(char *)(param_7 + 3) * 0x10 + (uint)*(byte *)(in_stack_0000005c + 3)) *
                          4 + -0x7ce890a8)) & pbVar3[2];
    }
    if (((*(short *)(*(int *)(param_1 + 0x6f0) + iVar5 + 2) != 0x4000) &&
        (*(short *)(*(int *)(param_1 + 0x6f0) + iVar2 + 2) ==
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar5 + 2))) &&
       (*(short *)(*(int *)(param_1 + 0x6f4) + iVar2 + 2) ==
        *(short *)(*(int *)(param_1 + 0x6f4) + iVar5 + 2))) {
      pbVar3[3] = ((byte)*(undefined4 *)((param_5[3] * 0x10 + (uint)param_8[3]) * 4 + -0x7ce88f68) |
                  (byte)*(undefined4 *)((param_5[1] * 0x10 + (uint)param_8[1]) * 4 + -0x7ce88e28)) &
                  pbVar3[3];
    }
    if (((*(short *)(*(int *)(param_1 + 0x6f0) + iVar5 + 2) != 0x4000) &&
        (psVar4 = (short *)(*(int *)(param_1 + 0x6f0) + iVar5), *psVar4 == psVar4[1])) &&
       (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar5), *psVar4 == psVar4[1])) {
      pbVar3[3] = ((byte)*(undefined4 *)((param_5[3] * 0x10 + (uint)param_8[3]) * 4 + -0x7ce891e8) |
                  (byte)*(undefined4 *)((param_5[2] * 0x10 + (uint)param_8[2]) * 4 + -0x7ce890a8)) &
                  pbVar3[3];
    }
    uVar9 = (longlong)(int)*(uint *)(param_1 + 0x88) * (longlong)param_3 + param_2;
    if (((in_stack_00000064 == 0) &&
        (iVar2 = (int)((uVar9 & 0x7fffffff) << 1),
        *(short *)(iVar2 + *(int *)(param_1 + 0x6f8)) != 0x4000)) &&
       ((iVar5 = (int)((uVar9 - *(uint *)(param_1 + 0x88) & 0xffffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x6f8) + iVar5) ==
        *(short *)(*(int *)(param_1 + 0x6f8) + iVar2) &&
        (*(short *)(*(int *)(param_1 + 0x6fc) + iVar5) ==
         *(short *)(*(int *)(param_1 + 0x6fc) + iVar2))))) {
      pbVar3[4] = ((byte)*(undefined4 *)((param_5[4] * 0x10 + (uint)param_8[4]) * 4 + -0x7ce88f68) |
                  (byte)*(undefined4 *)
                         ((*(char *)(param_6 + 4) * 0x10 + (uint)*(byte *)(in_stack_00000054 + 4)) *
                          4 + -0x7ce88e28)) & pbVar3[4];
      pbVar3[5] = ((byte)*(undefined4 *)((param_5[5] * 0x10 + (uint)param_8[5]) * 4 + -0x7ce88f68) |
                  (byte)*(undefined4 *)
                         ((*(char *)(param_6 + 5) * 0x10 + (uint)*(byte *)(in_stack_00000054 + 5)) *
                          4 + -0x7ce88e28)) & pbVar3[5];
    }
    if (in_stack_0000006c == 0) {
      iVar2 = (int)((uVar9 & 0x7fffffff) << 1);
      if (((*(short *)(iVar2 + *(int *)(param_1 + 0x6f8)) != 0x4000) &&
          (psVar4 = (short *)(iVar2 + *(int *)(param_1 + 0x6f8)), psVar4[-1] == *psVar4)) &&
         (psVar4 = (short *)(*(int *)(param_1 + 0x6fc) + iVar2), psVar4[-1] == *psVar4)) {
        pbVar3[4] = ((byte)*(undefined4 *)((param_5[4] * 0x10 + (uint)param_8[4]) * 4 + -0x7ce891e8)
                    | (byte)*(undefined4 *)
                             ((*(char *)(param_7 + 4) * 0x10 +
                              (uint)*(byte *)(in_stack_0000005c + 4)) * 4 + -0x7ce890a8)) &
                    pbVar3[4];
        pbVar3[5] = ((byte)*(undefined4 *)((param_5[5] * 0x10 + (uint)param_8[5]) * 4 + -0x7ce891e8)
                    | (byte)*(undefined4 *)
                             ((*(char *)(param_7 + 5) * 0x10 +
                              (uint)*(byte *)(in_stack_0000005c + 5)) * 4 + -0x7ce890a8)) &
                    pbVar3[5];
      }
    }
  }
  return;
}

