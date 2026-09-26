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
extern unsigned int *auStack_660;
extern unsigned int fStack_67c;
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263A8C8();
extern int fn_8263A998();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern int fn_82655F40();
extern int fn_82F68CC0();
extern int fn_8314276C();
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_68c;
extern unsigned int uStack_690;


undefined8 fn_82653160(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;
  int iVar11;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar12;
  short *psVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  float fStack_67c;
  undefined1 auStack_660 [1022];
  short asStack_262 [305];
  
  uVar15 = param_2[0x10];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[4];
  uVar5 = param_2[10];
  uVar6 = param_2[2];
  if ((uVar15 == 0) || (uVar15 == 0x28280186)) {
    uVar15 = 0x28280000;
LAB_826531c8:
    uVar15 = uVar15 | 0x106;
  }
  else {
    if (uVar15 == 0x18280186) {
      uVar15 = 0x18280000;
      goto LAB_826531c8;
    }
    if (uVar15 == 0x282801b6) {
      uVar15 = 0x28280000;
LAB_826531fc:
      uVar15 = uVar15 | 0x136;
    }
    else if (uVar15 == 0x182801b6) {
      uVar15 = 0x18280000;
      goto LAB_826531fc;
    }
  }
  uVar7 = uVar15 & 0x3f;
  if (uVar7 == 0x32) {
    uVar14 = 6;
  }
  else {
    uVar14 = uVar7;
    if (uVar7 == 7) {
      uVar14 = 0x36;
    }
  }
  fn_8314276C(&uStack_690);
  fStack_67c = fStack_67c + lbl_8218E8E8;
  *(undefined4 *)(param_1 + 0x5500) = uStack_690;
  *(undefined4 *)(param_1 + 0x5508) = uStack_690;
  *(int *)(param_1 + 0x550c) = (int)(longlong)fStack_67c;
  *(undefined4 *)(param_1 + 0x5504) = uStack_68c;
  if (param_2[0xf] == 0) {
    iVar11 = fn_8263C7F0(uVar2,uVar3,1,1,0,uVar15,0,3);
    if (iVar11 != 0) {
      *(int *)(param_1 + 0x3ac0) = iVar11;
      goto LAB_826532a0;
    }
LAB_82653294:
    uVar9 = 0;
  }
  else {
LAB_826532a0:
    if (param_2[0xe] == 0) {
      lVar10 = fn_8263C910(uVar2,uVar3,uVar6,uVar4,0);
      if (lVar10 == 0) goto LAB_82653294;
      *(int *)(param_1 + 0x3ac4) = (int)lVar10;
      fn_8263A1B8(param_1,0);
    }
    if (param_2[9] != 0) {
      lVar10 = fn_8263C910(uVar2,uVar3,uVar5,uVar4,0);
      if (lVar10 == 0) goto LAB_82653294;
      *(int *)(param_1 + 0x3abc) = (int)lVar10;
      fn_8263A508(param_1);
    }
    fn_82F68CC0(param_1 + 0x35bc,param_2,0x7c);
    if ((uVar15 & 0x3ffc0000) != 0x24900000) {
      *(uint *)(param_1 + 0x35fc) = uVar7 | 0x28280100;
    }
    fn_82655F40(param_1,param_2 + 0x18);
    if ((uVar14 == 7) || (uVar14 == 0x36)) {
      uVar12 = 0;
      psVar13 = asStack_262;
      lVar10 = 0x80;
      do {
        sVar8 = (short)((uVar12 & 0xffffffff) / 0x7f);
        uVar12 = uVar12 + 0xffff;
        psVar13[-0x1ff] = sVar8;
        psVar13[-0xff] = sVar8;
        psVar13[1] = sVar8;
        sVar8 = (short)((uVar12 & 0xffffffff) / 0x7f) - sVar8;
        psVar13[-0x1fe] = sVar8;
        psVar13[-0xfe] = sVar8;
        psVar13 = psVar13 + 2;
        *psVar13 = sVar8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_8263A998(param_1,auStack_660);
    }
    else {
      uVar12 = 0;
      psVar13 = asStack_262;
      lVar10 = 0x100;
      do {
        uVar1 = uVar12 & 0xffffffff;
        uVar12 = uVar12 + 0x3ff;
        sVar8 = (short)(uVar1 / 0xff << 6);
        psVar13[-0x1ff] = sVar8;
        psVar13[-0xff] = sVar8;
        psVar13 = psVar13 + 1;
        *psVar13 = sVar8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_8263A8C8(param_1,auStack_660);
    }
    uVar9 = 1;
    *(undefined4 *)(param_1 + 0x421c) = 0xffffffff;
  }
  return uVar9;
}

