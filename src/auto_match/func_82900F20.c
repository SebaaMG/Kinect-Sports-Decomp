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
extern int fn_828FF2C0();
extern int fn_828FFA30();
extern int fn_82900D80();
extern unsigned int lbl_82029C08;
extern unsigned int lbl_82029C88;
extern unsigned int lbl_82029D08;
extern unsigned int lbl_82029E10;
extern unsigned int lbl_82029E50;
extern unsigned int lbl_82029F58;
extern unsigned int lbl_8202A060;
extern unsigned int lbl_8202A0A0;
extern unsigned int lbl_8202A2F0;


undefined8 fn_82900F20(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  
  *(int *)(param_1 + 0x14) = param_1 + 0x408;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(short **)(param_1 + 0x10) = (short *)(param_1 + 0x20);
  iVar11 = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
LAB_82900f6c:
  do {
    while( true ) {
      iVar10 = iVar11 * 2;
      sVar1 = *(short *)(&lbl_82029D08 + iVar10);
      if (sVar1 == 0) break;
LAB_82901070:
      iVar11 = sVar1 * 2;
      iVar10 = (int)*(short *)(&lbl_82029C88 + iVar11);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar10 * -4 + 4);
      switch((int)sVar1) {
      case 1:
        uVar3 = 0;
        goto code_r0x82901360;
      case 2:
        uVar4 = 1;
        uVar3 = 1;
        break;
      case 3:
        uVar4 = 1;
        uVar3 = 2;
        break;
      case 4:
        uVar4 = 2;
        uVar3 = 3;
        break;
      case 5:
        uVar4 = 1;
        uVar3 = 4;
        break;
      case 6:
        uVar4 = 1;
        uVar3 = 5;
        break;
      case 7:
        uVar3 = 6;
        goto code_r0x82901360;
      case 8:
        uVar4 = 1;
        uVar3 = 7;
        break;
      case 9:
        uVar4 = 1;
        uVar3 = 8;
        break;
      case 10:
        uVar4 = 1;
        uVar3 = 9;
        break;
      case 0xb:
        uVar4 = 1;
        uVar3 = 10;
        break;
      case 0xc:
        uVar4 = 2;
        uVar3 = 0xb;
        break;
      case 0xd:
        uVar4 = 1;
        uVar3 = 0xc;
        break;
      case 0xe:
        uVar4 = 2;
        uVar3 = 0xd;
        break;
      case 0xf:
        uVar4 = 3;
        uVar3 = 0xe;
        break;
      case 0x10:
        uVar4 = 4;
        uVar3 = 0xf;
        break;
      case 0x11:
        uVar4 = 5;
        uVar3 = 0x10;
        break;
      case 0x12:
        uVar4 = 6;
        uVar3 = 0x11;
        break;
      case 0x13:
        uVar4 = 6;
        uVar3 = 0x12;
        break;
      case 0x14:
        uVar4 = 6;
        uVar3 = 0x13;
        break;
      case 0x15:
        uVar4 = 3;
        uVar3 = 0x14;
        break;
      case 0x16:
        uVar4 = 2;
        uVar3 = 0x15;
        break;
      case 0x17:
        uVar4 = 3;
        uVar3 = 0x16;
        break;
      case 0x18:
        uVar4 = 1;
        uVar3 = 0x17;
        break;
      case 0x19:
        uVar4 = 2;
        uVar3 = 0x18;
        break;
      case 0x1a:
        uVar4 = 1;
        uVar3 = 0x19;
        break;
      case 0x1b:
        uVar4 = 1;
        uVar3 = 0x1a;
        break;
      case 0x1c:
        uVar4 = 1;
        uVar3 = 0x1b;
        break;
      case 0x1d:
        uVar4 = 2;
        uVar3 = 0x1c;
        break;
      case 0x1e:
        uVar4 = 1;
        uVar3 = 0x1d;
        break;
      case 0x1f:
        uVar4 = 2;
        uVar3 = 0x1e;
        break;
      case 0x20:
        uVar4 = 1;
        uVar3 = 0x21;
        break;
      case 0x21:
        uVar4 = 2;
        uVar3 = 0x22;
        break;
      case 0x22:
        uVar4 = 1;
        uVar3 = 0x23;
        break;
      case 0x23:
        uVar4 = 2;
        uVar3 = 0x24;
        break;
      case 0x24:
        uVar4 = 1;
        uVar3 = 0x25;
        break;
      case 0x25:
        uVar4 = 1;
        uVar3 = 0x26;
        break;
      case 0x26:
        uVar3 = 0x27;
        goto code_r0x82901360;
      case 0x27:
        uVar3 = 0x28;
        goto code_r0x82901360;
      case 0x28:
        uVar4 = 1;
        uVar3 = 0x29;
        break;
      case 0x29:
        uVar4 = 1;
        uVar3 = 0x2a;
        break;
      case 0x2a:
        uVar4 = 1;
        uVar3 = 0x2b;
        break;
      case 0x2b:
        uVar4 = 1;
        uVar3 = 0x2c;
        break;
      case 0x2c:
        uVar4 = 1;
        uVar3 = 0x2d;
        break;
      case 0x2d:
        uVar4 = 1;
        uVar3 = 0x2e;
        break;
      case 0x2e:
        uVar4 = 1;
        uVar3 = 0x2f;
        break;
      case 0x2f:
        uVar4 = 1;
        uVar3 = 0x30;
        break;
      case 0x30:
        uVar4 = 1;
        uVar3 = 0x31;
        break;
      case 0x31:
        uVar3 = 0x32;
        goto code_r0x82901360;
      case 0x32:
        uVar3 = 0x33;
        goto code_r0x82901360;
      case 0x33:
        uVar3 = 0x34;
        goto code_r0x82901360;
      case 0x34:
        uVar3 = 0x35;
        goto code_r0x82901360;
      case 0x35:
        uVar3 = 0x36;
        goto code_r0x82901360;
      case 0x36:
        uVar3 = 0x37;
        goto code_r0x82901360;
      case 0x37:
        uVar3 = 0x38;
        goto code_r0x82901360;
      case 0x38:
        uVar3 = 0x39;
        goto code_r0x82901360;
      case 0x39:
        uVar3 = 0x3a;
        goto code_r0x82901360;
      case 0x3a:
        uVar3 = 0x3b;
        goto code_r0x82901360;
      case 0x3b:
        uVar3 = 0x3c;
        goto code_r0x82901360;
      case 0x3c:
        uVar3 = 0x3d;
        goto code_r0x82901360;
      case 0x3d:
        uVar3 = 0x3e;
        goto code_r0x82901360;
      case 0x3e:
        uVar3 = 0x3f;
code_r0x82901360:
        uVar4 = 0;
        break;
      default:
        goto LAB_8290136c;
      }
      fn_828FF2C0(*(undefined4 *)(param_1 + 0xbd8),uVar3,uVar4);
LAB_8290136c:
      psVar7 = (short *)(*(int *)(param_1 + 0x10) + iVar10 * -2);
      *(short **)(param_1 + 0x10) = psVar7;
      sVar1 = *psVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10 * -4;
      if ((sVar1 == 0) && (*(short *)(&lbl_82029C08 + iVar11) == 0)) {
        iVar11 = 0x10;
        puVar9 = (undefined2 *)(*(int *)(param_1 + 0x10) + 2);
        *(undefined2 **)(param_1 + 0x10) = puVar9;
        *puVar9 = 0x10;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *puVar8 = *(undefined4 *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0xc) < 0) {
          iVar10 = fn_82900D80(*(undefined4 *)(param_1 + 0xbd8));
          *(int *)(param_1 + 0xc) = iVar10;
          if (iVar10 < 0) {
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
        }
        if (*(int *)(param_1 + 0xc) == 0) {
          return 0;
        }
      }
      else {
        iVar11 = *(short *)(&lbl_82029C08 + iVar11) * 2;
        if ((*(short *)(&lbl_8202A060 + iVar11) == 0) ||
           (((uVar6 = (longlong)*(short *)(&lbl_8202A060 + iVar11) + (longlong)sVar1,
             (longlong)uVar6 < 0 || (0x127 < (int)uVar6)) ||
            (iVar10 = (int)((uVar6 & 0xffffffff) << 1), *(short *)(&lbl_8202A2F0 + iVar10) != sVar1)
            ))) {
          sVar1 = *(short *)(&lbl_82029E10 + iVar11);
        }
        else {
          sVar1 = *(short *)(&lbl_8202A0A0 + iVar10);
        }
        if (param_1 + 0x406U <= *(uint *)(param_1 + 0x10)) {
LAB_82901558:
          fn_828FFA30(param_1,0xffffffff82029624);
          return 1;
        }
        psVar7 = (short *)(*(uint *)(param_1 + 0x10) + 2);
        *(short **)(param_1 + 0x10) = psVar7;
        *psVar7 = sVar1;
        uVar5 = *(undefined4 *)(param_1 + 0x18);
LAB_82901470:
        iVar11 = (int)sVar1;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *puVar8 = uVar5;
      }
    }
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar2 = fn_82900D80(*(undefined4 *)(param_1 + 0xbd8));
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    if (*(short *)(&lbl_82029E50 + iVar10) != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xc) + (longlong)*(short *)(&lbl_82029E50 + iVar10);
      if (((-1 < (longlong)uVar6) && ((int)uVar6 < 0x128)) &&
         (iVar2 = (int)((uVar6 & 0xffffffff) << 1),
         (int)*(short *)(&lbl_8202A2F0 + iVar2) == *(uint *)(param_1 + 0xc))) {
        if (param_1 + 0x406U <= *(uint *)(param_1 + 0x10)) goto LAB_82901558;
        psVar7 = (short *)(*(uint *)(param_1 + 0x10) + 2);
        sVar1 = *(short *)(&lbl_8202A0A0 + iVar2);
        iVar11 = (int)sVar1;
        *(short **)(param_1 + 0x10) = psVar7;
        *psVar7 = sVar1;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *puVar8 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        if (0 < *(int *)(param_1 + 8)) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        goto LAB_82900f6c;
      }
    }
    if (*(short *)(&lbl_82029F58 + iVar10) != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xc) + (longlong)*(short *)(&lbl_82029F58 + iVar10);
      if (((-1 < (longlong)uVar6) && ((int)uVar6 < 0x128)) &&
         (iVar10 = (int)((uVar6 & 0xffffffff) << 1),
         (int)*(short *)(&lbl_8202A2F0 + iVar10) == *(uint *)(param_1 + 0xc))) {
        sVar1 = *(short *)(&lbl_8202A0A0 + iVar10);
        goto LAB_82901070;
      }
    }
    if (*(int *)(param_1 + 8) == 0) {
      fn_828FFA30(param_1,0xffffffff82029464);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    if (*(int *)(param_1 + 8) < 3) {
      *(undefined4 *)(param_1 + 8) = 3;
      while( true ) {
        psVar7 = *(short **)(param_1 + 0x10);
        if (((*(short *)(&lbl_82029E50 + *psVar7 * 2) != 0) &&
            (uVar6 = (longlong)*(short *)(&lbl_82029E50 + *psVar7 * 2) + 0x100, -1 < (longlong)uVar6
            )) && (((int)uVar6 < 0x128 &&
                   (iVar11 = (int)((uVar6 & 0xffffffff) << 1),
                   *(short *)(&lbl_8202A2F0 + iVar11) == 0x100)))) break;
        if (psVar7 <= (short *)(param_1 + 0x20)) {
          return 1;
        }
        *(short **)(param_1 + 0x10) = psVar7 + -1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
      }
      if ((short *)(param_1 + 0x406) <= psVar7) goto LAB_82901558;
      sVar1 = *(short *)(&lbl_8202A0A0 + iVar11);
      *(short **)(param_1 + 0x10) = psVar7 + 1;
      psVar7[1] = sVar1;
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      goto LAB_82901470;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  } while( true );
}

