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
extern float fRam832115dc;
extern float fRam832115f0;
extern int fn_827EB2B0();
extern int fn_827EB518();
extern int fn_828114A8();
extern int fn_82859DF0();
extern int fn_82859EF0();
extern int fn_82859FD8();
extern int fn_8285F548();
extern int fn_8285F670();
extern int fn_82F68CC0();
extern int iRam832115e0;
extern int iRam8321161c;
extern int iRam83211624;
extern int iRam8321162c;
extern unsigned int uRam831573a0;
extern unsigned int uRam831574a0;
extern unsigned int uRam832115d0;
extern unsigned int uRam832115d4;
extern unsigned int uRam832115d8;
extern unsigned int uRam8321160c;
extern unsigned int uRam83211610;
extern unsigned int uRam83211614;
extern unsigned int uRam83211620;


void fn_8285F818(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar7;
  longlong lVar6;
  uint *puVar8;
  
  uVar5 = 0;
  uRam831573a0 = param_1;
  do {
    uRam831574a0 = (int)uVar5 - 1;
    puVar8 = *(uint **)((int)(uVar5 << 2) + -0x7cea8c60);
    puVar3 = (uint *)fn_82859DF0(puVar8,uRam832115d4);
    iRam83211624 = iRam83211624 + 1;
    uRam83211620 = iRam8321162c + uRam83211620;
    fn_82F68CC0();
    if (iRam832115e0 == 0) {
      fn_82859EF0((double)fRam832115dc,puVar8,uRam832115d8);
    }
    else if (iRam832115e0 == 1) {
      fn_82859FD8((double)fRam832115dc,puVar8,uRam832115d8);
    }
    uVar2 = uRam83211620;
    uVar1 = *puVar3;
    if ((iRam8321161c == 0) ||
       (iVar4 = fn_8285F548((ulonglong)uRam83211620 + 1,
                              (ulonglong)uRam83211614 + (ulonglong)uRam83211620 + 1,
                              (ulonglong)uVar1 + 1), iVar4 == 0)) {
      if (iRam832115e0 == 0) {
        iVar4 = fn_827EB2B0((double)fRam832115f0,uRam83211610,uVar2,0xffffffff832115e4);
LAB_8285f948:
        if (iVar4 == 0) goto LAB_8285fa30;
      }
      else {
        if (iRam832115e0 == 1) {
          iVar4 = fn_827EB518(uRam83211610,uVar2,0xffffffff832115f4,0xffffffff83211600,
                                    (ulonglong)uVar1);
          goto LAB_8285f948;
        }
        iVar4 = 2;
      }
      uVar1 = uRam832115d0;
      if ((*puVar8 & 0x40000000) == 0) {
        puVar8 = puVar8 + 7;
        if (iVar4 == 2) {
          lVar6 = 8;
          do {
            if (*(ushort *)puVar8 != 0) {
              fn_8285F670((ulonglong)*(ushort *)puVar8 * 0x2c + (ulonglong)uRam832115d0);
            }
            lVar6 = lVar6 + -1;
            puVar8 = (uint *)((int)puVar8 + 2);
          } while (lVar6 != 0);
        }
        else if (iVar4 == 1) {
          lVar6 = 8;
          do {
            if (*(ushort *)puVar8 != 0) {
              uRam831574a0 = uRam831574a0 + 1;
              *(uint *)(uRam831574a0 * 4 + -0x7cea8c60) = (uint)*(ushort *)puVar8 * 0x2c + uVar1;
            }
            puVar8 = (uint *)((int)puVar8 + 2);
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      else if ((*puVar8 & 0x40000000) == 0x40000000) {
        iVar4 = 0;
        if (*(short *)(puVar8 + 8) != 0) {
          iVar7 = 0;
          do {
            fn_828114A8(uRam8321160c,*(undefined4 *)(puVar8[7] + iVar7));
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar4 < (int)(uint)*(ushort *)(puVar8 + 8));
        }
      }
    }
LAB_8285fa30:
    iRam83211624 = iRam83211624 + -1;
    uRam83211620 = uRam83211620 - iRam8321162c;
    uVar5 = (ulonglong)uRam831574a0;
    if (uVar5 == 0xffffffffffffffff) {
      return;
    }
  } while( true );
}

