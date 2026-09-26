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
extern unsigned int fStack_60;
extern int fn_8225B920();
extern int fn_825231B8();
extern int fn_828EA608();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8225B9B0(int param_1,longlong param_2,ulonglong param_3)

{
  char cVar2;
  int iVar1;
  longlong lVar3;
  float fStack_60;
  int iStack_5c;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  
  fn_82A1DD38(&fStack_60,param_2,8);
  if (((fStack_60 == lbl_821CA460) && (iStack_5c != 0)) &&
     (((((ulonglong)lbl_83265A48 + 7 & 0xffffffff) >> 3) +
       (((ulonglong)lbl_83265A40 + 7 & 0xffffffff) >> 3) +
       (((ulonglong)lbl_83265A38 + 7 & 0xffffffff) >> 3) +
       (((ulonglong)lbl_832760AC + 7 & 0xffffffff) >> 3) +
       ((ulonglong)lbl_832767BC + 7 & 0x3fffffff) * 4 & 0xffffffff) <= (param_3 & 0xffffffff))) {
    cVar2 = fn_828EA608(param_1);
    if (cVar2 == '\0') {
      return 1;
    }
    fn_82A1DD38(&uStack_50,param_2 + 8,0x14);
    if ((((ulonglong)uStack_4c == ((ulonglong)lbl_83265A40 + 7 & 0xffffffff) >> 3) &&
        ((ulonglong)uStack_50 == ((ulonglong)lbl_83265A38 + 7 & 0xffffffff) >> 3)) &&
       (((ulonglong)uStack_48 == ((ulonglong)lbl_83265A48 + 7 & 0xffffffff) >> 3 &&
        ((uStack_44 == lbl_832767BC &&
         ((ulonglong)uStack_40 == ((ulonglong)lbl_832760AC + 7 & 0xffffffff) >> 3)))))) {
      fn_8225B920(param_1,0,param_2 + 0x1c);
      lVar3 = (ulonglong)uStack_50 + param_2 + 0x1c;
      fn_8225B920(param_1,1,lVar3,uStack_4c);
      lVar3 = (ulonglong)uStack_4c + lVar3;
      fn_8225B920(param_1,2,lVar3,uStack_48);
      lVar3 = (ulonglong)uStack_48 + lVar3;
      if (lbl_832767BC == uStack_44) {
        fn_82A1DD38(*(undefined4 *)(param_1 + 0x100),lVar3,lbl_832767BC << 2);
      }
      iVar1 = fn_825231B8(lbl_832760AC);
      fn_82A1DD38(*(undefined4 *)(iVar1 + 8),((ulonglong)uStack_44 & 0x3fffffff) * 4 + lVar3,
                        ((ulonglong)lbl_832760AC + 7 & 0xffffffff) >> 3);
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 8),0,
                        *(undefined4 *)(*(int *)(param_1 + 0xfc) + 4));
    }
  }
  return 0;
}

