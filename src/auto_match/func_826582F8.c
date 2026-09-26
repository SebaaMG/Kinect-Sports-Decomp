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
extern int fn_8265B200();
extern unsigned int lbl_821CE368;
extern unsigned int uStack_6c;


void fn_826582F8(uint *param_1,ulonglong param_2,uint param_3,int param_4,int param_5,
                  longlong param_6,uint param_7)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  char acStack_70 [4];
  undefined1 uStack_6c;
  char acStack_68 [104];
  
  param_2 = param_2 & 0x3f;
  fn_8265B200(param_1,0xffffffff821aa89c);
  if ((param_4 != 0) || (bVar2 = true, param_5 == 0)) {
    bVar2 = false;
  }
  if ((param_3 == 0) && ((param_4 == 0 || ((int)param_6 == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar8 = 0xffffffffffffffff;
  if (param_4 == 0) {
    uVar5 = 0xffffffff821ce348;
  }
  else {
    uVar9 = (uint)param_2;
    if (uVar9 == 0x20) {
      uVar5 = 0xffffffff821ce320;
      param_2 = uVar8;
    }
    else {
      if (0x20 < uVar9) {
        if (uVar9 < 0x26) {
          uVar5 = 0xffffffff821ce324;
          param_2 = param_2 - 0x21;
          goto LAB_82658438;
        }
        if (uVar9 == 0x3e) {
          uVar5 = 0xffffffff821ce328;
          param_2 = uVar8;
          goto LAB_82658438;
        }
        if (uVar9 == 0x3f) {
          uVar5 = 0xffffffff821ce330;
          param_2 = uVar8;
          goto LAB_82658438;
        }
      }
      if ((param_1[2] >> 3 & 1) != 0) {
        if (uVar9 < (*param_1 >> 0x1c & 7)) {
          uVar5 = 0xffffffff821ce338;
          goto LAB_82658438;
        }
        if ((uVar9 == 0x3d) && ((*param_1 & 0x8000000) != 0)) {
          uVar5 = 0xffffffff821ce33c;
          param_2 = uVar8;
          goto LAB_82658438;
        }
      }
      uVar5 = 0xffffffff821ce344;
    }
  }
LAB_82658438:
  fn_8265B200(param_1,0xffffffff821c4da8,uVar5);
  if (bVar2) {
    fn_8265B200(param_1,0xffffffff821ce34c);
  }
  if ((param_4 == 0) && (param_5 != 0)) {
    fn_8265B200(param_1,0xffffffff821ce350);
  }
  if (-1 < (int)param_2) {
    fn_8265B200(param_1,0xffffffff821aa66c,param_2);
  }
  if (bVar2) {
    fn_8265B200(param_1,0xffffffff821c27b4);
  }
  if (bVar3) {
    pcVar4 = "._";
  }
  else if (param_4 == 0) {
    if (param_3 == 0xf) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821c7f2c);
    if ((param_3 & 1) != 0) {
      fn_8265B200(param_1,0xffffffff821ce358);
    }
    if ((param_3 & 2) != 0) {
      fn_8265B200(param_1,0xffffffff821ce35c);
    }
    if ((param_3 & 4) != 0) {
      fn_8265B200(param_1,0xffffffff821ce360);
    }
    if ((param_3 & 8) == 0) {
      return;
    }
    pcVar4 = "w";
  }
  else {
    if ((param_3 == 0xf) && (param_7 == 0)) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821c7f2c);
    uVar9 = 0;
    lVar10 = 4;
    do {
      uVar1 = 1 << (uVar9 & 0x3f);
      if ((uVar1 & param_3) == 0) {
        if ((uVar1 & param_7) == 0) {
          cVar7 = (-(param_6 != 0) & 0xd1U) + 0x5f;
        }
        else {
          cVar7 = '_';
        }
      }
      else if ((uVar1 & param_7) == 0) {
        cVar7 = (&lbl_821CE368)[uVar9];
      }
      else {
        cVar7 = '1';
      }
      acStack_70[uVar9] = cVar7;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    bVar2 = true;
    pcVar4 = acStack_68;
    iVar6 = 0;
    do {
      cVar7 = acStack_70[iVar6];
      if ((cVar7 == '0') || (cVar7 == '1')) {
        bVar2 = false;
        break;
      }
      if (cVar7 != '_') {
        *pcVar4 = cVar7;
        pcVar4 = pcVar4 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    if (bVar2) {
      *pcVar4 = '\0';
      pcVar4 = acStack_68;
    }
    else {
      lVar10 = 3;
      uStack_6c = 0;
      do {
        iVar6 = (int)lVar10;
        if (acStack_70[iVar6] != '_') break;
        lVar10 = lVar10 + -1;
        acStack_70[iVar6] = '\0';
      } while (0 < lVar10);
      pcVar4 = acStack_70;
    }
  }
  fn_8265B200(param_1,pcVar4);
  return;
}

