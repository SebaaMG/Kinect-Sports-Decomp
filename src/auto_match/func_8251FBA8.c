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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5088();
extern int fn_827D50A0();
extern int fn_827D5668();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int lbl_83265A24;


longlong fn_8251FBA8(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_30 [8];
  int iStack_28;
  int iStack_24;
  
  lVar3 = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  fn_827D5668(lbl_83265A24,param_1,auStack_30,&iStack_28);
  iVar1 = iStack_28;
  if (iStack_28 != 0) {
    lVar3 = fn_827D50A0(iStack_28);
    lVar2 = fn_827D5088(iVar1);
    lVar3 = lVar3 + lVar2;
  }
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return lVar3;
}

