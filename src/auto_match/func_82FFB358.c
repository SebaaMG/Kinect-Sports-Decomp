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
extern unsigned int *auStack_58;
extern unsigned int fStack_70;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FE8608();
extern int fn_82FF6450();
extern int fn_82FF6B10();
extern int fn_82FF72A8();
extern int fn_82FF7A40();
extern int fn_82FF8938();
extern int fn_82FFAB30();
extern int fn_83017318();
extern int fn_83019140();
extern int fn_8301A5D0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


longlong fn_82FFB358(longlong param_1,int param_2,longlong param_3)

{
  char cVar2;
  ulonglong uVar1;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float afStack_60 [2];
  undefined1 auStack_58 [88];
  
  lVar7 = 1;
  if (param_2 != 0) {
    lVar5 = param_1 + 4;
    lVar7 = fn_82FF8938(lVar5,&fStack_70,4);
    fn_82FE8608((double)fStack_70,lVar7,2);
    uStack_80 = 0;
    if (((int)lVar7 == 1) && (lVar7 = fn_82FF8938(lVar5,&uStack_80,4), (int)lVar7 == 1)) {
      uVar4 = 0;
      if (uStack_80 != 0) {
        while( true ) {
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_8c = 0;
          uStack_84 = 0;
          lVar7 = fn_82FF8938(lVar5,&uStack_90,4);
          if (((((int)lVar7 != 1) ||
               (lVar7 = fn_82FF8938(lVar5,&uStack_78,4), (int)lVar7 != 1)) ||
              (lVar7 = fn_82FF7A40(lbl_832642E8,uStack_90), (int)lVar7 != 1)) ||
             ((lVar7 = fn_82FF6450(lbl_832642E8,uStack_90,uStack_78), (int)lVar7 != 1 ||
              (lVar7 = fn_82FF8938(lVar5,&uStack_8c,4), (int)lVar7 != 1)))) break;
          uVar3 = 0;
          if (uStack_8c != 0) {
            cVar2 = fn_8301A5D0(param_3 + 0x34);
            lVar7 = (ulonglong)(cVar2 == '\0') + 1;
            uVar3 = uStack_8c;
            if ((int)lVar7 != 1) break;
          }
          uVar6 = 0;
          if (uVar3 != 0) {
            do {
              uStack_74 = 0;
              lVar7 = fn_82FF8938(lVar5,&uStack_6c,4);
              if ((((int)lVar7 != 1) ||
                  (lVar7 = fn_82FF8938(lVar5,auStack_58,8), (int)lVar7 != 1)) ||
                 ((lVar7 = fn_82FFAB30(param_1,auStack_58,param_3,&uStack_74,0,uStack_90),
                  (int)lVar7 != 1 ||
                  (lVar7 = fn_82FF72A8(lbl_832642E8,uStack_90,uStack_6c,uStack_74),
                  (int)lVar7 != 1)))) goto LAB_82ffb60c;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uStack_8c);
          }
          lVar7 = fn_82FF8938(lVar5,&uStack_84,4);
          if ((int)lVar7 != 1) break;
          uVar3 = 0;
          if (uStack_84 != 0) {
            do {
              lVar7 = fn_82FF8938(lVar5,afStack_60,4);
              if (((((int)lVar7 != 1) ||
                   (lVar7 = fn_82FF8938(lVar5,&uStack_64,4), (int)lVar7 != 1)) ||
                  (lVar7 = fn_82FF8938(lVar5,&uStack_68,4), (int)lVar7 != 1)) ||
                 (lVar7 = fn_82FF6B10(lbl_832642E8,uStack_90,afStack_60[0],uStack_64,uStack_68
                                            ,0), (int)lVar7 != 1)) goto LAB_82ffb60c;
              uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_84);
          }
          uVar4 = uVar4 + 1;
          if (uStack_80 <= uVar4) break;
        }
      }
LAB_82ffb60c:
      uStack_7c = 0;
      if ((((int)lVar7 == 1) && (lVar7 = fn_82FF8938(lVar5,&uStack_7c,4), (int)lVar7 == 1)) &&
         (uVar4 = 0, uStack_7c != 0)) {
        do {
          lVar7 = fn_82FF8938(lVar5,&uStack_64,4);
          if ((((int)lVar7 != 1) || (lVar7 = fn_82FF8938(lVar5,afStack_60,4), (int)lVar7 != 1)
              ) || (lVar7 = fn_82FF8938(lVar5,&uStack_74,4), (int)lVar7 != 1)) break;
          if ((ulonglong)uStack_74 != 0) {
            lVar7 = ((ulonglong)uStack_74 + ((ulonglong)uStack_74 & 0x7fffffff) * 2 & 0x3fffffff) <<
                    2;
            uVar1 = fn_82FA5060(lbl_831BC768,lVar7);
            if ((uVar1 & 0xffffffff) == 0) {
              lVar7 = 2;
              break;
            }
            lVar7 = fn_82FF8938(lVar5,uVar1,lVar7);
            if ((int)lVar7 == 1) {
              lVar7 = fn_83019140(lbl_832642FC,uStack_64,afStack_60[0],uVar1,uStack_74);
            }
            fn_82FA5190(lbl_831BC768,uVar1);
            if ((int)lVar7 != 1) break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_7c);
      }
      uStack_88 = 0;
      if ((((int)lVar7 == 1) && (lVar7 = fn_82FF8938(lVar5,&uStack_88,4), (int)lVar7 == 1)) &&
         (uStack_88 != 0)) {
        do {
          lVar7 = fn_82FF8938(lVar5,&uStack_64,4);
          if ((int)lVar7 != 1) {
            return lVar7;
          }
          lVar7 = fn_82FF8938(lVar5,afStack_60,4);
          if ((int)lVar7 != 1) {
            return lVar7;
          }
          fn_83017318((double)afStack_60[0],lbl_832642FC,uStack_64);
          uVar1 = (ulonglong)uStack_88;
          uStack_88 = (uint)(uVar1 - 1);
        } while (uVar1 - 1 != 0);
      }
    }
  }
  return lVar7;
}

