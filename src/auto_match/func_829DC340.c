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
extern int fn_8265C940();
extern int fn_829DBE78();
extern unsigned int lbl_83217B64;
extern unsigned int lbl_83217B68;
extern unsigned int lbl_83217B6C;
extern unsigned int lbl_83217B70;
extern unsigned int lbl_83217B74;


undefined8 fn_829DC340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  lbl_83217B74 = param_1;
  lbl_83217B64 = fn_8265C940(((longlong)param_1 * (longlong)param_1 & 0x3fffffffU) << 2,
                                   0x209d0000);
  if (lbl_83217B64 != 0) {
    lbl_83217B68 = fn_8265C940(lbl_83217B74 << 2,0x209d0000);
    if (lbl_83217B68 != 0) {
      iVar3 = 0;
      if (0 < lbl_83217B74) {
        iVar2 = 0;
        do {
          iVar1 = lbl_83217B74 * iVar3;
          iVar3 = iVar3 + 1;
          *(int *)(iVar2 + lbl_83217B68) = iVar1 * 4 + lbl_83217B64;
          iVar2 = iVar2 + 4;
        } while (iVar3 < lbl_83217B74);
      }
      lbl_83217B6C = fn_8265C940(lbl_83217B74,0x209d0000);
      if ((lbl_83217B6C != 0) &&
         (lbl_83217B70 = fn_8265C940(lbl_83217B74 << 2,0x209d0000), lbl_83217B70 != 0)) {
        return 0;
      }
    }
    fn_829DBE78();
  }
  return 0xffffffff8007000e;
}

