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
extern int fn_823AB478();
extern int fn_8255B0D8();
extern int fn_8255B1E0();
extern int fn_82594298();
extern int fn_825B9598();
extern int fn_825B9EF8();
extern int fn_825BC7F0();
extern int fn_8265B648();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;


undefined8 fn_82629BC8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  int in_r0;
  undefined8 uVar7;
  ushort uVar8;
  uint *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  int aiStack_20 [2];
  
  param_1 = (int *)*param_1;
  iVar1 = param_1[1];
  if (iVar1 == 0x10) {
    iVar1 = *(int *)(param_2 + 0x844);
    if (*(int *)(param_2 + 0x890) == 0) {
      fn_8255B1E0(iVar1,param_1 + 2,1,param_1[5],1,0,lbl_821CC160 < (float)param_1[6]);
      if (*(char *)((int)param_1 + 0xf) != '\0') {
        *(undefined4 *)(param_2 + 0x890) = 1;
        if (param_1[4] == 0) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = 2;
        }
        fn_825B9EF8(param_2 + 0x54,uVar7,0);
        return 0;
      }
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x358);
      if (((iVar2 == 0) || (*(int *)(iVar2 + 0x11c) != 0)) ||
         (bVar5 = true, *(float *)(iVar2 + 0x88) < *(float *)(iVar2 + 0x94))) {
        bVar5 = false;
      }
      if (bVar5) {
        *(undefined4 *)(param_2 + 0x890) = 0;
        fn_8255B0D8();
        uVar6 = lbl_8218E8E8;
        uVar8 = 1;
        lVar11 = 4;
        puVar9 = (uint *)(param_2 + 0x58);
        if (param_1[4] == 0) {
          do {
            if ((uVar8 != 0) &&
               (uVar3 = *puVar9, *puVar9 = (uint)((ulonglong)uVar3 - 1), (ulonglong)uVar3 - 1 == 0))
            {
              puVar9[4] = uVar6;
            }
            puVar9 = puVar9 + 1;
            uVar8 = uVar8 << 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        else {
          do {
            if (((uVar8 & 2) != 0) &&
               (uVar3 = *puVar9, *puVar9 = (uint)((ulonglong)uVar3 - 1), (ulonglong)uVar3 - 1 == 0))
            {
              puVar9[4] = uVar6;
            }
            puVar9 = puVar9 + 1;
            uVar8 = uVar8 << 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      else {
        if ((float)param_1[6] <= *(float *)(iVar2 + 0x94) - *(float *)(iVar1 + 0x350)) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x890) = 0;
        if (param_1[4] == 0) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = 2;
        }
        *(undefined4 *)(iVar1 + 0x364) = uVar10;
      }
    }
  }
  else if (iVar1 == 0x12) {
    if (*(int *)(param_2 + 0x890) == 0) {
      if (param_1[0x23] != 0) {
        *(undefined4 *)(param_2 + 0x890) = 1;
        return 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0x844) + 0x358);
      if (((iVar1 == 0) || (*(int *)(iVar1 + 0x11c) != 0)) ||
         (bVar5 = true, *(float *)(iVar1 + 0x88) < *(float *)(iVar1 + 0x94))) {
        bVar5 = false;
      }
      if (!bVar5) {
        return 0;
      }
      *(undefined4 *)(param_2 + 0x890) = 0;
      fn_8255B0D8();
    }
  }
  else if (iVar1 == 0x41) {
    if (lbl_83265988 != 0) {
      fn_823AB478();
      if ((lbl_83297920 & 1) == 0) {
        lbl_83297920 = lbl_83297920 | 1;
        puVar4 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
        *puVar4 = in_register_000104d0;
        puVar4[1] = in_register_000104d4;
        puVar4[2] = in_register_000104d8;
        puVar4[3] = in_vr77;
      }
      fn_82594298((double)lbl_821CA460,param_1 + 2);
    }
  }
  else if (iVar1 == 0x42) {
    if ((lbl_83297920 & 1) == 0) {
      lbl_83297920 = lbl_83297920 | 1;
      puVar4 = (undefined4 *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
      *puVar4 = in_register_000104d0;
      puVar4[1] = in_register_000104d4;
      puVar4[2] = in_register_000104d8;
      puVar4[3] = in_vr77;
    }
    fn_825B9598(param_1 + 2);
  }
  else {
    if (iVar1 != 0x95) {
      return 4;
    }
    while( true ) {
      param_1 = (int *)(*param_1 + (int)param_1);
      if (param_1[1] == 0) break;
      if (param_1[1] == 0x10) {
        aiStack_20[0] = param_1[2];
        if (aiStack_20[0] == 0) {
          aiStack_20[0] = 0;
        }
        else {
          fn_8265B648(aiStack_20,9);
        }
        fn_825BC7F0(param_2,aiStack_20);
      }
    }
  }
  return 3;
}

