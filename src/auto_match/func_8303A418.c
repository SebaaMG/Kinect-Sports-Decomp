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
extern int fn_82FA5060();
extern int fn_82FEF6B8();
extern int fn_83013958();
extern int fn_83047ED8();
extern int fn_83048518();
extern int fn_83049000();
extern int fn_83049C00();
extern int fn_8304B290();
extern int fn_8304BBA8();
extern int fn_8304C998();
extern unsigned int lbl_831BC770;


ulonglong fn_8303A418(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x6c) + 0x14) >> 0x19 & 0x1f;
  if (uVar2 == 2) {
    uVar3 = fn_82FA5060(lbl_831BC770,0x48);
    if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
    uVar3 = fn_8304C998(uVar3,param_1);
  }
  else {
    if (uVar2 == 0) goto LAB_8303a5bc;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x6c) + 0x1c) >> 0x10;
    if (uVar1 < 4) {
      if (uVar1 == 0) goto LAB_8303a5bc;
      if (uVar1 == 1) {
        if (uVar2 == 1) {
          uVar3 = fn_82FA5060(lbl_831BC770,100);
          if ((uVar3 & 0xffffffff) == 0) {
LAB_8303a470:
            uVar3 = 0;
            goto LAB_8303a5bc;
          }
          uVar3 = fn_83048518(uVar3,param_1);
        }
        else {
          if (uVar2 != 3) goto LAB_8303a5bc;
          uVar3 = fn_82FA5060(lbl_831BC770,0x40);
          if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
          uVar3 = fn_83047ED8(uVar3,param_1);
        }
      }
      else if (uVar1 == 2) {
        if (uVar2 == 1) {
          uVar3 = fn_82FA5060(lbl_831BC770,0x140);
          if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
          uVar3 = fn_8304BBA8(uVar3,param_1);
        }
        else {
          if (uVar2 != 3) goto LAB_8303a5bc;
          uVar3 = fn_82FA5060(lbl_831BC770,0x44);
          if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
          uVar3 = fn_8304B290(uVar3,param_1);
        }
      }
      else if (uVar2 == 1) {
        uVar3 = fn_82FA5060(lbl_831BC770,0x80);
        if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
        uVar3 = fn_83049C00(uVar3,param_1);
      }
      else {
        if (uVar2 != 3) goto LAB_8303a5bc;
        uVar3 = fn_82FA5060(lbl_831BC770,0x44);
        if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
        uVar3 = fn_83049000(uVar3,param_1);
      }
    }
    else {
      uVar3 = fn_83013958(param_1);
    }
  }
  if ((uVar3 & 0xffffffff) != 0) {
    return uVar3;
  }
LAB_8303a5bc:
  fn_82FEF6B8(param_1,1);
  return uVar3;
}

