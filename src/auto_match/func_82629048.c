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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_b4;
extern int fn_82526AF8();
extern int fn_82586B60();
extern int fn_825D0540();
extern int fn_825F6A10();
extern int fn_826242F0();
extern unsigned int iStack_110;
extern unsigned int iStack_130;
extern unsigned int iStack_14c;
extern unsigned int iStack_158;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int iStack_18c;
extern unsigned int iStack_194;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_50;
extern unsigned int iStack_70;
extern unsigned int iStack_90;
extern unsigned int iStack_b0;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_f0;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;
extern unsigned int uStack_114;
extern unsigned int uStack_134;
extern unsigned int uStack_154;
extern unsigned int uStack_174;
extern unsigned int uStack_190;
extern unsigned int uStack_54;
extern unsigned int uStack_74;
extern unsigned int uStack_94;
extern unsigned int uStack_f4;


undefined8 fn_82629048(int *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_1a0 [12];
  int iStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined1 auStack_180 [12];
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  undefined1 auStack_160 [8];
  int iStack_158;
  undefined4 uStack_154;
  int iStack_14c;
  undefined1 auStack_140 [12];
  undefined4 uStack_134;
  int iStack_130;
  undefined1 auStack_120 [12];
  undefined4 uStack_114;
  int iStack_110;
  undefined1 auStack_100 [12];
  undefined4 uStack_f4;
  int iStack_f0;
  undefined1 auStack_e0 [12];
  int iStack_d4;
  int iStack_d0;
  undefined1 auStack_c0 [12];
  float fStack_b4;
  int iStack_b0;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  int iStack_90;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  int iStack_70;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  int iStack_50;
  undefined1 auStack_40 [12];
  int iStack_34;
  int iStack_30;
  
  piVar1 = (int *)*param_1;
  iVar3 = piVar1[1];
  if (iVar3 < 0x33) {
    if (iVar3 == 0x32) {
      fn_826242F0(auStack_80,9,*piVar1 + (int)piVar1);
      uStack_74 = fn_82586B60(piVar1 + 2);
      iStack_70 = piVar1[0x12];
      puVar4 = auStack_80;
LAB_82629398:
      iVar3 = *(int *)(param_2 + 0x88c);
    }
    else {
      if (iVar3 == 0x18) {
        return 2;
      }
      if (iVar3 != 0x19) {
        if (iVar3 == 0x1b) {
          fn_826242F0(auStack_100,2,*piVar1 + (int)piVar1);
          uStack_f4 = fn_82586B60(piVar1 + 2);
          iStack_f0 = piVar1[0x12];
          puVar4 = auStack_100;
        }
        else if (iVar3 == 0x1c) {
          fn_826242F0(auStack_40,3,*piVar1 + (int)piVar1);
          iStack_34 = piVar1[2];
          puVar4 = auStack_40;
          iStack_30 = piVar1[3];
        }
        else if (iVar3 == 0x1d) {
          fn_826242F0(auStack_1a0,4,(int)piVar1 + *piVar1);
          iStack_194 = piVar1[2];
          uStack_190 = fn_82586B60(piVar1 + 3);
          iStack_18c = piVar1[0x13];
          puVar4 = auStack_1a0;
        }
        else {
          if (iVar3 != 0x31) {
            return 4;
          }
          fn_826242F0(auStack_e0,8,*piVar1 + (int)piVar1);
          iStack_d4 = piVar1[2];
          puVar4 = auStack_e0;
          iStack_d0 = piVar1[3];
        }
        goto LAB_82629398;
      }
      fn_826242F0(auStack_c0,0,(int)piVar1 + *piVar1);
      fStack_b4 = (float)(longlong)piVar1[2];
      iVar3 = *(int *)(param_2 + 0x88c);
      iStack_b0 = piVar1[3];
      puVar4 = auStack_c0;
    }
    iVar3 = iVar3 * 0xc + param_2 + 0x860;
  }
  else {
    if (iVar3 == 0x33) {
      fn_826242F0(auStack_120,10,*piVar1 + (int)piVar1);
      uStack_114 = fn_82586B60(piVar1 + 2);
      puVar4 = auStack_120;
      iStack_110 = piVar1[0x12];
      goto LAB_82629398;
    }
    if (iVar3 != 0x34) {
      if (iVar3 == 0x35) {
        fn_826242F0(auStack_60,0xc,(int)piVar1 + *piVar1);
        uStack_54 = fn_82586B60(piVar1 + 2);
        puVar4 = auStack_60;
        iStack_50 = piVar1[0x12];
      }
      else if (iVar3 == 0x53) {
        fn_826242F0(auStack_160,0xe,*piVar1 + (int)piVar1);
        uStack_154 = fn_82586B60(piVar1 + 2);
        puVar4 = auStack_160;
        iStack_14c = piVar1[0x14];
        iStack_158 = piVar1[0x13];
      }
      else {
        if (iVar3 != 0x60) {
          if (iVar3 != 0x83) {
            return 4;
          }
          fn_826242F0(auStack_a0,0x12,*piVar1 + (int)piVar1);
          uStack_94 = fn_82586B60(piVar1 + 2);
          puVar4 = auStack_a0;
          iVar3 = *(int *)(param_2 + 0x88c) * 0xc + param_2 + 0x860;
          iStack_90 = piVar1[0x12];
          goto LAB_826293ac;
        }
        fn_826242F0(auStack_140,0x10,*piVar1 + (int)piVar1);
        lVar2 = fn_82526AF8((ulonglong)lbl_83265A38 - 1,(ulonglong)lbl_83265A3C + 4,piVar1 + 2
                                 );
        uVar5 = -(ulonglong)(lVar2 != -1) & lVar2 + 1U;
        uStack_134 = (undefined4)uVar5;
        if (uVar5 == 0) goto LAB_826293b0;
        iStack_130 = piVar1[0x12];
        puVar4 = auStack_140;
      }
      goto LAB_82629398;
    }
    fn_826242F0(auStack_180,0xb,*piVar1 + (int)piVar1);
    uStack_174 = fn_82586B60(piVar1 + 2);
    puVar4 = auStack_180;
    iVar3 = *(int *)(param_2 + 0x88c) * 0xc + param_2 + 0x860;
    iStack_16c = piVar1[0x13];
    iStack_170 = piVar1[0x12];
  }
LAB_826293ac:
  fn_825F6A10(iVar3,puVar4);
LAB_826293b0:
  iVar3 = fn_825D0540(*param_1);
  *param_1 = iVar3;
  return 3;
}

