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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int uStack0000001c;
extern unsigned int uStack0000001d;
extern unsigned int uStack0000001e;
extern unsigned int uStack0000001f;
extern unsigned int uStack_10;


undefined4 fn_82BB9EC0(undefined4 param_1,undefined4 param_2)

{
  char cStack00000014;
  char cStack00000015;
  char cStack00000016;
  char cStack00000017;
  undefined1 uStack0000001c;
  undefined1 uStack0000001d;
  undefined1 uStack0000001e;
  undefined1 uStack0000001f;
  undefined4 uStack_10;
  
  cStack00000014 = (char)((uint)param_1 >> 0x18);
  if (cStack00000014 == '\0') {
    uStack0000001c = (undefined1)((uint)param_2 >> 0x18);
  }
  else {
    uStack0000001c = 0;
  }
  cStack00000015 = (char)((uint)param_1 >> 0x10);
  if (cStack00000015 == '\0') {
    uStack0000001d = (undefined1)((uint)param_2 >> 0x10);
  }
  else {
    uStack0000001d = 0;
  }
  cStack00000016 = (char)((uint)param_1 >> 8);
  if (cStack00000016 == '\0') {
    uStack0000001e = (undefined1)((uint)param_2 >> 8);
  }
  else {
    uStack0000001e = 0;
  }
  cStack00000017 = (char)param_1;
  if (cStack00000017 == '\0') {
    uStack0000001f = (undefined1)param_2;
  }
  else {
    uStack0000001f = 0;
  }
  uStack_10 = CONCAT31(CONCAT21(CONCAT11(uStack0000001c,uStack0000001d),uStack0000001e),
                       uStack0000001f);
  return uStack_10;
}

