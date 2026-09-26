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
extern int fn_82C88980();
extern int fn_82C896D8();
extern int fn_82CABA70();
extern int fn_82CABDC8();
extern int fn_82CAC4B0();
extern int fn_82CACC38();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int lbl_820FD808;
extern unsigned int lbl_820FD889;
extern unsigned int lbl_82106634;
extern unsigned int lbl_83232454;
extern unsigned int uStack00000034;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_b0;


undefined8
fn_82C8A9C0(int param_1,int param_2,undefined8 param_3,short *param_4,ulonglong param_5,
             int param_6,ulonglong param_7,ulonglong param_8)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uStack00000034;
  uint uStack00000044;
  uint uStack0000004c;
  int *in_stack_00000054;
  int in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int *in_stack_00000084;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int aiStack_a4 [41];
  
  uStack0000004c = (uint)param_8;
  uStack00000044 = (uint)param_7;
  iStack_ac = 0;
  iVar8 = (in_stack_0000005c == 0 ^ 1) + 5;
  if (in_stack_0000007c != 0) {
    uStack00000044 = (int)uStack00000044 >> 1;
    uStack0000004c = (int)uStack0000004c >> 1;
    iVar8 = 7;
    param_7 = (ulonglong)uStack00000044;
    param_8 = (ulonglong)uStack0000004c;
  }
  uStack00000034 = (uint)param_5;
  uVar6 = fn_82CACC38(param_1,*(undefined4 *)(iVar8 * 4 + param_2),param_3);
  if (*in_stack_00000084 != 0) {
    return 1;
  }
  iVar8 = (int)uVar6 >> 1;
  lVar12 = (longlong)iVar8;
  if ((~uVar6 & 1) == 0) {
    if ((*(int *)(*(int *)(param_1 + 0x7b0) + 0xc) != 0) && ((lVar12 + 1U & 0xffffffff) < 3)) {
      iVar8 = ((*(int *)(*(int *)(param_1 + 0x7b0) + 0x10) * 8 * in_stack_00000074 + 0x8000 >> 0x10)
              + iVar8) * param_6 + 4 >> 3;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      iVar16 = (int)(uint)param_5 >> 2;
      iVar8 = iVar8 * 0x1010101;
      *in_stack_00000054 = iVar8;
      in_stack_00000054[1] = iVar8;
      lVar11 = 1;
      in_stack_00000054[iVar16 + 1] = iVar8;
      piVar9 = in_stack_00000054 + iVar16 * 2;
      in_stack_00000054[iVar16] = iVar8;
      piVar9[1] = iVar8;
      *piVar9 = iVar8;
      piVar9 = piVar9 + iVar16;
      piVar9[1] = iVar8;
      *piVar9 = iVar8;
      piVar9 = piVar9 + iVar16;
      piVar9[1] = iVar8;
      *piVar9 = iVar8;
      piVar9 = piVar9 + iVar16;
      piVar9[1] = iVar8;
      *piVar9 = iVar8;
      piVar9 = piVar9 + iVar16;
      piVar9[1] = iVar8;
      *piVar9 = iVar8;
      (piVar9 + iVar16)[1] = iVar8;
      piVar9[iVar16] = iVar8;
      goto LAB_82c8acd4;
    }
    lVar11 = lVar12;
    if (iVar8 != 0) goto LAB_82c8ad3c;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x7ac);
    iVar16 = 1;
    uStack_b0 = 0;
    if (in_stack_0000007c == 0) {
      if ((int)in_stack_00000064 < 5) {
        iVar13 = 3;
      }
      else {
        iVar13 = 0;
        in_stack_0000005c = 0;
      }
      iVar14 = 2;
      uVar15 = -(uint)((ulonglong)in_stack_00000064 - 3 < 0xffffffff7ffffffd) & uVar15;
    }
    else {
      iVar13 = 1;
      iVar14 = 1;
    }
    uVar3 = *(uint *)(param_1 + 0x140);
    iVar4 = *(int *)(param_1 + 0x13c);
    iVar5 = (&lbl_83232454)[(byte)(&lbl_82106634)[in_stack_0000006c]];
    do {
      iStack_ac = iStack_ac + 1;
      if (in_stack_0000005c <= iStack_ac) {
        iVar14 = iVar13;
      }
      fn_82CAC4B0(param_1,*(undefined4 *)(iVar14 * 4 + param_2),param_3,&iStack_a8,aiStack_a4,
                        &uStack_b0,in_stack_00000084);
      if (*in_stack_00000084 != 0) {
        return 1;
      }
      uVar10 = iStack_a8 + iVar16;
      uStack_b0 = (int)uVar10 >> 6 | uStack_b0;
      iVar16 = uVar10 + 1;
      param_4[*(byte *)((uVar10 & 0x3f) + iVar5)] =
           (short)((((aiStack_a4[0] >> 0xf ^ uVar3) + aiStack_a4[0] * iVar4) -
                   (aiStack_a4[0] >> 0xf)) * (int)*(short *)(&lbl_820FD808 + (uVar10 & uVar15) * 2)
                  >> 8);
    } while (uStack_b0 == 0);
    if (0x40 < iVar16) {
      return 1;
    }
    param_8 = (ulonglong)uStack0000004c;
    param_7 = (ulonglong)uStack00000044;
    param_5 = (ulonglong)uStack00000034;
    lVar11 = 1;
LAB_82c8ad3c:
    *param_4 = (short)iVar8 * (short)param_6;
    if (((int)param_7 == 0 && (int)param_8 == 0) ||
       (iVar8 = in_stack_0000006c, (lVar12 + 1U & 0xffffffff) < 3)) {
      iVar8 = -1;
    }
    psVar7 = *(short **)(param_1 + 0x6ec);
    iVar16 = *(int *)(param_1 + 0x7b0);
    sVar2 = *psVar7;
    cVar1 = (&lbl_820FD889)[iVar8];
    if ((sVar2 != 0) && (-1 < cVar1)) {
      psVar7 = (short *)fn_82C88980(psVar7,cVar1,sVar2);
    }
    if (((~uVar6 & 1) == 0) && ((sVar2 == 0 || (cVar1 < '\0')))) {
      uVar6 = sVar2 + 4 >> 3;
      piVar9 = (int *)(psVar7 + -2);
      lVar12 = 0x20;
      do {
        piVar9 = piVar9 + 1;
        *piVar9 = uVar6 * 0x10000 + (uVar6 & 0xffff);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    else {
      (**(code **)(iVar16 + 0x34))(psVar7,psVar7,8,0xff);
    }
  }
  fn_82C896D8(*(undefined4 *)(param_1 + 0x7b0),in_stack_0000006c,in_stack_00000054,param_5,param_4
                ,lVar11);
LAB_82c8acd4:
  if (in_stack_0000007c == 0) {
    fn_82CABDC8(*(undefined4 *)(param_1 + 0x7b4),param_7,param_8,in_stack_0000006c,iStack_ac);
  }
  if (*(int *)(param_1 + 0xf6c) != 0) {
    fn_82CABA70(in_stack_00000054,param_5,*(undefined4 *)(param_1 + 0xf8),param_7,param_8,
                      lVar11,in_stack_0000006c);
  }
  return 0;
}

