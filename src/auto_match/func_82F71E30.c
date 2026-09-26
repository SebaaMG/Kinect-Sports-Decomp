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
extern unsigned int *lbl_832635C0;


/* WARNING: Removing unreachable block (ram,0x82f72214) */
/* WARNING: Removing unreachable block (ram,0x82f72270) */
/* WARNING: Removing unreachable block (ram,0x82f720e8) */
/* WARNING: Removing unreachable block (ram,0x82f72244) */
/* WARNING: Removing unreachable block (ram,0x82f72288) */
/* WARNING: Removing unreachable block (ram,0x82f72228) */
/* WARNING: Removing unreachable block (ram,0x82f72258) */

ulonglong fn_82F71E30(void)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  
  do {
    uVar4 = 0;
    if (*lbl_832635C0 == 0x5f) {
      lbl_832635C0 = lbl_832635C0 + 1;
      uVar4 = 0x4000;
    }
    bVar7 = *lbl_832635C0;
    lVar5 = (longlong)(char)bVar7;
    if (('@' < (char)bVar7) && ((char)bVar7 < '[')) {
      lbl_832635C0 = lbl_832635C0 + 1;
      uVar6 = lVar5 - 0x41;
      uVar3 = uVar4 | 0xa000;
      if ((uVar6 & 1) == 0) {
        uVar3 = (uVar4 | 0x8000) << 0x20 | uVar4 | 0x8000;
      }
      if (0x17 < (int)uVar6) {
        return uVar3;
      }
      if ((uVar3 & 0x8000) == 0) {
        uVar3 = uVar3 << 0x20 | uVar3 & 0xffff9fff;
      }
      else {
        uVar3 = uVar3 | 0x800;
      }
      if ((uVar6 & 0x18) == 0) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xffffffffffffe7ff | 0x800;
        }
        else {
          uVar3 = uVar3 | 0x40;
        }
      }
      else {
        iVar8 = (int)(uVar6 & 0x18);
        if (iVar8 == 8) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xffffffffffffe7ff | 0x1000;
          }
          else {
            uVar3 = uVar3 | 0x80;
          }
        }
        else {
          if (iVar8 != 0x10) {
            return 0xffff;
          }
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 << 0x20 | uVar3 & 0xffffe7ff;
          }
          else {
            uVar3 = uVar3 << 0x20 | uVar3 & 0xffffff3f;
          }
        }
      }
      if ((uVar6 & 6) != 0) {
        iVar8 = (int)(uVar6 & 6);
        if (iVar8 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            return uVar3 << 0x20 | uVar3 & 0xffff9fff;
          }
          return uVar3 | 0x200;
        }
        if (iVar8 != 4) {
          if (iVar8 != 6) {
            return 0xffff;
          }
          return uVar3 | 0x400;
        }
        return uVar3 | 0x100;
      }
      return uVar3;
    }
    if (bVar7 != 0x24) {
      if (((char)bVar7 < '0') || ('8' < (char)bVar7)) {
        if (bVar7 == 0x39) {
          lbl_832635C0 = lbl_832635C0 + 1;
          return 0xfffd;
        }
        if (bVar7 != 0) {
          return 0xffff;
        }
        return 0xfffe;
      }
      lbl_832635C0 = lbl_832635C0 + 1;
      uVar3 = uVar4 << 0x20;
      if (8 < (lVar5 - 0x30U & 0xffffffff)) {
        return 0xffff;
      }
      bVar1 = (int)(lVar5 - 0x30U) != 0;
      if (lVar5 == 0x31 && bVar1) {
        return uVar4 << 0x20 | 0x1000;
      }
      if (lVar5 == 0x32 && bVar1) {
        return 0;
      }
      if (lVar5 == 0x33 && bVar1) {
        return uVar3 | 0x4000;
      }
      if (lVar5 == 0x34 && bVar1) {
        return uVar3 | 0x2000;
      }
      if (lVar5 != 0x35 || !bVar1) {
        if (lVar5 == 0x36 && bVar1) {
          lVar5 = 0xd;
        }
        else {
          if (lVar5 == 0x37 && bVar1) {
            return uVar3 | 0x7000;
          }
          if (!bVar1) {
            return uVar4 << 0x20 | 0x800;
          }
          lVar5 = 0xf;
        }
        return lVar5 << 0xb | uVar3;
      }
      return uVar3 | 0x6000;
    }
    pbVar9 = lbl_832635C0 + 1;
    bVar7 = *pbVar9;
    bVar1 = false;
    if (0x42 < bVar7) {
      if (bVar7 == 0x43) {
        uVar3 = 0x7c00;
        goto code_r0x82f721ac;
      }
      if (bVar7 == 0x44) {
        uVar3 = uVar4 << 0x20 | uVar4 | 0x9100;
        goto code_r0x82f721ac;
      }
      if (bVar7 == 0x45) {
        uVar3 = uVar4 << 0x20 | uVar4 | 0x9200;
        goto code_r0x82f721ac;
      }
      if (bVar7 != 0x52) {
        lbl_832635C0 = pbVar9;
        return 0xffff;
      }
      pbVar9 = lbl_832635C0 + 2;
      bVar7 = *pbVar9;
      bVar1 = true;
      if (((char)bVar7 < '0') || ('5' < (char)bVar7)) {
        if (bVar7 == 0) {
          lbl_832635C0 = pbVar9;
          return 0xffff;
        }
        lbl_832635C0 = pbVar9;
        return 0xfffe;
      }
code_r0x82f720cc:
      if (bVar1) {
        uVar4 = uVar4 | 0x8e00;
      }
      else {
        uVar4 = uVar4 | 0x8d00;
      }
      uVar3 = uVar4 | 0x2000;
      if (((int)(char)bVar7 - 0x30U & 1) == 0) {
        uVar3 = uVar4 << 0x20 | uVar4;
      }
      uVar2 = (int)(char)bVar7 - 0x30U & 6;
      if (uVar2 == 0) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xffffffffffffe7ff | 0x800;
        }
        else {
          uVar3 = uVar3 | 0x40;
        }
      }
      else if (uVar2 == 2) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xffffffffffffe7ff | 0x1000;
        }
        else {
          uVar3 = uVar3 | 0x80;
        }
      }
      else {
        if (uVar2 != 4) {
          lbl_832635C0 = pbVar9;
          return 0xffff;
        }
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 << 0x20 | uVar3 & 0xffffe7ff;
        }
        else {
          uVar3 = uVar3 << 0x20 | uVar3 & 0xffffff3f;
        }
      }
      goto code_r0x82f721ac;
    }
    if (bVar7 == 0x42) {
      uVar3 = uVar4 | 0x9800;
      goto code_r0x82f721ac;
    }
    if (bVar7 == 0) {
      uVar3 = 0xfffe;
      pbVar9 = lbl_832635C0;
      goto code_r0x82f721ac;
    }
    if (bVar7 != 0x24) {
      if (bVar7 < 0x30) {
        lbl_832635C0 = pbVar9;
        return 0xffff;
      }
      if (0x35 < bVar7) {
        if (bVar7 != 0x41) {
          lbl_832635C0 = pbVar9;
          return 0xffff;
        }
        uVar3 = uVar4 << 0x20 | uVar4 | 0x9000;
        goto code_r0x82f721ac;
      }
      goto code_r0x82f720cc;
    }
    if (lbl_832635C0[2] == 0x50) {
      pbVar9 = lbl_832635C0 + 2;
    }
    lbl_832635C0 = pbVar9 + 1;
    bVar7 = *lbl_832635C0;
    if (bVar7 < 0x4b) {
      if (bVar7 == 0x4a) {
code_r0x82f72038:
        pbVar9 = pbVar9 + 2;
        bVar7 = *pbVar9;
        if (('/' < (char)bVar7) && ((char)bVar7 < ':')) {
          lbl_832635C0 = pbVar9 + (char)bVar7 + -0x2f;
          uVar4 = fn_82F71E30();
          return uVar4 | 0x10000;
        }
        uVar3 = 0xffff;
code_r0x82f721ac:
        lbl_832635C0 = pbVar9 + 1;
        return uVar3;
      }
      if (bVar7 == 0) {
        return 0xfffe;
      }
      if (bVar7 != 0x46) {
        bVar1 = bVar7 == 0x48;
code_r0x82f71f10:
        if (!bVar1) {
          return 0xffff;
        }
      }
    }
    else {
      if (bVar7 < 0x4c) {
        return 0xffff;
      }
      if (0x4d < bVar7) {
        if (0x4f < bVar7) {
          bVar1 = bVar7 == 0x51;
          goto code_r0x82f71f10;
        }
        goto code_r0x82f72038;
      }
    }
    lbl_832635C0 = pbVar9 + 2;
  } while( true );
}

