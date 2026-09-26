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
extern double dRam83248e60;
extern double dRam83248e68;
extern double dRam83248e80;
extern double dRam83248e90;
extern double dRam83248e98;
extern int fn_8265C990();
extern int fn_82BA02A8();
extern int fn_82E91948();
extern int fn_82ED4AE8();
extern int fn_82EDBF50();
extern int fn_82F0DD40();
extern int fn_82F143A8();
extern int fn_82F15538();
extern int fn_82F174E0();
extern int fn_82F17D48();
extern int fn_82F641F8();
extern int iRam83248e50;
extern int iRam83248e88;
extern unsigned int lbl_82005710;
extern unsigned int lbl_8215F6D0;
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;
extern unsigned int uRam83248e70;
extern unsigned int uRam83248e78;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E871A0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar5;
  longlong lVar4;
  int *piVar6;
  double dVar7;
  
  fn_82F17D48(*(undefined4 *)(param_1 + 0x300));
  if (*(int *)(param_1 + 0x300) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x300),0x248c8000);
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  fn_82F17D48(*(undefined4 *)(param_1 + 0x304));
  if (*(int *)(param_1 + 0x304) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x304),0x248c8000);
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  if (*(int *)(param_1 + 0x4b04) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4b04),0x248c8000);
    *(undefined4 *)(param_1 + 0x4b04) = 0;
  }
  if (*(int *)(param_1 + 0x4b08) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4b08),0x248c8000);
    *(undefined4 *)(param_1 + 0x4b08) = 0;
  }
  if (*(int *)(param_1 + 0x4b00) != 0) {
    fn_82EDBF50();
  }
  if (*(int *)(param_1 + 4) == 8) {
    fn_82F17D48(*(undefined4 *)(param_1 + 0x30c));
    if (*(int *)(param_1 + 0x30c) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x30c),0x248c8000);
      *(undefined4 *)(param_1 + 0x30c) = 0;
    }
    if (*(int *)(param_1 + 0x6f0c) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x6f0c),0x248c8000);
      *(undefined4 *)(param_1 + 0x6f0c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1a5c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1a5c),0x248c8000);
    *(undefined4 *)(param_1 + 0x1a5c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b40);
  if (iVar1 != 0) {
    fn_82ED4AE8(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(undefined4 *)(param_1 + 0x7b40) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x830);
  if (iVar1 != 0) {
    fn_82E91948(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(undefined4 *)(param_1 + 0x830) = 0;
  }
  if (*(int *)(param_1 + 0x874) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x874),0x248c8000);
    *(undefined4 *)(param_1 + 0x874) = 0;
  }
  if (*(int *)(param_1 + 0x690) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x690),0x248c8000);
    *(undefined4 *)(param_1 + 0x690) = 0;
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x908),0x248c8000);
    *(undefined4 *)(param_1 + 0x908) = 0;
  }
  if (*(int *)(param_1 + 0x988) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x988),0x248c8000);
    *(undefined4 *)(param_1 + 0x988) = 0;
  }
  if (*(int *)(param_1 + 0x918) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x918),0x248c8000);
    *(undefined4 *)(param_1 + 0x918) = 0;
  }
  if (*(int *)(param_1 + 0x928) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x928),0x248c8000);
    *(undefined4 *)(param_1 + 0x928) = 0;
  }
  if (*(int *)(param_1 + 0xaec) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xaec),0x248c8000);
    *(undefined4 *)(param_1 + 0xaec) = 0;
  }
  if (*(int *)(param_1 + 0x990) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x990),0x248c8000);
    *(undefined4 *)(param_1 + 0x990) = 0;
  }
  if (*(int *)(param_1 + 0x1ea8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1ea8),0x248c8000);
    *(undefined4 *)(param_1 + 0x1ea8) = 0;
  }
  if (*(int *)(param_1 + 0x9a8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x9a8),0x248c8000);
    *(undefined4 *)(param_1 + 0x9a8) = 0;
  }
  if (*(int *)(param_1 + 0x998) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x998),0x248c8000);
    *(undefined4 *)(param_1 + 0x998) = 0;
  }
  if (*(int *)(param_1 + 0x9a0) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x9a0),0x248c8000);
    *(undefined4 *)(param_1 + 0x9a0) = 0;
  }
  if (*(int *)(param_1 + 0x1aa0) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1aa0),0x248c8000);
    *(undefined4 *)(param_1 + 0x1aa0) = 0;
  }
  if (*(int *)(param_1 + 0x4eec) != 0) {
    fn_82F174E0();
  }
  if (*(int *)(param_1 + 0x4ef4) != 0) {
    fn_82F174E0();
    *(undefined4 *)(param_1 + 0x4ef4) = 0;
  }
  if (*(int *)(param_1 + 0x914) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x914),0x248c8000);
    *(undefined4 *)(param_1 + 0x914) = 0;
  }
  if (*(int *)(param_1 + 0x1eb0) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1eb0),0x248c8000);
    *(undefined4 *)(param_1 + 0x1eb0) = 0;
  }
  if (*(int *)(param_1 + 0xb7c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xb7c),0x248c8000);
    *(undefined4 *)(param_1 + 0xb7c) = 0;
  }
  if (*(int *)(param_1 + 0x1afc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1afc),0x248c8000);
    *(undefined4 *)(param_1 + 0x1afc) = 0;
  }
  if (*(int *)(param_1 + 0x1b88) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1b88),0x248c8000);
    *(undefined4 *)(param_1 + 0x1b88) = 0;
  }
  if (*(int *)(param_1 + 0x1b8c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1b8c),0x248c8000);
    *(undefined4 *)(param_1 + 0x1b8c) = 0;
  }
  if (*(int *)(param_1 + 4) == 8) {
    if (*(int *)(param_1 + 0xb84) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xb84),0x248c8000);
      *(undefined4 *)(param_1 + 0xb84) = 0;
    }
    if (*(int *)(param_1 + 0xb88) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xb88),0x248c8000);
      *(undefined4 *)(param_1 + 0xb88) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1ea8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1ea8),0x248c8000);
    *(undefined4 *)(param_1 + 0x1ea8) = 0;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x658) != 0) {
    piVar6 = (int *)(param_1 + 0xb30);
    do {
      if (*piVar6 != 0) {
        fn_8265C990(*piVar6,0x248c8000);
        *piVar6 = 0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0xf2;
    } while (uVar5 < *(uint *)(param_1 + 0x658));
  }
  if (*(int *)(param_1 + 0x5268) != 0) {
    fn_82F17D48(*(undefined4 *)(param_1 + 0x5270));
    if (*(int *)(param_1 + 0x5270) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x5270),0x248c8000);
      *(undefined4 *)(param_1 + 0x5270) = 0;
    }
    if (*(int *)(param_1 + 0x6d54) != 0) {
      fn_82F17D48(*(undefined4 *)(param_1 + 0x5274));
      if (*(int *)(param_1 + 0x5274) != 0) {
        fn_8265C990(*(int *)(param_1 + 0x5274),0x248c8000);
        *(undefined4 *)(param_1 + 0x5274) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x1a94) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1a94),0x248c8000);
    *(undefined4 *)(param_1 + 0x1a94) = 0;
  }
  if (*(int *)(param_1 + 0x1a88) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1a88),0x248c8000);
    *(undefined4 *)(param_1 + 0x1a88) = 0;
  }
  if (*(int *)(param_1 + 0x1a8c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1a8c),0x248c8000);
    *(undefined4 *)(param_1 + 0x1a8c) = 0;
  }
  if (*(int *)(param_1 + 0x9b0) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x9b0),0x248c8000);
    *(undefined4 *)(param_1 + 0x9b0) = 0;
  }
  if (*(int *)(param_1 + 0x1df0) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1df0),0x248c8000);
    *(undefined4 *)(param_1 + 0x1df0) = 0;
  }
  if (*(int *)(param_1 + 0x1bf4) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1bf4),0x248c8000);
    *(undefined4 *)(param_1 + 0x1bf4) = 0;
  }
  if ((*(int *)(param_1 + 0x64c) != 0) && (*(int *)(param_1 + 0x1c40) != 0)) {
    fn_8265C990(*(int *)(param_1 + 0x1c40),0x248c8000);
    *(undefined4 *)(param_1 + 0x1c40) = 0;
  }
  if (*(int *)(param_1 + 0x6df4) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x6df4),0x248c8000);
    *(undefined4 *)(param_1 + 0x6df4) = 0;
  }
  if (*(int *)(param_1 + 0x8e4) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x8e4),0x248c8000);
    *(undefined4 *)(param_1 + 0x8e4) = 0;
  }
  if (*(int *)(param_1 + 0x8dc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x8dc),0x248c8000);
    *(undefined4 *)(param_1 + 0x8dc) = 0;
  }
  if (*(int *)(param_1 + 0x7984) != 0) {
    if (*(int *)(param_1 + 0x79ac) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x79ac),0x248c8000);
      *(undefined4 *)(param_1 + 0x79ac) = 0;
    }
    if (*(int *)(param_1 + 0x79b4) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x79b4),0x248c8000);
      *(undefined4 *)(param_1 + 0x79b4) = 0;
    }
    if (*(int *)(param_1 + 0x79b0) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x79b0),0x248c8000);
      *(undefined4 *)(param_1 + 0x79b0) = 0;
    }
  }
  if (lbl_83248E44 == 0) {
    if (lbl_83248E48 == 0) goto LAB_82e877b0;
  }
  else {
    dVar7 = (double)(longlong)iRam83248e50 + lbl_8215F6D0;
    dRam83248e90 = dRam83248e60 / dVar7;
    dRam83248e98 = dRam83248e68 / dVar7;
    iRam83248e88 = (int)(dRam83248e80 / dVar7);
  }
  if (*(int *)(param_1 + 0x4ef8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4ef8),0x248c8000);
    *(undefined4 *)(param_1 + 0x4ef8) = 0;
  }
LAB_82e877b0:
  if (*(int *)(param_1 + 0x4ee4) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4ee4),0x248c8000);
    *(undefined4 *)(param_1 + 0x4ee4) = 0;
  }
  if (*(int *)(param_1 + 0x4ee8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4ee8),0x248c8000);
    *(undefined4 *)(param_1 + 0x4ee8) = 0;
  }
  if (*(int *)(param_1 + 0x1ebc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1ebc),0x248c8000);
    *(undefined4 *)(param_1 + 0x1ebc) = 0;
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x1e54);
  if (uVar3 != 0) {
    uVar2 = (ulonglong)*(uint *)(*(uint *)(param_1 + 0x1e54) - 4);
    lVar4 = uVar2 * 0x114 + uVar3;
    while (uVar2 = uVar2 - 1, -1 < (longlong)uVar2) {
      lVar4 = lVar4 + -0x114;
      fn_82BA02A8(lVar4);
    }
    fn_8265C990(uVar3 - 4,0x248c8000);
    *(undefined4 *)(param_1 + 0x1e54) = 0;
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x1e58);
  if (uVar3 != 0) {
    uVar2 = (ulonglong)*(uint *)(*(uint *)(param_1 + 0x1e58) - 4);
    lVar4 = uVar2 * 0x114 + uVar3;
    while (uVar2 = uVar2 - 1, -1 < (longlong)uVar2) {
      lVar4 = lVar4 + -0x114;
      fn_82BA02A8(lVar4);
    }
    fn_8265C990(uVar3 - 4,0x248c8000);
    *(undefined4 *)(param_1 + 0x1e58) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e5c);
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(undefined4 *)(param_1 + 0x1e5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x1e54) = 0;
  *(undefined4 *)(param_1 + 0x1e58) = 0;
  *(undefined4 *)(param_1 + 0x1e5c) = 0;
  if (*(int *)(param_1 + 0x1ad0) != 0) {
    fn_82F17D48(*(undefined4 *)(param_1 + 0x1e60));
    if (*(int *)(param_1 + 0x1e60) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x1e60),0x248c8000);
      *(undefined4 *)(param_1 + 0x1e60) = 0;
    }
    if (*(int *)(param_1 + 0x1e98) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x1e98),0x248c8000);
      *(undefined4 *)(param_1 + 0x1e98) = 0;
    }
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x1e6c);
    if (uVar3 != 0) {
      uVar2 = (ulonglong)*(uint *)(*(uint *)(param_1 + 0x1e6c) - 4);
      lVar4 = uVar2 * 0x114 + uVar3;
      while (uVar2 = uVar2 - 1, -1 < (longlong)uVar2) {
        lVar4 = lVar4 + -0x114;
        fn_82BA02A8(lVar4);
      }
      fn_8265C990(uVar3 - 4,0x248c8000);
      *(undefined4 *)(param_1 + 0x1e6c) = 0;
    }
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x1e70);
    if (uVar3 != 0) {
      uVar2 = (ulonglong)*(uint *)(*(uint *)(param_1 + 0x1e70) - 4);
      lVar4 = uVar2 * 0x114 + uVar3;
      while (uVar2 = uVar2 - 1, -1 < (longlong)uVar2) {
        lVar4 = lVar4 + -0x114;
        fn_82BA02A8(lVar4);
      }
      fn_8265C990(uVar3 - 4,0x248c8000);
      *(undefined4 *)(param_1 + 0x1e70) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1a98) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1a98),0x248c8000);
    *(undefined4 *)(param_1 + 0x1a98) = 0;
  }
  if (*(int *)(param_1 + 0x1a9c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x1a9c),0x248c8000);
    *(undefined4 *)(param_1 + 0x1a9c) = 0;
  }
  if (*(int *)(param_1 + 0x5cc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x5cc),0x248c8000);
    *(undefined4 *)(param_1 + 0x5cc) = 0;
  }
  if (*(int *)(param_1 + 0x5e0) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x5e0),0x248c8000);
    *(undefined4 *)(param_1 + 0x5e0) = 0;
  }
  if (*(int *)(param_1 + 0x5e4) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x5e4),0x248c8000);
    *(undefined4 *)(param_1 + 0x5e4) = 0;
  }
  if (*(int *)(param_1 + 0x5dc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x5dc),0x248c8000);
    *(undefined4 *)(param_1 + 0x5dc) = 0;
  }
  if (*(int *)(param_1 + 0x5e8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x5e8),0x248c8000);
    *(undefined4 *)(param_1 + 0x5e8) = 0;
  }
  if (*(int *)(param_1 + 0x4484) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4484),0x248c8000);
    *(undefined4 *)(param_1 + 0x4484) = 0;
  }
  if (*(int *)(param_1 + 0x4480) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x4480),0x248c8000);
    *(undefined4 *)(param_1 + 0x4480) = 0;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x658) != 0) {
    piVar6 = (int *)(param_1 + 0xd84);
    do {
      fn_82F17D48(*piVar6);
      if (*piVar6 != 0) {
        fn_8265C990(*piVar6,0x248c8000);
        *piVar6 = 0;
      }
      iVar1 = piVar6[1];
      if (iVar1 != 0) {
        fn_82F143A8(iVar1);
        fn_8265C990(iVar1,0x248c8000);
        piVar6[1] = 0;
      }
      fn_82F17D48(piVar6[8]);
      if (piVar6[8] != 0) {
        fn_8265C990(piVar6[8],0x248c8000);
        piVar6[8] = 0;
      }
      if (piVar6[-0x6e] != 0) {
        fn_8265C990(piVar6[-0x6e],0x248c8000);
        piVar6[-0x6e] = 0;
      }
      if (piVar6[0x21] != 0) {
        fn_8265C990(piVar6[0x21],0x248c8000);
        piVar6[0x21] = 0;
      }
      if (piVar6[0x22] != 0) {
        fn_8265C990(piVar6[0x22],0x248c8000);
        piVar6[0x22] = 0;
      }
      if (piVar6[-0x65] != 0) {
        fn_8265C990(piVar6[-0x65],0x248c8000);
        piVar6[-0x65] = 0;
      }
      if (piVar6[-100] != 0) {
        fn_8265C990(piVar6[-100],0x248c8000);
        piVar6[-100] = 0;
      }
      if (piVar6[-99] != 0) {
        fn_8265C990(piVar6[-99],0x248c8000);
        piVar6[-99] = 0;
      }
      if (piVar6[-0x62] != 0) {
        fn_8265C990(piVar6[-0x62],0x248c8000);
        piVar6[-0x62] = 0;
      }
      if (piVar6[-0x61] != 0) {
        fn_8265C990(piVar6[-0x61],0x248c8000);
        piVar6[-0x61] = 0;
      }
      if (piVar6[-0x60] != 0) {
        fn_8265C990(piVar6[-0x60],0x248c8000);
        piVar6[-0x60] = 0;
      }
      if (piVar6[-0x5f] != 0) {
        fn_8265C990(piVar6[-0x5f],0x248c8000);
        piVar6[-0x5f] = 0;
      }
      if (piVar6[-0x5e] != 0) {
        fn_8265C990(piVar6[-0x5e],0x248c8000);
        piVar6[-0x5e] = 0;
      }
      if (piVar6[-0x5d] != 0) {
        fn_8265C990(piVar6[-0x5d],0x248c8000);
        piVar6[-0x5d] = 0;
      }
      if (piVar6[-0x5c] != 0) {
        fn_8265C990(piVar6[-0x5c],0x248c8000);
        piVar6[-0x5c] = 0;
      }
      if (piVar6[-0x5b] != 0) {
        fn_8265C990(piVar6[-0x5b],0x248c8000);
        piVar6[-0x5b] = 0;
      }
      if (piVar6[-0x5a] != 0) {
        fn_8265C990(piVar6[-0x5a],0x248c8000);
        piVar6[-0x5a] = 0;
      }
      if (piVar6[0x54] != 0) {
        fn_8265C990(piVar6[0x54],0x248c8000);
        piVar6[0x54] = 0;
      }
      if (piVar6[0x55] != 0) {
        fn_8265C990(piVar6[0x55],0x248c8000);
        piVar6[0x55] = 0;
      }
      if (piVar6[0x56] != 0) {
        fn_8265C990(piVar6[0x56],0x248c8000);
        piVar6[0x56] = 0;
      }
      if (piVar6[0x57] != 0) {
        fn_8265C990(piVar6[0x57],0x248c8000);
        piVar6[0x57] = 0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0xf2;
    } while (uVar5 < *(uint *)(param_1 + 0x658));
  }
  if (*(int *)(param_1 + 0xd48) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xd48),0x248c8000);
    *(undefined4 *)(param_1 + 0xd48) = 0;
  }
  if (*(int *)(param_1 + 0xd4c) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xd4c),0x248c8000);
    *(undefined4 *)(param_1 + 0xd4c) = 0;
  }
  if (*(int *)(param_1 + 0x2e8) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x2e8),0x248c8000);
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(int *)(param_1 + 0xd50) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xd50),0x248c8000);
    *(undefined4 *)(param_1 + 0xd50) = 0;
  }
  if (*(int *)(param_1 + 0xd44) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xd44),0x248c8000);
    *(undefined4 *)(param_1 + 0xd44) = 0;
  }
  if (*(int *)(param_1 + 0xd54) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xd54),0x248c8000);
    *(undefined4 *)(param_1 + 0xd54) = 0;
  }
  if (*(int *)(param_1 + 0xc20) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xc20),0x248c8000);
    *(undefined4 *)(param_1 + 0xc20) = 0;
  }
  fn_82F0DD40(param_1);
  iVar1 = *(int *)(param_1 + 0x1c18);
  if (iVar1 != 0) {
    fn_82F15538(iVar1);
    fn_8265C990(iVar1,0x248c8000);
    *(undefined4 *)(param_1 + 0x1c18) = 0;
  }
  iRam83248e50 = 0;
  dRam83248e60 = (double)lbl_82005710;
  dRam83248e68 = (double)lbl_82005710;
  uRam83248e70 = lbl_82005710;
  uRam83248e78 = lbl_82005710;
  dRam83248e80 = (double)lbl_82005710;
  if (*(int *)(param_1 + 0x52a8) != 0) {
    piVar6 = (int *)(param_1 + 0x52ac);
    lVar4 = 5;
    do {
      if (*piVar6 != 0) {
        fn_8265C990(*piVar6,0x248c8000);
        *piVar6 = 0;
      }
      lVar4 = lVar4 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
    piVar6 = (int *)(param_1 + 0x52e8);
    lVar4 = 5;
    do {
      if (*piVar6 != 0) {
        fn_8265C990(*piVar6,0x248c8000);
        *piVar6 = 0;
      }
      lVar4 = lVar4 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
    if (*(int *)(param_1 + 0x5308) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x5308),0x248c8000);
      *(undefined4 *)(param_1 + 0x5308) = 0;
    }
  }
  if (*(int *)(param_1 + 0x7af8) != 0) {
    fn_82F641F8();
  }
  if (*(int *)(param_1 + 0x7afc) != 0) {
    fn_82F641F8();
  }
  if (*(int *)(param_1 + 0x7b04) != 0) {
    fn_82F641F8();
  }
  if (*(int *)(param_1 + 0x7b00) != 0) {
    fn_82F641F8();
  }
  if (*(int *)(param_1 + 0x7b08) != 0) {
    fn_82F641F8();
  }
  return;
}

