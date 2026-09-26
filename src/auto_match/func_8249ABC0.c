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
extern unsigned int *auStack_20;
extern int fn_8249A540();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_83276738;


ulonglong fn_8249ABC0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_20 [8];
  
  uVar1 = (ulonglong)lbl_83276738;
  if (uVar1 == 0) {
    fn_82520158(0xffffffff821bf000,auStack_20,0);
    uVar2 = fn_8251F720(auStack_20,0);
    uVar1 = fn_8265C9E0(0x120);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8249A540(uVar1,uVar2);
    }
    lbl_83276738 = (uint)uVar1;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8251FA58(uVar2);
      uVar1 = (ulonglong)lbl_83276738;
    }
  }
  return uVar1;
}

