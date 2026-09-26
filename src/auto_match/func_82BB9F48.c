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
extern unsigned int uStack_10;


uint fn_82BB9F48(uint param_1,uint param_2)

{
  byte bVar1;
  undefined4 uStack_10;
  
  bVar1 = *(byte *)(((((param_2 >> 0x18 & 1) << 1 | param_2 >> 0x10 & 1) << 1 | param_2 >> 8 & 1) <<
                     1 | param_2 & 1) * 0x10 +
                    ((((param_1 >> 0x18 & 1) << 1 | param_1 >> 0x10 & 1) << 1 | param_1 >> 8 & 1) <<
                     1 | param_1 & 1) + -0x7ce91980);
  uStack_10 = CONCAT31(CONCAT21(CONCAT11(bVar1 >> 3,bVar1 >> 2),bVar1 >> 1),bVar1) & 0x1010101;
  return uStack_10;
}

