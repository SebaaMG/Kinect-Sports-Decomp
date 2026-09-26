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
extern unsigned int *auStack_30;
extern int fn_8251C390();
extern int fn_828E2F58();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_83214488;


undefined8 fn_828E8EF8(void)

{
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  fn_8251C390(auStack_20,0xffffffff820274a8,0x60);
  if ((lbl_83214488 & 1) == 0) {
    lbl_83214488 = lbl_83214488 | 1;
    fn_828E2F58(0xffffffff83214478,auStack_30,auStack_30);
    fn_82F63EC8(0xffffffff83141698);
  }
  fn_829E53B0(auStack_20);
  return 0xffffffff83214478;
}

