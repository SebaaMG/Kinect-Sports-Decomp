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
extern int fn_8288A5D8();
extern int fn_82F63EC8();
extern unsigned int lbl_8321453C;


undefined8 fn_828EB388(void)

{
  undefined1 auStack_20 [16];
  
  if ((lbl_8321453C & 1) == 0) {
    lbl_8321453C = lbl_8321453C | 1;
    fn_8288A5D8(0xffffffff8321452c,auStack_20,auStack_20[0]);
    fn_82F63EC8(0xffffffff83141960);
    return 0xffffffff8321452c;
  }
  return 0xffffffff8321452c;
}

