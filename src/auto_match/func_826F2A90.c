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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_826F2668();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_826F2A90(longlong param_1,undefined4 *param_2)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  
  uStack_18 = 0;
  uStack_1c = CONCAT13((char)param_2[1],(((U64)(uStack_1c) >> 8) & 0xFFFFFF));
  uStack_14 = CONCAT44(*param_2,uStack_1c);
  fn_826F2668(param_1 + 0x24,&uStack_18);
  return;
}

