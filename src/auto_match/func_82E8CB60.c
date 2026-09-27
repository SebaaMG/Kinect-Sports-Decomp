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
extern double dRam83248e70;
extern double dRam83248e78;
extern double dRam83248e80;
extern int fn_82ED4B70();
extern int fn_82ED9AF0();
extern int fn_82F02E20();
extern int iRam83248e50;
extern unsigned int lbl_82017EF8;
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E8CB60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((lbl_83248E44 == 0) && (lbl_83248E48 == 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x64c) == 0) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) {
    fn_82ED4B70(param_1,*(undefined4 *)(param_1 + 0x4a94),*(undefined4 *)(param_1 + 0x4a98),
                      *(undefined4 *)(param_1 + 0x4a9c),(ulonglong)*(uint *)(param_1 + 0x31c),
                      (ulonglong)*(uint *)(param_1 + 800),
                      (ulonglong)*(uint *)(param_1 + 0x31c) + 0x40,
                      (ulonglong)*(uint *)(param_1 + 800) + 0x40);
    fn_82ED9AF0(param_1,*(undefined4 *)(param_1 + 0x4aa0),*(undefined4 *)(param_1 + 0x4ef8),
                      *(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x6b8);
    uVar2 = *(undefined4 *)(param_1 + 0x6a4);
    *(int *)(param_1 + 0x564) = iVar5;
    *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x6b0);
    *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x6b4);
    *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x6a8);
    *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x6ac);
    *(int *)(param_1 + 0x568) = iVar5 >> 1;
    *(int *)(param_1 + 0x6a4) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x6bc);
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x4ef8) + lVar4;
    fn_82F02E20(param_1,*(undefined4 *)(param_1 + 0x4a94),*(undefined4 *)(param_1 + 0x4a98),
                    *(undefined4 *)(param_1 + 0x4a9c),(ulonglong)*(uint *)(param_1 + 0x4ef8),lVar3,
                    ((int)lVar4 >> 2) + lVar3);
    fn_82ED9AF0(param_1,*(undefined4 *)(param_1 + 0x4aa0),*(undefined4 *)(param_1 + 0x4ef8),
                      *(undefined4 *)(param_1 + 0x6b8),*(undefined4 *)(param_1 + 0x6bc));
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined4 *)(param_1 + 0x6a4) = uVar2;
    iVar5 = iVar1 * 0x58 + param_1;
    *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(iVar5 + 0x6b0);
    *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(iVar5 + 0x6b4);
    *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(iVar5 + 0x6a8);
    *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar5 + 0x6ac);
    *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)((iVar1 + 0x14) * 0x58 + param_1);
    *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(iVar5 + 0x6e4);
  }
  if (lbl_83248E48 != 0) {
    *(int *)(param_1 + 0x1f08) =
         (int)((((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3)
                + (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) << 3);
  }
  if (*(int *)(param_1 + 0x525c) != 0) {
    dRam83248e80 = (double)(((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) &
                             0xffffffff) >> 3) +
                            (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) *
                   lbl_82017EF8 + dRam83248e80;
    dRam83248e60 = *(double *)(param_1 + 0x4f00) + dRam83248e60;
    iRam83248e50 = iRam83248e50 + 1;
    dRam83248e68 = *(double *)(param_1 + 0x4f18) + dRam83248e68;
    dRam83248e70 = *(double *)(param_1 + 0x4f08) + dRam83248e70;
    dRam83248e78 = *(double *)(param_1 + 0x4f10) + dRam83248e78;
  }
  return;
}

