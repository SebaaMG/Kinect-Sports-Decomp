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
extern unsigned int *fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_829DB740();
extern int fn_829E3C40();
extern int fn_82F68CC0();
extern unsigned int iStack_50;
extern unsigned int iStack_68;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_82057AB0;
extern unsigned int lbl_82057AB8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


undefined8
fn_829E32C0(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fStack_70;
  float fStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  
  if ((*(char *)(param_3 + 0x6c) == '\0') || (*(char *)(param_3 + 0x6d) == '\0')) {
    return 0xffffffff8000ffff;
  }
  iStack_68 = 1;
  uStack_64 = 1;
  fStack_70 = lbl_82005748;
  uStack_60 = 4;
  fStack_6c = lbl_82005748;
  uStack_58 = 1;
  fStack_4c = lbl_8201EBA4;
  iStack_50 = 0;
  fStack_48 = lbl_8201FBB0;
  uVar5 = fn_829E3C40(*(undefined4 *)(param_3 + 8),&fStack_70);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  lVar6 = fn_829DB740();
  uVar2 = *(uint *)(param_3 + 0x68);
  *(int *)(param_3 + 0x68) = (int)lVar6;
  lVar6 = (ulonglong)uVar2 - lVar6;
  if ((lVar6 == lVar6 + -1 + (ulonglong)(lVar6 == 0)) && (iStack_50 != 2)) {
    if (iStack_68 != 0) {
      fVar1 = *(float *)(param_3 + 0x10);
      fVar4 = fVar1;
      if (fVar1 < fStack_70) {
        fVar4 = fStack_70;
      }
      fVar3 = *(float *)(param_3 + 0x60);
      if (fStack_70 <= *(float *)(param_3 + 0x60)) {
        fVar3 = fStack_70;
      }
      if (ABS(fStack_6c - fStack_70) < *(float *)(param_3 + 0x74) * fVar3) {
        fVar3 = fStack_70;
        if (fVar1 <= fStack_70) {
          fVar3 = fVar1;
        }
        if (fVar4 < fVar3 * lbl_82005344) {
          fn_82F68CC0(param_3 + 0x10,&fStack_70,0x30);
          *(undefined4 *)(param_3 + 0x74) = lbl_82057AB8;
          goto LAB_829e3474;
        }
      }
      *(undefined1 *)(param_3 + 0x78) = 0;
      *(undefined4 *)(param_3 + 0x74) = lbl_82057AB0;
      *param_6 = 5;
      return 0;
    }
    if (ABS(fStack_4c - fStack_48) < *(float *)(param_3 + 0x70) * fStack_48) {
      *(float *)(param_3 + 0x70) = (float)param_2;
      fn_82F68CC0(param_3 + 0x10,&fStack_70,0x30);
LAB_829e3474:
      *(undefined1 *)(param_3 + 0x78) = 1;
      *param_6 = 0;
      return 0;
    }
    if (lbl_821AAD20 < fStack_4c - fStack_48) {
      *param_6 = 1;
      goto LAB_829e34a4;
    }
    uVar7 = 3;
  }
  else {
    uVar7 = 5;
  }
  *param_6 = uVar7;
LAB_829e34a4:
  *(float *)(param_3 + 0x70) = (float)param_1;
  *(undefined1 *)(param_3 + 0x78) = 0;
  return 0;
}

