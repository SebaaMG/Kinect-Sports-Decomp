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
extern int fn_82BE71C8();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEA858();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1D8;


undefined8 fn_82BE1AF0(void)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e89b8);
  if (iVar2 == 0) {
    uVar1 = 0x69;
  }
  else {
    if (lbl_8322B130 == 0) {
      uVar1 = 200;
    }
    else if (*(int *)(lbl_8322B130 + 0x10) == 3) {
      if (((*(int *)(lbl_8322B130 + 0x180) == 0) ||
          (iVar2 = fn_82BEA858(*(int *)(lbl_8322B130 + 0x180)), iVar2 != 0)) &&
         (iVar2 = fn_82BE71C8(lbl_8322B1D8), iVar2 == 0)) {
        uVar1 = 0;
        *(undefined4 *)(lbl_8322B130 + 0x10) = 2;
      }
      else {
        uVar1 = 100;
      }
    }
    else {
      uVar1 = 0xce;
    }
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e89b8);
  }
  return uVar1;
}

