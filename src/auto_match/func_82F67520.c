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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F691F0();
extern int fn_82F6A3F8();
extern int fn_82F7BAF0();
extern int fn_82F7C2C0();
extern int fn_82F7C468();


ulonglong fn_82F67520(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       int *param_5)

{
  undefined4 *puVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (((param_3 & 0xffffffff) != 0) && ((param_4 & 0xffffffff) != 0)) {
    if ((param_1 & 0xffffffff) != 0) {
      if ((param_5 != (int *)0x0) &&
         (trapWord(6,param_3,0), (param_4 & 0xffffffff) <= 0xffffffff / (param_3 & 0xffffffff))) {
LAB_82f675c8:
        uVar7 = (longlong)(int)param_3 * (longlong)(int)param_4;
        if ((param_5[3] & 0x10cU) == 0) {
          uVar8 = 0x1000;
        }
        else {
          uVar8 = (ulonglong)(uint)param_5[6];
        }
        if ((uVar7 & 0xffffffff) == 0) {
          return param_4;
        }
        uVar9 = param_2;
        uVar10 = param_1;
        uVar11 = uVar7;
        do {
          if ((param_5[3] & 0x10cU) == 0) {
LAB_82f6766c:
            if ((uVar11 & 0xffffffff) < uVar8) {
              iVar4 = fn_82F7BAF0(param_5);
              if (iVar4 == -1) {
                uVar7 = (uVar7 - uVar11 & 0xffffffff) / (param_3 & 0xffffffff);
LAB_82f67770:
                trapWord(6,param_3,0);
                return uVar7;
              }
              if ((uVar9 & 0xffffffff) == 0) goto LAB_82f6773c;
              *(undefined1 *)uVar10 = (char)iVar4;
              uVar11 = uVar11 - 1;
              uVar8 = (ulonglong)(uint)param_5[6];
              uVar10 = uVar10 + 1;
              uVar9 = uVar9 - 1;
            }
            else {
              if (uVar8 == 0) {
                uVar2 = 0x7fffffff;
                if ((uVar11 & 0xffffffff) < 0x80000000) {
                  uVar2 = uVar11;
                }
              }
              else {
                trapWord(6,uVar8,0);
                if ((uVar11 & 0xffffffff) < 0x80000000) {
                  uVar2 = (longlong)(int)((uVar11 & 0xffffffff) / uVar8) * (longlong)(int)uVar8;
                }
                else {
                  uVar2 = (longlong)(int)(0x7fffffff / uVar8) * (longlong)(int)uVar8;
                }
              }
              if ((uVar9 & 0xffffffff) < (uVar2 & 0xffffffff)) {
LAB_82f6773c:
                if ((int)param_2 != -1) {
                    /* WARNING: Subroutine does not return */
                  fn_82F691F0(param_1,0,param_2);
                }
                puVar3 = (undefined4 *)fn_82F68240();
                uVar5 = 0x22;
                goto LAB_82f67568;
              }
              uVar1 = fn_82F7C468(param_5);
              uVar2 = fn_82F7C2C0(uVar1,uVar10,uVar2);
              if ((uVar2 & 0xffffffff) == 0) {
                uVar6 = param_5[3] | 0x10;
LAB_82f67780:
                param_5[3] = uVar6;
                trapWord(6,param_3,0);
                return (uVar7 - uVar11 & 0xffffffff) / (param_3 & 0xffffffff);
              }
              if ((int)uVar2 == -1) {
                uVar6 = param_5[3] | 0x20;
                goto LAB_82f67780;
              }
              uVar11 = uVar11 - uVar2;
              uVar10 = uVar2 + uVar10;
              uVar9 = uVar9 - uVar2;
            }
          }
          else {
            uVar6 = param_5[1];
            if (uVar6 == 0) goto LAB_82f6766c;
            if ((int)uVar6 < 0) {
              param_5[3] = param_5[3] | 0x20;
              uVar7 = (uVar7 - uVar11 & 0xffffffff) / (param_3 & 0xffffffff);
              goto LAB_82f67770;
            }
            uVar2 = (ulonglong)uVar6;
            if ((uVar11 & 0xffffffff) < (ulonglong)uVar6) {
              uVar2 = uVar11;
            }
            if ((uVar9 & 0xffffffff) < (uVar2 & 0xffffffff)) goto LAB_82f6773c;
            fn_82F6A3F8(uVar10,uVar9,*param_5,uVar2);
            uVar11 = uVar11 - uVar2;
            uVar10 = uVar2 + uVar10;
            *param_5 = *param_5 + (int)uVar2;
            uVar9 = uVar9 - uVar2;
            param_5[1] = param_5[1] - (int)uVar2;
          }
          if ((uVar11 & 0xffffffff) == 0) {
            return param_4;
          }
        } while( true );
      }
      if ((int)param_2 != -1) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_1,0,param_2);
      }
      if ((param_5 != (int *)0x0) &&
         (trapWord(6,param_3,0), (param_4 & 0xffffffff) <= 0xffffffff / (param_3 & 0xffffffff)))
      goto LAB_82f675c8;
    }
    puVar3 = (undefined4 *)fn_82F68240();
    uVar5 = 0x16;
LAB_82f67568:
    *puVar3 = uVar5;
    fn_82F63BA0();
  }
  return 0;
}

