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
extern unsigned int *auStack_70;
extern int fn_82F68CC0();
extern unsigned int iStack_80;


/* WARNING: Type propagation algorithm not settling */

undefined8
fn_82C3CE78(int param_1,int param_2,uint *param_3,undefined8 param_4,uint *param_5,
             undefined4 *param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iStack_80;
  int aiStack_7c [3];
  undefined8 auStack_70 [14];
  
  aiStack_7c[0] = 0;
  auStack_70[0] = 0;
  iStack_80 = 0;
  aiStack_7c[2] = 0;
  aiStack_7c[1] = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    if (param_3 == (uint *)0x0) goto LAB_82c3d114;
    if ((param_5 != (uint *)0x0) && (param_6 != (undefined4 *)0x0)) {
      *param_3 = 0;
      *param_5 = 0;
      *param_6 = 1;
      puVar1 = *(undefined4 **)(param_1 + 0x20);
      pcVar2 = (code *)*puVar1;
      uVar3 = puVar1[1];
      if (puVar1[0x14] != 0) {
        *param_3 = puVar1[0x15];
        *param_5 = (uint)*(ushort *)(puVar1 + 0x16);
        *param_6 = 0;
        return 6;
      }
      if (puVar1[4] == 0) {
        iVar4 = (*pcVar2)(uVar3,puVar1 + 5,puVar1 + 3,aiStack_7c,auStack_70,&iStack_80,
                          aiStack_7c + 2,aiStack_7c + 1);
        if (iVar4 < 0) goto LAB_82c3cf58;
        if (iStack_80 != 0) {
          *(undefined8 *)(puVar1 + 0x12) = auStack_70[0];
        }
        if (aiStack_7c[0] != 0) {
          puVar1[0x1c] = 1;
        }
        puVar1[4] = puVar1[3];
      }
      if (((param_2 == 0) && (uVar5 = puVar1[4], 3 < uVar5)) && ((puVar1[5] & 3) == 0)) {
        *param_3 = puVar1[5];
        *param_5 = uVar5;
      }
      else {
        uVar5 = puVar1[4];
        if (0x1000 < uVar5) {
          uVar5 = 0x1000;
        }
        fn_82F68CC0((int)puVar1 + param_2 + 0x74,puVar1[5],uVar5);
        if ((uVar5 < 4) && (puVar1[0x1c] == 0)) {
          iVar4 = (*pcVar2)(uVar3,puVar1 + 5,puVar1 + 3,aiStack_7c,auStack_70,&iStack_80,
                            aiStack_7c + 2,aiStack_7c + 1);
          if (iVar4 < 0) {
LAB_82c3cf58:
            *param_3 = 0;
            *param_5 = 0;
            *param_6 = 1;
            return 6;
          }
          if (iStack_80 != 0) {
            *(undefined8 *)(puVar1 + 0x12) = auStack_70[0];
          }
          if (aiStack_7c[0] != 0) {
            puVar1[0x1c] = 1;
          }
          uVar6 = puVar1[3];
          puVar1[4] = uVar6;
          if (0x1000 < uVar6) {
            uVar6 = 0x1000;
          }
          fn_82F68CC0((int)puVar1 + param_2 + uVar5 + 0x74,puVar1[5],uVar6);
          *param_3 = (uint)(puVar1 + 0x1d);
          *param_5 = uVar5 + uVar6 + param_2;
          uVar5 = uVar6;
        }
        else {
          *param_3 = (uint)(puVar1 + 0x1d);
          *param_5 = uVar5 + param_2;
        }
      }
      iVar4 = puVar1[4];
      puVar1[4] = iVar4 - uVar5;
      puVar1[5] = puVar1[5] + uVar5;
      if ((puVar1[0x1c] != 0) && (iVar4 - uVar5 == 0)) {
        *param_6 = 0;
        puVar1[0x1c] = 0;
        return 6;
      }
      return 0;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
LAB_82c3d114:
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  return 0xfffffffffffffffd;
}

