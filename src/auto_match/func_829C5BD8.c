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
extern int fn_829C5A38();
extern unsigned int lbl_82022FD0;
extern unsigned int lbl_820570A4;
extern unsigned int lbl_83214E18;
extern unsigned int lbl_83214F68;
extern unsigned int lbl_83214F80;


void fn_829C5BD8(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined2 auStack_20 [8];
  
  puVar2 = (undefined4 *)0x83214f60;
  lVar3 = 7;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auStack_20[0] = 0;
  iVar1 = ExGetXConfigSetting(7,9,0xffffffff83214f64,0x1c,auStack_20);
  if (((iVar1 != 0) || ((lbl_83214F80 & 0x40) != 0)) || (lbl_83214F68 < lbl_82022FD0)) {
    lbl_83214F68 = lbl_820570A4;
  }
  lbl_83214E18 = lbl_83214F68;
  fn_829C5A38();
  return;
}

