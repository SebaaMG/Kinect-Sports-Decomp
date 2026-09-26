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
extern unsigned int *auStack_4c;
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern int fn_82F2AC28();
extern unsigned int uStack_50;


void fn_82F1B020(int param_1,undefined2 *param_2,short *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  iVar3 = 0;
  auStack_4c[0] = 0;
  uStack_50 = 0;
  if (param_6 == 0) {
    iVar4 = 0;
    if (0 < (longlong)*param_3 + -2) {
      puVar5 = param_2 + -2;
      iVar4 = 0;
      do {
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 2;
        iVar2 = fn_82F2A8A8(param_1,*puVar1,*puVar5,
                             *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1),
                             auStack_4c,&uStack_50);
        iVar3 = iVar3 + 2;
        iVar4 = iVar2 + iVar4;
      } while (iVar3 < *param_3 + -2);
    }
    iVar3 = fn_82F2A9C8(param_1,(param_2 + iVar3)[1],param_2[iVar3],
                              *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1),
                              auStack_4c,&uStack_50);
    if (param_5 < 4) {
      *(int *)(param_1 + 0x6f9c) = *(int *)(param_1 + 0x6f9c) + iVar3 + iVar4;
    }
    else {
      *(int *)(param_1 + 0x6fa0) = *(int *)(param_1 + 0x6fa0) + iVar3 + iVar4;
    }
  }
  else if (param_5 < 4) {
    iVar3 = fn_82F2AC28(param_1,*param_2,*(undefined4 *)(param_1 + 0x4e50),0x77,param_4);
    if (2 < *param_3) {
      iVar4 = 2;
      puVar5 = param_2;
      if (2 < *param_3 + -2) {
        do {
          iVar2 = fn_82F2A8A8(param_1,puVar5[3],puVar5[2],
                               *(undefined4 *)((*(int *)(param_1 + 0x4e48) + 0x138b) * 4 + param_1),
                               auStack_4c,&uStack_50);
          iVar4 = iVar4 + 2;
          iVar3 = iVar2 + iVar3;
          puVar5 = puVar5 + 2;
        } while (iVar4 < *param_3 + -2);
      }
      iVar4 = fn_82F2A8A8(param_1,(param_2 + iVar4)[1],param_2[iVar4],
                           *(undefined4 *)((*(int *)(param_1 + 0x4e48) + 0x138e) * 4 + param_1),
                           auStack_4c,&uStack_50);
      iVar3 = iVar4 + iVar3;
    }
    *(int *)(param_1 + 0x6fa4) = iVar3 + *(int *)(param_1 + 0x6fa4);
  }
  else {
    iVar3 = fn_82F2AC28(param_1,*param_2,*(undefined4 *)(param_1 + 0x4e54),0x77,param_4);
    if (2 < *param_3) {
      iVar4 = 2;
      puVar5 = param_2;
      if (2 < *param_3 + -2) {
        do {
          iVar2 = fn_82F2A8A8(param_1,puVar5[3],puVar5[2],
                               *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1),
                               auStack_4c,&uStack_50);
          iVar4 = iVar4 + 2;
          iVar3 = iVar2 + iVar3;
          puVar5 = puVar5 + 2;
        } while (iVar4 < *param_3 + -2);
      }
      iVar4 = fn_82F2A8A8(param_1,(param_2 + iVar4)[1],param_2[iVar4],
                           *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1),
                           auStack_4c,&uStack_50);
      iVar3 = iVar4 + iVar3;
    }
    *(int *)(param_1 + 0x6fa8) = *(int *)(param_1 + 0x6fa8) + iVar3;
  }
  return;
}

