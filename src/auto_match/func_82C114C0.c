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
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C10F40();
extern int fn_82F68CC0();


undefined8 fn_82C114C0(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar4;
  undefined8 uVar3;
  longlong lVar5;
  undefined4 *puStack_50;
  int *piStack_4c;
  int aiStack_48 [18];
  
  puStack_50 = (undefined4 *)0x0;
  piStack_4c = (int *)0x0;
  aiStack_48[0] = 0;
  uVar2 = fn_82C10F40(param_1[0x12],*(ushort *)(param_3 + 1) & 0xff,aiStack_48);
  if (-1 < (int)uVar2) {
    if (*(int *)(aiStack_48[0] + 0x24) == 2) {
      if ((*param_3 == 0) || (param_3[2] != 0)) {
        uVar2 = (**(code **)(param_1[6] + 0x24))(param_1[6],param_2);
        if (-1 < (int)uVar2) {
          return uVar2;
        }
        goto LAB_82c116d0;
      }
      *(undefined4 *)(aiStack_48[0] + 0x24) = 1;
    }
    uVar2 = fn_82C10AD0(*param_1,0x20,0x40,&puStack_50);
    if (-1 < (int)uVar2) {
      puVar4 = (undefined8 *)(puStack_50 + -2);
      lVar5 = 8;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      puStack_50[0xf] = 0;
      puStack_50[0xe] = 0;
      if (param_3[8] != 0) {
        uVar2 = fn_82C10AD0(*param_1,0x20,0xc,&piStack_4c);
        if ((int)uVar2 < 0) goto LAB_82c116d0;
        *piStack_4c = 0;
        piStack_4c[1] = 0;
        piStack_4c[2] = 0;
        uVar2 = fn_82C10AD0(*param_1,0x20,*(undefined4 *)(param_3[9] + 4),piStack_4c);
        if ((int)uVar2 < 0) goto LAB_82c116d0;
        fn_82F68CC0(*piStack_4c,*(undefined4 *)param_3[9],((undefined4 *)param_3[9])[1]);
        piStack_4c[1] = *(int *)(param_3[9] + 4);
        piStack_4c[2] = *(int *)(param_3[9] + 8);
      }
      *puStack_50 = (int)param_2;
      puStack_50[1] = *param_3;
      *(ushort *)(puStack_50 + 2) = *(ushort *)(param_3 + 1) & 0xff;
      puStack_50[3] = param_3[2];
      puStack_50[4] = param_3[3];
      puStack_50[5] = param_3[4];
      puStack_50[6] = param_3[4];
      puStack_50[0xd] = 0;
      puStack_50[0xc] = 0;
      *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_3 + 6);
      puStack_50[10] = param_3[8];
      puStack_50[0xb] = piStack_4c;
      if ((param_3[2] == 0) || (param_3[2] == *(int *)(aiStack_48[0] + 0x2c))) {
        *(int *)(aiStack_48[0] + 0x2c) = param_3[2] + param_3[4];
        if (*(int *)(aiStack_48[0] + 0x18) == 0) {
          *(undefined4 **)(aiStack_48[0] + 0x18) = puStack_50;
          *(undefined4 **)(aiStack_48[0] + 0x1c) = puStack_50;
          iVar1 = *(int *)(aiStack_48[0] + 0x18);
        }
        else {
          iVar1 = *(int *)(aiStack_48[0] + 0x1c);
          *(undefined4 **)(iVar1 + 0x3c) = puStack_50;
          puStack_50[0xe] = iVar1;
          *(undefined4 **)(aiStack_48[0] + 0x1c) = puStack_50;
        }
        *(int *)(aiStack_48[0] + 0x14) = *(int *)(aiStack_48[0] + 0x14) + 1;
        uVar3 = *(undefined8 *)(iVar1 + 0x20);
        *(undefined8 *)(param_1 + 8) = uVar3;
        if (param_1[0xc] != 0) {
          return uVar2;
        }
        *(undefined8 *)(param_1 + 10) = uVar3;
        param_1[0xc] = 1;
        return uVar2;
      }
      uVar2 = 0xffffffff805000d6;
    }
  }
LAB_82c116d0:
  if (puStack_50 != (undefined4 *)0x0) {
    fn_82C10B28(*param_1,0x20,&puStack_50);
  }
  if (piStack_4c != (int *)0x0) {
    if (*piStack_4c != 0) {
      fn_82C10B28(*param_1,0x20);
    }
    fn_82C10B28(*param_1,0x20,&piStack_4c);
  }
  return uVar2;
}

