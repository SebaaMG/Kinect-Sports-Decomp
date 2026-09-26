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
extern int fn_82BF9038();
extern int fn_82BF9248();
extern int fn_82BF9498();
extern unsigned int lbl_8322B4F4;
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322DCF8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD1E;
extern unsigned int lbl_8322FD20;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;
extern unsigned int lbl_8322FD26;


undefined8 fn_82BFA4D0(void)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar6;
  ulonglong uVar5;
  ushort *puVar7;
  uint *puVar8;
  uint uVar9;
  short *psVar10;
  ulonglong uVar11;
  undefined2 *puVar13;
  ulonglong uVar12;
  
  psVar10 = &lbl_8322BCF8;
  iVar2 = fn_82BF9038(0xffffffff8322bcf8,0x4000,0,1);
  if (iVar2 != 0) {
    uVar11 = 0;
    iVar2 = 0xffe;
    uVar4 = 0;
    uVar9 = 0xffe;
    puVar13 = (undefined2 *)0x8322dcf4;
    do {
      uVar6 = (uint)(ushort)puVar13[-1];
      if (uVar6 == 0xffff) {
        uVar11 = uVar11 + 1;
        iVar2 = uVar9 - 1;
      }
      else if (uVar6 == 0xfffe) {
        uVar4 = uVar4 + 1;
      }
      else {
        if (0xffd < uVar6) {
          return 0;
        }
        if (uVar6 < uVar9) {
          return 0;
        }
      }
      puVar13 = puVar13 + -1;
      uVar9 = uVar9 - 1;
    } while (&lbl_8322BCF8 < puVar13);
    lbl_8322FD20 = (ushort)uVar4;
    uVar3 = uVar4 & 0xffff;
    uVar5 = 0;
    lbl_8322FD1C = (undefined2)uVar11;
    lbl_8322FD1E = (undefined2)iVar2;
    if ((uVar4 & 0xffffffff) != 0) {
      puVar7 = &lbl_8322ECF8;
      do {
        uVar9 = (uint)*puVar7;
        do {
          uVar6 = uVar9;
          if (0xffd < uVar6) {
            return 0;
          }
          uVar11 = uVar11 + 1;
          uVar9 = (uint)(ushort)(&lbl_8322BCF8)[uVar6];
        } while ((ushort)(&lbl_8322BCF8)[uVar6] != 0xfffe);
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 1;
        (&lbl_8322BCF8)[uVar6] = 0xfffd;
      } while ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
    if ((uVar11 & 0xffffffff) == 0xffe) {
      do {
        if (*psVar10 == -3) {
          *psVar10 = -2;
        }
        psVar10 = psVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      psVar10 = &lbl_8322B4F8;
      if ((uVar4 & 0xffffffff) != 0) {
        puVar13 = (undefined2 *)((int)&lbl_8322B4F4 + 2);
        uVar11 = uVar4;
        uVar5 = uVar4 & 0xffffffff;
        while (uVar5 != 0) {
          puVar13 = puVar13 + 1;
          *puVar13 = 0xffff;
          uVar11 = uVar11 - 1;
          uVar5 = uVar11;
        }
      }
      uVar11 = 0xffff;
      uVar5 = 0;
      if ((uVar4 & 0xffffffff) != 0) {
        iVar2 = 0;
        do {
          uVar1 = *(ushort *)((int)&lbl_8322F4F8 + iVar2);
          uVar12 = (ulonglong)uVar1;
          if (uVar12 == 0xffff) {
            uVar12 = uVar11 & 0xffffffff;
            uVar11 = uVar5;
            if (uVar12 != 0xffff) {
              return 0;
            }
          }
          else if (uVar12 < 0xfff0) {
            if ((uVar4 & 0xffffffff) <= uVar12) {
              return 0;
            }
            if ((&lbl_8322B4F8)[uVar1] != -1) {
              return 0;
            }
            (&lbl_8322B4F8)[uVar1] = (short)uVar5;
          }
          else {
            *(undefined2 *)((int)&lbl_8322B4F8 + iVar2) = 0xfffc;
          }
          uVar5 = uVar5 + 1;
          iVar2 = iVar2 + 2;
        } while ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff));
      }
      uVar12 = 0;
      uVar5 = 0xffff;
      if ((uVar4 & 0xffffffff) != 0) {
        do {
          uVar5 = uVar12;
          if (*psVar10 == -1) break;
          uVar12 = uVar12 + 1;
          psVar10 = psVar10 + 1;
          uVar5 = 0xffff;
        } while ((uVar12 & 0xffffffff) < (uVar4 & 0xffffffff));
      }
      lbl_8322FD22 = (undefined2)uVar5;
      lbl_8322FD24 = (undefined2)uVar11;
      lbl_8322FD26 = 0;
      uVar4 = 0;
      if (uVar3 != 0) {
        puVar8 = &lbl_8322DCF8;
        uVar9 = 0;
        do {
          uVar6 = *puVar8;
          if (uVar6 < uVar9) {
            lbl_8322FD26 = 0;
            return 0;
          }
          uVar4 = uVar4 + 1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar6;
        } while ((uVar4 & 0xffffffff) < uVar3);
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        puVar7 = &lbl_8322F4F8;
        do {
          uVar1 = *puVar7;
          if (uVar1 == 0xffff) {
LAB_82bfa73c:
            uVar4 = uVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          else {
            if (uVar1 == 0xfffd) {
              fn_82BF9248(uVar4);
              uVar3 = (ulonglong)lbl_8322FD20;
              goto LAB_82bfa73c;
            }
            if (uVar1 < 0xfff1) goto LAB_82bfa73c;
            fn_82BF9498(uVar4);
            uVar3 = (ulonglong)lbl_8322FD20;
          }
        } while ((uVar4 & 0xffffffff) < uVar3);
      }
      return 1;
    }
  }
  return 0;
}

