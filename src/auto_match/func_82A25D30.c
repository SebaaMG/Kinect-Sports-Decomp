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
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern int fn_82A1E6A0();
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219BBC;
extern unsigned int lbl_83219BC4;
extern unsigned int lbl_83219C04;
extern unsigned int lbl_83219C08;
extern unsigned int lbl_83219C18;
extern unsigned int lbl_83219C1C;
extern unsigned int lbl_83219C20;
extern unsigned int lbl_83219C24;


undefined8 fn_82A25D30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  lbl_83219C04 = &lbl_83219C04;
  lbl_83219C08 = &lbl_83219C04;
  lbl_83219C18 = &lbl_83219C18;
  lbl_83219C20 = &lbl_83219C20;
  lbl_83219C1C = &lbl_83219C18;
  lbl_83219C24 = &lbl_83219C20;
  lbl_83219BC4 = fn_82A1E6A0(0,0,0,0);
  if (lbl_83219BC4 != 0) {
    uVar2 = fn_82A1E0C0(0,0x4000,0xffffffff82a25960,0,4,0xffffffff83219bc0);
    lbl_83219BBC = (undefined4)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82A1E338(uVar2,param_1);
      fn_82A1E508(lbl_83219BBC,param_2);
      fn_82A1E2C0(lbl_83219BBC);
      return 0;
    }
    (**(code **)(lbl_83219B8C + 4))(lbl_83219BC4);
    lbl_83219BC4 = 0;
  }
  uVar1 = thunk_FUN_82a2b798();
  return uVar1;
}

