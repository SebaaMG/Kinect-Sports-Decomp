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
extern int fn_828A0518();
extern int fn_829E53B0();
extern int fn_82F63EC8();
extern unsigned int lbl_82024338;
extern unsigned int lbl_83213EE8;
extern unsigned int uRam83213ef8;


undefined8 fn_828A0638(void)

{
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  fn_8251C390(auStack_20,0xffffffff82023cd0,0x2f0);
  if ((uRam83213ef8 & 1) == 0) {
    uRam83213ef8 = uRam83213ef8 | 1;
    auStack_30[0] = 0;
    fn_828A0518(0xffffffff83213ee8,auStack_30,auStack_30);
    lbl_83213EE8 = &lbl_82024338;
    fn_82F63EC8(0xffffffff83140948);
  }
  fn_829E53B0(auStack_20);
  return 0xffffffff83213ee8;
}

