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
extern unsigned int *auStack_110;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_230;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_b0;
extern int fn_8243FF38();
extern int fn_82F68CC0();


undefined4 * fn_8243ECC8(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_2f0 [96];
  undefined1 auStack_290 [96];
  undefined1 auStack_230 [96];
  undefined1 auStack_1d0 [96];
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [96];
  undefined1 auStack_b0 [176];
  
  piVar10 = param_3 + -0x17;
  uVar4 = ((int)param_3 - (int)param_2) / 0x5c;
  iVar5 = ((int)piVar10 - (int)param_2) / 0x5c;
  piVar8 = param_2 + (((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0)) * 0x17;
  piVar3 = param_2;
  if (0x28 < iVar5) {
    uVar4 = iVar5 + 1;
    iVar5 = ((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0);
    fn_8243FF38(param_2,param_2 + iVar5 * 0x17,param_2 + iVar5 * 0x2e);
    fn_8243FF38(piVar8 + iVar5 * -0x17,piVar8,piVar8 + iVar5 * 0x17);
    fn_8243FF38(piVar10 + iVar5 * -0x2e,piVar10 + iVar5 * -0x17,piVar10);
    piVar10 = piVar10 + iVar5 * -0x17;
    piVar3 = param_2 + iVar5 * 0x17;
  }
  fn_8243FF38(piVar3,piVar8,piVar10);
  piVar10 = piVar8 + 0x17;
  if (param_2 < piVar8) {
    piVar3 = piVar8 + -5;
    do {
      if (piVar3[1] == 1) {
        if (piVar3[0x18] == 1) {
          if ((*piVar3 < piVar3[0x17]) || ((*piVar3 == piVar3[0x17] && (piVar3[-0x12] < *piVar8))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
      if (bVar1) break;
      if (piVar3[0x18] == 1) {
        if (piVar3[1] == 1) {
          if ((piVar3[0x17] < *piVar3) || ((piVar3[0x17] == *piVar3 && (*piVar8 < piVar3[-0x12]))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
      if (bVar1) break;
      piVar8 = piVar8 + -0x17;
      piVar3 = piVar3 + -0x17;
    } while (param_2 < piVar8);
  }
  do {
    piVar3 = piVar8;
    piVar7 = piVar10;
    if (param_3 <= piVar10) break;
    if (piVar10[0x13] == 1) {
      if (piVar8[0x13] == 1) {
        if ((piVar10[0x12] < piVar8[0x12]) ||
           ((piVar10[0x12] == piVar8[0x12] && (*piVar10 < *piVar8)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    if (piVar8[0x13] == 1) {
      if (piVar10[0x13] == 1) {
        if ((piVar8[0x12] < piVar10[0x12]) ||
           ((piVar8[0x12] == piVar10[0x12] && (*piVar8 < *piVar10)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    piVar10 = piVar10 + 0x17;
  } while( true );
LAB_8243f040:
  if (param_3 <= piVar10) {
LAB_8243f048:
    piVar9 = piVar8;
    if (param_2 < piVar3) {
      piVar8 = piVar3 + -5;
      do {
        if (piVar8[1] == 1) {
          if (piVar9[0x13] == 1) {
            if ((*piVar8 < piVar9[0x12]) || ((*piVar8 == piVar9[0x12] && (piVar8[-0x12] < *piVar9)))
               ) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          if (piVar9[0x13] == 1) {
            if (piVar8[1] == 1) {
              if ((piVar9[0x12] < *piVar8) ||
                 ((piVar9[0x12] == *piVar8 && (*piVar9 < piVar8[-0x12])))) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          if (bVar1) break;
          piVar9 = piVar9 + -0x17;
          fn_82F68CC0(auStack_110,piVar9,0x5c);
          fn_82F68CC0(piVar9,piVar8 + -0x12,0x5c);
          fn_82F68CC0(piVar8 + -0x12,auStack_110,0x5c);
        }
        piVar3 = piVar3 + -0x17;
        piVar8 = piVar8 + -0x17;
      } while (param_2 < piVar3);
    }
    if (piVar3 == param_2) {
      if (piVar10 == param_3) {
        *param_1 = piVar9;
        param_1[1] = piVar7;
        return param_1;
      }
      if (piVar7 != piVar10) {
        fn_82F68CC0(auStack_1d0,piVar9,0x5c);
        fn_82F68CC0(piVar9,piVar7,0x5c);
        fn_82F68CC0(piVar7,auStack_1d0,0x5c);
      }
      piVar8 = piVar9 + 0x17;
      fn_82F68CC0(auStack_2f0,piVar9,0x5c);
      fn_82F68CC0(piVar9,piVar10,0x5c);
      puVar2 = auStack_2f0;
      piVar9 = piVar10;
      piVar7 = piVar7 + 0x17;
      piVar10 = piVar10 + 0x17;
    }
    else {
      if (piVar10 != param_3) {
        piVar3 = piVar3 + -0x17;
        fn_82F68CC0(auStack_b0,piVar10,0x5c);
        fn_82F68CC0(piVar10,piVar3,0x5c);
        puVar2 = auStack_b0;
        piVar8 = piVar9;
        piVar9 = piVar3;
        piVar6 = piVar7;
        goto LAB_8243f034;
      }
      piVar3 = piVar3 + -0x17;
      piVar8 = piVar9 + -0x17;
      if (piVar3 != piVar8) {
        fn_82F68CC0(auStack_230,piVar3,0x5c);
        fn_82F68CC0(piVar3,piVar8,0x5c);
        fn_82F68CC0(piVar8,auStack_230,0x5c);
      }
      piVar9 = piVar7 + -0x17;
      fn_82F68CC0(auStack_170,piVar8,0x5c);
      fn_82F68CC0(piVar8,piVar9,0x5c);
      puVar2 = auStack_170;
      piVar7 = piVar9;
    }
    fn_82F68CC0(piVar9,puVar2,0x5c);
    goto LAB_8243f040;
  }
  if (piVar8[0x13] == 1) {
    if (piVar10[0x13] == 1) {
      if ((piVar8[0x12] < piVar10[0x12]) ||
         ((piVar8[0x12] == piVar10[0x12] && (*piVar8 < *piVar10)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (piVar10[0x13] == 1) {
      if (piVar8[0x13] == 1) {
        if ((piVar10[0x12] < piVar8[0x12]) ||
           ((piVar10[0x12] == piVar8[0x12] && (*piVar10 < *piVar8)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) goto LAB_8243f048;
    piVar6 = piVar7 + 0x17;
    fn_82F68CC0(auStack_290,piVar7,0x5c);
    fn_82F68CC0(piVar7,piVar10,0x5c);
    puVar2 = auStack_290;
    piVar9 = piVar10;
LAB_8243f034:
    fn_82F68CC0(piVar9,puVar2,0x5c);
    piVar7 = piVar6;
  }
  piVar10 = piVar10 + 0x17;
  goto LAB_8243f040;
}

