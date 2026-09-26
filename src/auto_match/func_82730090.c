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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_8267C498();
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();
extern int fn_8269D548();
extern int fn_827047D8();
extern int fn_82715E48();
extern int fn_82726E60();
extern int fn_8272D828();
extern int fn_8272D8D8();
extern int fn_8272F9D8();
extern int fn_827A2608();
extern int fn_827A44B8();
extern int fn_827A4778();
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82730090(int *param_1,int *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar4;
  longlong lVar8;
  undefined4 *puVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *apiStack_e0 [2];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  iVar5 = (**(code **)(*param_1 + 0x40))();
  if (iVar5 == 0) {
    return;
  }
  if (*param_2 == 8) {
    fn_8269D548(param_1);
  }
  iVar12 = 0;
  if ((uint)(int)*(char *)((int)param_2 + 0xb) < 4) {
    iVar11 = *(char *)((int)param_2 + 0xb) * 0x24 + iVar5 + 0x944;
  }
  else {
    iVar11 = 0;
  }
  fn_82715E48(apiStack_e0,iVar11);
  if (apiStack_e0[0] != param_1) {
    if (((int *)param_1[0x34] == (int *)0x0) || (bVar3 = true, *(int *)param_1[0x34] == 0)) {
      bVar3 = false;
    }
    if (((bVar3) && ((*(ushort *)(param_1 + 0x32) >> 1 & 1) != 0)) &&
       ((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
      fn_82726E60(param_1,1,*(undefined1 *)((int)param_2 + 0xb),0);
      fn_82726E60(param_1,3,*(undefined1 *)((int)param_2 + 0xb),0);
    }
    if ((*(int *)(param_1[0x28] + 0x114) != 0) &&
       ((*(ushort *)(*(int *)(param_1[0x28] + 0x114) + 0x68) >> 5 & 1) != 0)) goto LAB_827301a8;
    goto LAB_827306e0;
  }
LAB_827301a8:
  cVar6 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar6 == '\0') goto LAB_827306f8;
  iVar11 = *param_2;
  if (iVar11 == 8) {
    if (*(byte *)((int)param_2 + 0xb) < 4) {
      iVar12 = (char)*(byte *)((int)param_2 + 0xb) * 0x24 + iVar5 + 0x944;
    }
    else {
      iVar12 = 0;
    }
    if (*(int *)(param_1[0x28] + 0x114) != 0) {
      fn_8268CC00(auStack_60);
      fn_8269A240(param_1,auStack_60);
      uStack_c4 = *(undefined4 *)(iVar12 + 0x18);
      uStack_c8 = *(undefined4 *)(iVar12 + 0x14);
      fn_8268D008(auStack_60,&fStack_c0,&uStack_c8);
      fn_827A4778((double)fStack_c0,(double)fStack_bc,*(undefined4 *)(param_1[0x28] + 0x114));
    }
    if (((int *)param_1[0x34] == (int *)0x0) || (bVar3 = true, *(int *)param_1[0x34] == 0)) {
      bVar3 = false;
    }
    if (((bVar3) && ((*(ushort *)(param_1 + 0x32) >> 1 & 1) != 0)) &&
       ((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
      uStack_f0 = 0;
      uStack_ec = 0;
      cVar6 = fn_8272D828(param_1,*(undefined1 *)((int)param_2 + 0xb),0,&uStack_f0);
      uVar1 = *(undefined1 *)((int)param_2 + 0xb);
      if (cVar6 == '\0') {
        fn_82726E60(param_1,1,uVar1,0);
        uVar1 = *(undefined1 *)((int)param_2 + 0xb);
        puVar9 = (undefined4 *)0x0;
        lVar8 = 3;
      }
      else {
        cVar7 = fn_8272D8D8(param_1,uVar1,&uStack_f0);
        if (cVar7 == '\0') {
          fn_82726E60(param_1,1,uVar1,0);
          fn_82726E60(param_1,3,*(undefined1 *)((int)param_2 + 0xb),0);
        }
        puVar9 = &uStack_f0;
        uVar1 = *(undefined1 *)((int)param_2 + 0xb);
        lVar8 = (~(ulonglong)*(uint *)(iVar12 + 0xc) & 1) << 1;
      }
      fn_82726E60(param_1,lVar8,uVar1,puVar9);
joined_r0x82730680:
      if (cVar6 == '\0') {
        uVar10 = *(ushort *)(param_1 + 0x32) & 0xffdf;
      }
      else {
        uVar10 = *(ushort *)(param_1 + 0x32) | 0x20;
      }
      *(ushort *)(param_1 + 0x32) = uVar10;
      pcVar2 = *(code **)(*param_1 + 0x138);
    }
    else {
      if (((*(ushort *)(param_1 + 0x32) >> 1 & 1) != 0) &&
         ((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
        cVar6 = fn_8272D828(param_1,*(undefined1 *)((int)param_2 + 0xb),0,0);
        goto joined_r0x82730680;
      }
      if ((*(ushort *)(param_1 + 0x32) >> 5 & 1) == 0) goto LAB_827306e0;
      fn_82726E60(param_1,3,*(undefined1 *)((int)param_2 + 0xb),0);
      *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) & 0xffdf;
      pcVar2 = *(code **)(*param_1 + 0x138);
    }
    uVar4 = (*pcVar2)(param_1);
    fn_827047D8(iVar5,*(undefined1 *)((int)param_2 + 0xb),uVar4);
  }
  else if (iVar11 == 0x10) {
    if (((int *)param_1[0x34] == (int *)0x0) || (bVar3 = true, *(int *)param_1[0x34] == 0)) {
      bVar3 = false;
    }
    if (((bVar3) && ((*(ushort *)(param_1 + 0x32) >> 1 & 1) != 0)) &&
       ((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
      cVar6 = *(char *)((int)param_2 + 0xb);
      if (((longlong)cVar6 & 0xffffffffU) < 4) {
        iVar11 = cVar6 * 0x24 + iVar5 + 0x944;
      }
      else {
        iVar11 = 0;
      }
      uStack_d8 = 0;
      uStack_d4 = 0;
      cVar6 = fn_8272D828(param_1,(longlong)cVar6,0,&uStack_d8);
      if (((cVar6 != '\0') && ((int *)param_1[0x34] != (int *)0x0)) &&
         ((*(int *)param_1[0x34] != 0 && ((*(uint *)(iVar11 + 0xc) & 1) != 0)))) {
        fn_82726E60(param_1,0,*(undefined1 *)((int)param_2 + 0xb),&uStack_d8);
      }
    }
    if (*(int *)(param_1[0x28] + 0x114) != 0) {
      if (*(byte *)((int)param_2 + 0xb) < 4) {
        iVar12 = (char)*(byte *)((int)param_2 + 0xb) * 0x24 + iVar5 + 0x944;
      }
      fn_8268CC00(auStack_80);
      fn_8269A240(param_1,auStack_80);
      uStack_cc = *(undefined4 *)(iVar12 + 0x18);
      uStack_d0 = *(undefined4 *)(iVar12 + 0x14);
      fn_8268D008(auStack_80,&fStack_a8,&uStack_d0);
      fn_827A44B8((double)fStack_a8,(double)fStack_a4,*(undefined4 *)(param_1[0x28] + 0x114));
LAB_82730484:
      fn_8272F9D8(param_1,iVar5);
    }
  }
  else if (iVar11 == 0x20) {
    if (((int *)param_1[0x34] == (int *)0x0) || (bVar3 = true, *(int *)param_1[0x34] == 0)) {
      bVar3 = false;
    }
    if (((bVar3) && ((*(ushort *)(param_1 + 0x32) >> 1 & 1) != 0)) &&
       ((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
      cVar6 = *(char *)((int)param_2 + 0xb);
      if (((longlong)cVar6 & 0xffffffffU) < 4) {
        iVar11 = cVar6 * 0x24 + iVar5 + 0x944;
      }
      else {
        iVar11 = 0;
      }
      uStack_e8 = 0;
      uStack_e4 = 0;
      cVar6 = fn_8272D828(param_1,(longlong)cVar6,0,&uStack_e8);
      if (((cVar6 != '\0') && ((int *)param_1[0x34] != (int *)0x0)) &&
         ((*(int *)param_1[0x34] != 0 && ((*(uint *)(iVar11 + 0xc) & 1) == 0)))) {
        fn_82726E60(param_1,1,*(undefined1 *)((int)param_2 + 0xb),&uStack_e8);
      }
      fn_82726E60(param_1,1,*(undefined1 *)((int)param_2 + 0xb),0);
    }
    if (*(int *)(param_1[0x28] + 0x114) != 0) {
      if (*(byte *)((int)param_2 + 0xb) < 4) {
        iVar12 = (char)*(byte *)((int)param_2 + 0xb) * 0x24 + iVar5 + 0x944;
      }
      fn_8268CC00(auStack_a0);
      fn_8269A240(param_1,auStack_a0);
      uStack_b4 = *(undefined4 *)(iVar12 + 0x18);
      uStack_b8 = *(undefined4 *)(iVar12 + 0x14);
      fn_8268D008(auStack_a0,&fStack_b0,&uStack_b8);
      fn_827A2608((double)fStack_b0,(double)fStack_ac,*(undefined4 *)(param_1[0x28] + 0x114));
      goto LAB_82730484;
    }
  }
LAB_827306e0:
  (**(code **)(*param_1 + 0x6c))(param_1,param_2);
LAB_827306f8:
  if (apiStack_e0[0] != (int *)0x0) {
    fn_8267C498(apiStack_e0[0]);
  }
  return;
}

