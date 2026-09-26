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
extern int fn_82F63C78();
extern int fn_82F63CA0();
extern int fn_82F664B0();
extern int fn_82F68240();
extern unsigned int lbl_831BBCA8;
extern unsigned int uRam8326419c;


undefined4
fn_82F7F510(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4,int *param_5,
             char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar6;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined1 *puVar8;
  
  if ((param_1 & 0xffffffff) == 0) {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
    uVar7 = 0x16;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      puVar1 = (undefined4 *)fn_82F68240();
      uVar7 = 0x16;
    }
    else {
      if ((((((param_3 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(param_3 == 0) & param_3) + 9 &
          0xffffffff) < (param_2 & 0xffffffff)) {
        if ((param_6 != '\0') &&
           (lVar3 = (*param_5 == 0x2d) + param_1, lVar4 = lVar3, 0 < (int)param_3)) {
          do {
            pcVar6 = (char *)lVar4;
            lVar4 = lVar4 + 1;
          } while (*pcVar6 != '\0');
          fn_82F63CA0(lVar3 + 1,lVar3,((lVar4 - lVar3) - 1U & 0xffffffff) + 1);
        }
        uVar5 = param_1;
        if (*param_5 == 0x2d) {
          uVar5 = param_1 + 1;
          *(undefined1 *)param_1 = 0x2d;
        }
        if (0 < (int)param_3) {
          puVar8 = (undefined1 *)uVar5;
          uVar5 = uVar5 + 1;
          *puVar8 = puVar8[1];
          *(undefined1 *)uVar5 = *(undefined1 *)**(undefined4 **)(lbl_831BBCA8 + 0xbc);
        }
        lVar4 = (param_6 == '\0') + uVar5 + param_3;
        if ((int)param_2 == -1) {
          lVar3 = -1;
        }
        else {
          lVar3 = (param_1 - lVar4) + param_2;
        }
        iVar2 = fn_82F664B0(lVar4,lVar3,0xffffffff8216a9d4);
        if (iVar2 == 0) {
          puVar8 = (undefined1 *)lVar4;
          if (param_4 != 0) {
            *puVar8 = 0x45;
          }
          if (*(char *)param_5[3] != '0') {
            lVar3 = (ulonglong)(uint)param_5[1] - 1;
            if (lVar3 < 0) {
              lVar3 = -lVar3;
              puVar8[1] = 0x2d;
            }
            iVar2 = (int)lVar3;
            if (99 < iVar2) {
              puVar8[2] = (char)(iVar2 / 100) + puVar8[2];
              lVar3 = lVar3 + (longlong)(iVar2 / 100) * -100;
            }
            iVar2 = (int)lVar3;
            if (9 < iVar2) {
              puVar8[3] = (char)(iVar2 / 10) + puVar8[3];
              lVar3 = lVar3 + (longlong)(iVar2 / 10) * -10;
            }
            puVar8[4] = puVar8[4] + (char)lVar3;
          }
          if (((uRam8326419c & 1) != 0) && (*(char *)(lVar4 + 2) == '0')) {
            fn_82F63CA0(lVar4 + 2,lVar4 + 3,3);
          }
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F63C78(0,0,0,0,0);
      }
      puVar1 = (undefined4 *)fn_82F68240();
      uVar7 = 0x22;
    }
    *puVar1 = uVar7;
    fn_82F63BA0();
  }
  return uVar7;
}

