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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_60;
extern unsigned int fStack_6c;
extern int fn_8226A7C0();
extern int fn_8226C610();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8265C9E0();
extern int fn_82809CB0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821959CC;
extern unsigned int lbl_821A7E4C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822808C0(int param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uStack_68 = (longlong)*(int *)(*(int *)(param_1 + 0x7c) + 0x48);
    dVar17 = (double)uStack_68;
    uStack_50 = lbl_82193E50;
    uStack_5c = lbl_82192F70;
    uStack_58 = lbl_82191FB0;
    uStack_54 = lbl_82192D74;
    if (param_2 == (float *)0x0) {
      auStack_60[0] = 1;
      uStack_68 = CONCAT44(lbl_821CC160,lbl_821CC160);
      fStack_6c = lbl_821CC160;
      uStack_70 = lbl_821CA460;
      dVar15 = (double)fn_82809CB0();
      dVar17 = (double)fn_82809CB0(dVar17);
      uVar7 = fn_8265C9E0(0x44);
      if ((uVar7 & 0xffffffff) == 0) {
        uVar9 = 0;
      }
      else {
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)(((float)(dVar15 - dVar17) < lbl_821CC160) << 2) |
                      (uint)(NAN((float)(dVar15 - dVar17)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          dVar15 = dVar17;
        }
        uVar9 = fn_8226A7C0((double)(float)(dVar15 * (double)lbl_821959CC),(double)lbl_821922D0,
                             (double)lbl_821917D4,uVar7,&uStack_68,&uStack_70);
      }
      *(undefined4 *)(param_1 + 0x80) = uVar9;
      uVar10 = 0xffffffff821a89e8;
    }
    else {
      auStack_60[0] = 1;
      dVar15 = (double)fn_82809CB0((double)*param_2);
      dVar17 = (double)fn_82809CB0((double)(float)(dVar17 - (double)*param_2));
      puVar8 = (undefined4 *)fn_8265C9E0(0x34);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar12 = (undefined4 *)((int)&uStack_68 + 4);
        puVar8[6] = 0xffffffff;
        lVar14 = 5;
        puVar11 = puVar8;
        do {
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = *puVar12;
          fVar2 = lbl_821922D0;
          fVar5 = lbl_821917D4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        *puVar8 = &lbl_821A7E4C;
        fVar6 = lbl_821CC160;
        bVar1 = NAN(lbl_821CC160);
        bVar13 = (float)(dVar15 - dVar17) < lbl_821CC160;
        dVar16 = (double)lbl_821959CC;
        puVar8[7] = *param_2;
        fVar3 = param_2[1];
        puVar8[10] = fVar2;
        fVar2 = *(float *)(&lbl_821954D8 +
                          ((uint)(byte)(bVar13 << 2) |
                          (uint)(NAN((float)(dVar15 - dVar17)) || bVar1) << 2));
        puVar8[8] = fVar3;
        if (fVar2 < 0.0) {
          dVar15 = dVar17;
        }
        puVar8[0xc] = fVar6;
        puVar8[0xb] = fVar5;
        puVar8[9] = (float)(dVar15 * dVar16);
      }
      *(undefined4 **)(param_1 + 0x80) = puVar8;
      uVar10 = 0xffffffff821a89c4;
    }
    fn_82864988(auStack_60,uVar10);
    uVar9 = fn_828647D8();
    fn_82864898(auStack_60);
    iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x4c);
    if (iVar4 != 0) {
      uStack_70 = uVar9;
      uStack_70 = fn_82535298(&uStack_70,*(undefined4 *)(iVar4 + 0x84c),0xffffffff83296bc0,
                                    0xffffffff83296bd0);
      fn_82536288(&uStack_70);
    }
    fn_8226C610(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  return;
}

