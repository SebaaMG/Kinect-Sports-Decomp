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
extern unsigned int *auStack_1a;
extern int fn_8265C9E0();
extern int fn_8284A700();
extern int fn_828518B8();
extern int fn_82857C40();
extern unsigned int iStack_14;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832112EC;
extern unsigned int uStack_1b;


void fn_82849FB8(void)

{
  undefined1 uStack_1b;
  undefined1 auStack_1a [2];
  undefined1 *puStack_18;
  int iStack_14;
  
  fn_828518B8();
  fn_82857C40(0xffffffff83211280,lbl_8320A898);
  iStack_14 = fn_8265C9E0(0x10);
  if (iStack_14 == 0) {
    iStack_14 = 0;
  }
  else {
    puStack_18 = auStack_1a;
    fn_8284A700(iStack_14,&uStack_1b,puStack_18);
  }
  lbl_832112EC = iStack_14;
  return;
}

