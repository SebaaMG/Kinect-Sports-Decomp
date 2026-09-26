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
extern int fn_82FF2910();
extern int fn_8300F458();
extern int fn_8300F5B0();
extern int fn_8300FAB8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


undefined8 fn_82FE7E50(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = fn_82FF2910();
  if ((lbl_832642E4 == 0) && ((int)uVar1 == 1)) {
    iVar2 = fn_82FA5060(lbl_831BC768,0xb4);
    if (iVar2 == 0) {
      lbl_832642E4 = 0;
    }
    else {
      lbl_832642E4 = fn_8300FAB8();
      if (lbl_832642E4 != 0) {
        uVar1 = fn_8300F5B0();
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        uVar1 = fn_8300F458(lbl_832642E4);
        return uVar1;
      }
    }
    uVar1 = 0x34;
  }
  return uVar1;
}

