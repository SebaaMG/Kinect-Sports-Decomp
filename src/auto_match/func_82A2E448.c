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
extern unsigned int lbl_83219CE0;
extern unsigned int lbl_83219CE8;
extern unsigned int lbl_83219CEC;
extern unsigned int lbl_83219CF0;
extern unsigned int lbl_83219D00;
extern unsigned int uRam83219cf4;
extern unsigned int uRam83219cf8;
extern unsigned int uRam83219cfc;


/* WARNING: Removing unreachable block (ram,0x82a2d200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82A2E448(void)

{
  longlong lVar1;
  
  lbl_83219CE8 = &lbl_83219CE8;
  lbl_83219CEC = &lbl_83219CE8;
  lbl_83219CF0 = 1;
  uRam83219cf4 = 0;
  uRam83219cf8 = 0x83219cf8;
  uRam83219cfc = 0x83219cf8;
  lbl_83219D00 = 0;
  lVar1 = ExCreateThread(0xffffffff83219ce0,0x8000,0,0,0xffffffff82a2cfa0,0xffffffff83219ce0,
                         0x40006aa);
  if (-1 < lVar1) {
    KeSetBasePriorityThread(lbl_83219CE0,0x10);
  }
  return lVar1;
}

