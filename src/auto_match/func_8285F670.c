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
extern int fn_828114A8();
extern int fn_82859DF0();
extern int fn_82859EF0();
extern int fn_82859FD8();
extern int fn_8285F548();
extern int fn_82F68CC0();
extern int iRam832115d0;
extern int iRam832115e0;
extern int iRam8321161c;
extern int iRam83211624;
extern int iRam8321162c;
extern unsigned int uRam831574a8;
extern unsigned int uRam831575a8;
extern unsigned int uRam832115d4;
extern unsigned int uRam832115d8;
extern unsigned int uRam8321160c;
extern unsigned int uRam83211614;
extern unsigned int uRam83211620;


void fn_8285F670(undefined4 param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  uVar6 = 0;
  iVar3 = iRam83211624;
  uRam831574a8 = param_1;
  iVar7 = iRam8321162c;
  iVar4 = uRam83211620;
  do {
    uVar1 = uVar6 & 0xffffffff;
    uVar6 = uVar6 - 1;
    puVar5 = *(uint **)((int)(uVar1 << 2) + -0x7cea8b58);
    uRam831575a8 = (uint)uVar6;
    if (puVar5 != (uint *)0x0) {
      iRam83211624 = iVar3 + 1;
      uRam83211620 = iVar7 + iVar4;
      fn_82F68CC0();
      if (iRam8321161c == 0) {
LAB_8285f750:
        iVar3 = iRam832115d0;
        if ((*puVar5 & 0x40000000) == 0) {
          puVar5 = puVar5 + 7;
          lVar8 = 8;
          do {
            if (*(ushort *)puVar5 != 0) {
              uRam831575a8 = uRam831575a8 + 1;
              *(uint *)(uRam831575a8 * 4 + -0x7cea8b58) = (uint)*(ushort *)puVar5 * 0x2c + iVar3;
            }
            puVar5 = (uint *)((int)puVar5 + 2);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        else if ((*puVar5 & 0x40000000) == 0x40000000) {
          iVar3 = 0;
          if (*(short *)(puVar5 + 8) != 0) {
            iVar7 = 0;
            do {
              fn_828114A8(uRam8321160c,*(undefined4 *)(puVar5[7] + iVar7));
              iVar3 = iVar3 + 1;
              iVar7 = iVar7 + 4;
            } while (iVar3 < (int)(uint)*(ushort *)(puVar5 + 8));
          }
        }
      }
      else {
        puVar2 = (uint *)fn_82859DF0(puVar5,uRam832115d4);
        if (iRam832115e0 == 0) {
          fn_82859EF0((double)fRam832115dc,puVar5,uRam832115d8);
        }
        else if (iRam832115e0 == 1) {
          fn_82859FD8((double)fRam832115dc,puVar5,uRam832115d8);
        }
        iVar3 = fn_8285F548((ulonglong)uRam83211620 + 1,
                              (ulonglong)uRam83211614 + (ulonglong)uRam83211620 + 1,
                              (ulonglong)*puVar2 + 1);
        if (iVar3 == 0) goto LAB_8285f750;
      }
      iVar3 = iRam83211624 + -1;
      uVar6 = (ulonglong)uRam831575a8;
      uRam83211620 = uRam83211620 - iRam8321162c;
      iRam83211624 = iVar3;
      iVar4 = uRam83211620;
      iVar7 = iRam8321162c;
    }
    if ((longlong)(uVar6 + 1) < 1) {
      return;
    }
  } while( true );
}

