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
extern unsigned int *auStack_48;
extern int fn_82CE2410();
extern int fn_82CE2498();
extern int fn_82CE3460();
extern int fn_82CE3818();
extern int fn_82CE3870();
extern int fn_82CE38A0();
extern int fn_82CE38F0();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_5d;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82CE24E8(int param_1,ulonglong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  undefined1 uStack_5d;
  ushort uStack_5c;
  byte abStack_5a [2];
  undefined1 uStack_58;
  byte bStack_57;
  undefined4 uStack_54;
  uint uStack_50;
  byte *pbStack_4c;
  undefined1 auStack_48 [72];
  
  if ((param_2 & 0xffffffff) < 0x10) {
    uStack_54 = 1;
    uVar5 = fn_82CE38A0(param_1,&bStack_5f,&uStack_54);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    bVar3 = bStack_5f >> 2 & 3;
    if ((bVar3 != 0) && ((bVar3 == 1 || (bVar3 < 3)))) {
      uVar5 = fn_82CE3870(param_1,&uStack_5c);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if ((bStack_5f & 0x80) != 0) {
        uStack_54 = 1;
        uVar5 = fn_82CE38A0(param_1,&uStack_5d,&uStack_54);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      if (((bStack_5f & 0x40) != 0) &&
         (uVar5 = fn_82CE3870(param_1,&uStack_5c), (int)uVar5 < 0)) {
        return uVar5;
      }
      if ((bStack_5f & 0x20) != 0) {
        uStack_54 = 2;
        uVar5 = fn_82CE38A0(param_1,abStack_5a,&uStack_54);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (((abStack_5a[0] & 0x80) != 0) &&
           (uVar5 = fn_82CE3870(param_1,&uStack_5c), (int)uVar5 < 0)) {
          return uVar5;
        }
      }
      if ((bStack_5f & 0xc) == 8) {
        uVar5 = fn_82CE2498(param_1,&uStack_58,&uStack_5c);
        bVar3 = bStack_57;
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      else {
        bVar3 = 0;
      }
      uVar6 = 0;
      do {
        if ((bStack_5f & 0xc) == 8) {
          if (uVar6 < bVar3) {
            uVar5 = fn_82CE3818(param_1,&bStack_5e);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            uVar7 = 0;
            if (bStack_5e != 0) {
              do {
                uVar5 = fn_82CE3870(param_1,&uStack_5c);
                if ((int)uVar5 < 0) {
                  return uVar5;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < bStack_5e);
            }
            uVar5 = fn_82CE3870(param_1,&uStack_5c);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            uStack_50 = (uint)uStack_5c;
            uVar5 = fn_82CE38F0(param_1,&pbStack_4c,&uStack_50);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            bStack_60 = *pbStack_4c;
          }
          else {
            uStack_54 = 1;
            uVar5 = fn_82CE38A0(param_1,&bStack_60,&uStack_54);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            bVar1 = (bStack_60 & 0xc) == 0xc;
LAB_82ce2668:
            if (!bVar1) {
              return 0xffffffff80004005;
            }
          }
        }
        else {
          uStack_54 = 1;
          uVar2 = *(undefined4 *)(param_1 + 0xc);
          uVar5 = fn_82CE38A0(param_1,&bStack_60,&uStack_54);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          bVar4 = bStack_60 >> 2 & 3;
          if (bVar4 == 0) {
            if ((bStack_60 & 0x80) != 0) {
              uStack_54 = 1;
              uVar5 = fn_82CE38A0(param_1,&uStack_5d,&uStack_54);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
            }
            if (((bStack_60 & 0x40) != 0) &&
               (uVar5 = fn_82CE3870(param_1,&uStack_5c), (int)uVar5 < 0)) {
              return uVar5;
            }
            if ((bStack_60 & 0x20) != 0) {
              uStack_54 = 2;
              uVar5 = fn_82CE38A0(param_1,abStack_5a,&uStack_54);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              if (((abStack_5a[0] & 0x80) != 0) &&
                 (uVar5 = fn_82CE3870(param_1,&uStack_5c), (int)uVar5 < 0)) {
                return uVar5;
              }
            }
            if ((bStack_60 & 0x10) == 0) goto LAB_82ce2758;
            uVar5 = fn_82CE2410(param_1,auStack_48);
          }
          else {
            bVar1 = bVar4 == 3;
            if (2 < bVar4) goto LAB_82ce2668;
            fn_82CE3460(param_1,uVar2);
            uVar5 = fn_82CE24E8(param_1,param_2 + 1);
          }
          if ((int)uVar5 < 0) {
            return uVar5;
          }
        }
LAB_82ce2758:
        if ((bStack_5f & 0xc) == 8) {
          uVar6 = uVar6 + 1;
        }
        if ((bStack_60 & 0xc) == 0xc) {
          return uVar5;
        }
      } while( true );
    }
  }
  return 0xffffffff80004005;
}

