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
extern unsigned int *auStack_d0;
extern int fn_82C06C18();
extern int fn_82C107F8();
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C113F8();
extern int fn_82C11AD0();
extern int fn_82C11C98();
extern unsigned int uStack00000024;
extern unsigned int uStack_b8;
extern unsigned int uStack_c4;


ulonglong fn_82C06CB0(int *param_1,int *param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  int *piStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_d0 [4];
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  undefined4 uStack_c4;
  uint *apuStack_c0 [2];
  undefined4 uStack_b8;
  int *piStack_b4;
  longlong lStack_b0;
  longlong alStack_a8 [21];
  undefined4 uVar11;
  
  *param_4 = 0;
  *param_2 = 0;
  puStack_cc = (undefined1 *)0x0;
  uVar12 = 0;
  puStack_c8 = (undefined1 *)0x0;
  lVar14 = 0x7ffffffffffffff;
  lStack_b0 = 0;
  lVar10 = 0;
  uVar11 = 0;
  alStack_a8[0] = 0;
  bVar5 = true;
  uStack_c4 = 0;
  auStack_d0[0] = 0;
  apuStack_c0[0] = (uint *)0x0;
  if ((param_1[0x85] == 2) || (param_1[0x85] == 4)) {
    param_1[0x85] = 5;
  }
  param_1[0x86] = 0;
  uVar1 = *(uint *)(param_1[1] + 0x14);
  piStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar7 = (**(code **)(*param_1 + 8))(*param_1);
  if ((uVar7 & 0xffffffff) == 0x80500000) {
    if (param_1[0x9e] == 0) {
      return 0xffffffff80500000;
    }
    uVar9 = 0;
  }
  else {
    uVar9 = uVar7;
    if ((int)uVar7 < 0) goto LAB_82c071dc;
  }
  uVar7 = fn_82C10F68(param_1[0x8e],&uStack_c4,&puStack_cc,auStack_d0);
  if ((uVar7 & 0xffffffff) == 0x80500016) {
    return 0xffffffff805000a7;
  }
  if ((int)uVar7 < 0) goto LAB_82c071dc;
  param_1[0x93] = 0;
  puVar13 = apuStack_c0[0];
  do {
    uVar11 = (undefined4)lVar10;
    if ((int)uVar7 < 0) goto LAB_82c071dc;
    if (*(int *)(puStack_cc + 4) != 0) {
      uVar7 = fn_82C10F40(param_1[0x8f],*puStack_cc,apuStack_c0);
      if ((int)uVar7 < 0) goto LAB_82c071dc;
      uVar2 = *apuStack_c0[0];
      uVar7 = fn_82C113F8(uVar2,&lStack_b0,alStack_a8);
      lVar6 = lStack_b0;
      if ((uVar7 & 0xffffffff) == 0x8050000b) {
        if (((int)uVar9 == 0x50000b) && (*(int *)(puStack_cc + 0x4c) == 0)) {
          fn_82C11C98(uVar2,param_2);
          if (*param_2 != 0) {
            param_1[0x86] = uVar2;
            fn_82C11AD0(uVar2,param_4);
            uVar7 = fn_82C11038(param_1[0x8e],uStack_c4);
            goto LAB_82c071dc;
          }
          *(undefined4 *)(puStack_cc + 0x4c) = 1;
        }
        bVar5 = false;
        param_1[0x93] = 0;
      }
      else {
        if ((int)uVar7 < 0) goto LAB_82c071dc;
        if ((param_1[0x85] == 5) &&
           ((longlong)(ulonglong)*(uint *)(param_1[1] + 0x14) < alStack_a8[0] - lStack_b0)) {
          param_1[0x85] = 6;
        }
        uVar4 = (undefined4)lStack_b0;
        *(undefined4 *)(puStack_cc + 0xc) = uVar4;
        *(undefined4 *)(puStack_cc + 8) = 1;
        if ((*(int *)(puStack_cc + 4) == 3) || (*(int *)(puStack_cc + 4) == 2)) {
          fn_82C10F40(param_1[0x8e],puStack_cc[0x14],&puStack_c8);
        }
        if (*(int *)(puStack_cc + 4) == 3) {
          if (*(int *)(puStack_c8 + 0x18) == 0) {
            *(undefined4 *)(puStack_c8 + 0x1c) = uVar4;
            *(undefined4 *)(puStack_c8 + 0x18) = 1;
          }
          *(undefined4 *)(puStack_cc + 4) = 1;
          if (*(uint *)(puStack_cc + 0xc) <= *(uint *)(puStack_c8 + 0xc)) {
            *(undefined4 *)(puStack_c8 + 4) = 0;
            *(undefined4 *)(puStack_c8 + 8) = 0;
            *(undefined4 *)(puStack_c8 + 0x10) = 0;
            puStack_c8[0x14] = 0;
            *(undefined4 *)(puStack_c8 + 0x18) = 0;
            *(undefined4 *)(puStack_c8 + 0x1c) = 0;
            *(undefined4 *)(puStack_cc + 0x10) = 0;
            puStack_cc[0x14] = 0;
            uVar7 = fn_82C06C18(param_1,*puStack_c8);
            param_2 = piStack0000001c;
            if ((int)uVar7 < 0) goto LAB_82c071dc;
          }
          *(undefined4 *)(puStack_cc + 0x10) = 0;
          puStack_cc[0x14] = 0;
        }
        else if (((*(int *)(puStack_cc + 4) == 2) && (*(int *)(puStack_cc + 0x18) != 0)) &&
                (*(uint *)(puStack_cc + 0x1c) <= *(uint *)(puStack_cc + 0xc))) {
          *(undefined4 *)(puStack_cc + 4) = 0;
          if ((*(int *)(puStack_c8 + 0x10) != 0) && (puStack_cc[0x14] == puStack_c8[0x14])) {
            *(undefined4 *)(puStack_c8 + 0x10) = 0;
            puStack_c8[0x14] = 0;
            *(undefined4 *)(puStack_c8 + 0x18) = 0;
            *(undefined4 *)(puStack_c8 + 0x1c) = 0;
          }
          *(undefined4 *)(puStack_cc + 8) = 0;
          *(undefined4 *)(puStack_cc + 0x10) = 0;
          puStack_cc[0x14] = 0;
          *(undefined4 *)(puStack_cc + 0x18) = 0;
          *(undefined4 *)(puStack_cc + 0x1c) = 0;
          uVar7 = fn_82C06C18(param_1,*puStack_cc);
          param_2 = piStack0000001c;
          if (-1 < (int)uVar7) {
            puStack_cc = (undefined1 *)0x0;
            goto LAB_82c070b4;
          }
          goto LAB_82c071dc;
        }
        param_2 = piStack0000001c;
        if (puStack_cc != (undefined1 *)0x0) {
          if (param_1[0x8b] == 0) {
            lVar8 = ((ulonglong)uVar1 - (ulonglong)*(uint *)(puStack_cc + 0x24)) + lVar6;
            if (lVar8 <= lVar14) {
              iVar3 = *(int *)(puStack_cc + 4);
joined_r0x82c0709c:
              if (iVar3 != 0) {
                puVar13 = *(uint **)(puStack_cc + 0x44);
                lVar10 = lVar6;
                lVar14 = lVar8;
                uVar12 = uVar2;
              }
            }
          }
          else if (lVar6 <= lVar14) {
            iVar3 = *(int *)(puStack_cc + 4);
            lVar8 = lVar6;
            goto joined_r0x82c0709c;
          }
        }
      }
    }
LAB_82c070b4:
    uVar11 = (undefined4)lVar10;
    uVar7 = fn_82C10FD0(param_1[0x8e],uStack_c4,&puStack_cc,auStack_d0);
  } while ((uVar7 & 0xffffffff) != 0x80500016);
  uVar7 = fn_82C11038(param_1[0x8e],uStack_c4);
  if ((int)uVar9 == 0x50000b) {
    if (uVar12 == 0) {
      return 0x500004;
    }
LAB_82c07138:
    uStack_b8 = uStack00000024;
    piStack_b4 = param_2;
    uVar7 = fn_82C11AD0(uVar12,param_4);
    if (((int)uVar7 < 0) ||
       (uVar7 = fn_82C107F8(param_1[0x98],puVar13,0xc0000), (int)uVar7 < 0))
    goto LAB_82c071dc;
    uVar7 = fn_82C10F40(param_1[0x8e],*param_4,&puStack_cc);
    *(undefined4 *)(puStack_cc + 0x50) = uVar11;
    param_1[0x86] = -(uint)(*piStack_b4 != 0) & uVar12;
  }
  else {
    if (((uVar9 & 0xffffffff) == 0x80500000) || (bVar5)) {
      if (uVar12 == 0) {
        return 0xffffffff8050000b;
      }
      goto LAB_82c07138;
    }
    if (uVar12 != 0) goto LAB_82c07138;
  }
  if (param_1[0x85] == 5) {
    return 0x500003;
  }
LAB_82c071dc:
  if (((uVar7 & 0xffffffff) == 0x80600005) || ((uVar7 & 0xffffffff) == 0x80600008)) {
    if (puStack_cc != (undefined1 *)0x0) {
      *(undefined4 *)(puStack_cc + 0x50) = uVar11;
    }
    param_1[0x86] = -(uint)(*param_2 != 0) & uVar12;
  }
  return uVar7;
}

