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
extern int fn_8225B538();
extern int fn_82522ED8();
extern int fn_825231B8();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;
extern unsigned int uRam00000008;


undefined8 fn_8225B610(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_2[1] = 1;
  *param_2 = lbl_821CA460;
  iVar1 = lbl_832767BC;
  uVar4 = (ulonglong)lbl_832760AC;
  param_2[2] = lbl_83265A38 + 7U >> 3;
  param_2[3] = lbl_83265A40 + 7U >> 3;
  uVar5 = (ulonglong)lbl_83265A48;
  param_2[5] = iVar1;
  param_2[6] = (int)((uVar4 + 7 & 0xffffffff) >> 3);
  param_2[4] = (int)((uVar5 + 7 & 0xffffffff) >> 3);
  iVar1 = fn_8225B538(param_1,0,param_2 + 7);
  iVar1 = iVar1 + (int)(param_2 + 7);
  iVar2 = fn_8225B538(param_1,1,iVar1);
  iVar2 = iVar2 + iVar1;
  iVar3 = fn_8225B538(param_1,2,iVar2);
  iVar3 = iVar3 + iVar2;
  fn_82A1DD38(iVar3,*(undefined4 *)(param_1 + 0x100),lbl_832767BC << 2);
  iVar1 = param_2[5];
  uVar4 = ((ulonglong)lbl_832760AC + 7 & 0xffffffff) >> 3;
  iVar2 = fn_825231B8(uVar4 << 3);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(*(undefined4 *)(iVar2 + 8),0,*(undefined4 *)(iVar2 + 4));
  }
  fn_82A1DD38(iVar1 * 4 + iVar3,uRam00000008,uVar4);
  fn_82522ED8(0);
  return 1;
}

