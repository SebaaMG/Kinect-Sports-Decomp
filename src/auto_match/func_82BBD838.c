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
extern int fn_82BBD738();
extern int fn_82F65148();
extern int fn_82F655D8();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_820525A0;
extern unsigned int lbl_820E1140;
extern unsigned int lbl_820E1148;
extern unsigned int lbl_820E1158;
extern unsigned int lbl_820E1160;
extern unsigned int lbl_820E1168;
extern unsigned int lbl_820E1170;
extern unsigned int lbl_820E1178;
extern unsigned int lbl_821AAD20;


ulonglong fn_82BBD838(double param_1,undefined8 param_2,ulonglong param_3,uint param_4,
                       uint param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double extraout_f1;
  double dVar9;
  
  iVar2 = (int)param_3;
  if ((int)param_4 < 2) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_1 < -((double)(longlong)iVar2 * lbl_820525A0 - lbl_82005758)) {
      return 0;
    }
    return 1;
  }
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar5 = (ulonglong)(uint)(1 << (param_4 - 1 & 0x3f)) - 1;
      iVar3 = (int)uVar5;
      uVar6 = iVar2 / iVar3;
      trapWord(6,uVar5,0);
      lVar4 = (longlong)(int)(((int)uVar6 >> 8) + (uint)((int)uVar6 < 0 && (uVar6 & 0xff) != 0));
      trapWord(5,uVar5 & ~(((param_3 & 0x7fffffff) << 1 | (param_3 & 0xffffffff) >> 0x1f) - 1),
               0xffff);
      if (param_1 < (double)lbl_821AAD20) {
        fVar1 = (float)(param_1 - (double)lVar4);
        if (lbl_8200133C < fVar1) {
          return (ulonglong)(uint)(int)((float)(longlong)iVar3 * fVar1);
        }
        return -uVar5;
      }
      fVar1 = (float)((double)lVar4 + param_1);
      if (fVar1 < lbl_82002AE0) {
        return (ulonglong)(uint)(int)((float)(longlong)iVar3 * fVar1);
      }
      return uVar5;
    }
    iVar3 = iVar2 >> 8;
    if (param_5 < 3) {
      uVar5 = (ulonglong)(uint)(1 << (param_4 & 0x3f)) - 1;
      param_1 = (double)(longlong)(int)(iVar3 + (uint)(iVar2 < 0 && (param_3 & 0xff) != 0)) +
                param_1;
      fVar1 = (float)param_1;
      if (fVar1 <= lbl_821AAD20) {
        return 0;
      }
      if (fVar1 < (float)(longlong)(int)uVar5) {
        return (ulonglong)(uint)(int)param_1;
      }
      return uVar5;
    }
    if (param_5 == 3) {
      uVar5 = (ulonglong)(uint)(1 << (param_4 - 1 & 0x3f));
      bVar7 = iVar2 < 0 && (param_3 & 0xff) != 0;
      if (param_1 < (double)lbl_821AAD20) {
        uVar5 = -uVar5;
        param_1 = param_1 - (double)(longlong)(int)(iVar3 + (uint)bVar7);
        if ((float)(longlong)(int)uVar5 < (float)param_1) {
          return (ulonglong)(uint)(int)param_1;
        }
        return uVar5;
      }
      uVar5 = uVar5 - 1;
      param_1 = (double)(longlong)(int)(iVar3 + (uint)bVar7) + param_1;
      if ((float)param_1 < (float)(longlong)(int)uVar5) {
        return (ulonglong)(uint)(int)param_1;
      }
      return uVar5;
    }
    if (4 < param_5) {
      if (param_5 == 5) {
        dVar8 = (double)(float)(param_1 * (double)lbl_820E1178);
        if (dVar8 <= (double)lbl_821AAD20) {
          return (ulonglong)(uint)(int)(dVar8 - lbl_82005730);
        }
        return (ulonglong)(uint)(int)(dVar8 + lbl_82005730);
      }
      if (param_5 != 7) {
        return 0;
      }
      if (param_4 == 0x20) {
        return (ulonglong)(uint)(float)param_1;
      }
      if (param_4 != 0x10) {
        if ((int)param_4 < 10) {
          return 0;
        }
        dVar8 = (double)fn_82F65148(param_1,param_2,0xffffffffffffff84);
        uVar6 = (iVar2 << (0x12 - param_4 & 0x3f)) + (int)(float)dVar8;
        if ((uVar6 & 0x7c000000) == 0) {
          return (longlong)((int)uVar6 >> (0x1a - param_4 & 0x3f)) &
                 (ulonglong)(uint)(1 << (param_4 & 0x3f)) - 1;
        }
        if ((double)lbl_821AAD20 <= param_1) {
          param_4 = param_4 - 1;
        }
        return (ulonglong)(uint)(1 << (param_4 & 0x3f)) - 1;
      }
      uVar5 = (param_3 & 0x7ffffff) * 0x20 + (ulonglong)(uint)(float)(param_1 * lbl_820E1148);
      if ((uVar5 & 0x70000000) == 0) {
        uVar6 = (int)uVar5 >> 0xd;
        if ((longlong)(int)uVar6 < 0) {
          return (ulonglong)uVar6 & 0x7fff | 0x8000;
        }
        return (longlong)(int)uVar6;
      }
      if ((double)lbl_821AAD20 <= param_1) {
        return 0x7fff;
      }
      return 0xffff;
    }
    if (lbl_820E1170 < param_1) {
      param_2 = fn_82F655D8(param_1,lbl_820E1160);
      param_1 = (double)(float)((double)(float)extraout_f1 * lbl_820E1158 - lbl_820E1140);
    }
    else {
      param_1 = (double)(float)(param_1 * (double)lbl_820E1168);
    }
  }
  uVar5 = (ulonglong)(uint)(1 << (param_4 & 0x3f)) - 1;
  dVar9 = (double)(longlong)(int)uVar5;
  iVar2 = fn_82BBD738((double)(float)(dVar9 * param_1 +
                                       (double)(float)((double)(longlong)iVar2 * lbl_820525A0)),
                        param_2,1);
  dVar8 = (double)(longlong)iVar2;
  if (dVar8 <= (double)lbl_821AAD20) {
    return 0;
  }
  if (dVar8 < dVar9) {
    return (ulonglong)(uint)(int)dVar8;
  }
  return uVar5;
}

