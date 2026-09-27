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
extern unsigned int fStack00000034;
extern unsigned int fStack_30;
extern int fn_82638FF8();
extern int fn_82639030();
extern int fn_8263A120();
extern int fn_82640A98();
extern int fn_82640F10();
extern int fn_828116B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201F5E0;
extern float lbl_8201F5E4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82852D70(double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  float fStack00000034;
  float fStack_30;
  
  fStack00000034 = (float)param_1;
  iVar1 = fn_828116B8(param_4,*(undefined4 *)(param_3 + 0x14));
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(*(int *)(param_3 + 0x18) + param_5);
    if (uVar2 == 0) {
      fn_82639030(*(undefined4 *)(param_2 + 4),*(int *)(param_2 + 0x11c) == 0);
      fn_8263A120(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 0xc));
      if ((1 << (*(uint *)(param_2 + 0xfc) & 0x3f) & *(uint *)(param_3 + 0x10)) == 0) {
        fn_82640A98(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),0,0,
                          *(undefined4 *)(param_3 + 8));
      }
      else {
        fn_82640F10();
      }
    }
    else {
      fStack_30 = (float)(uVar2 - 1) * lbl_8201F5E4 + lbl_82002AE0;
      if ((*(int *)(param_2 + 0x11c) != 0) && (lbl_8201F5E0 < fStack_30)) {
        fStack_30 = lbl_8201F5E0;
      }
      fn_82638FF8(*(undefined4 *)(param_2 + 4),fStack_30);
      fn_82639030(*(undefined4 *)(param_2 + 4),*(int *)(param_2 + 0x11c) == 0);
      fn_8263A120(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 0xc));
      if ((1 << (*(uint *)(param_2 + 0xfc) & 0x3f) & *(uint *)(param_3 + 0x10)) == 0) {
        fn_82640A98(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),0,0,
                          *(undefined4 *)(param_3 + 8));
      }
      else {
        fn_82640F10();
      }
      fn_82638FF8(*(undefined4 *)(param_2 + 4),fStack00000034);
    }
  }
  return;
}

