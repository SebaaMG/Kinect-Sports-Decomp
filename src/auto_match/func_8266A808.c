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
extern int fn_82230180();
extern int fn_8223F658();
extern int fn_8265F4B8();
extern int fn_826660E8();
extern int fn_8266A700();
extern int fn_8266ACB8();
extern int fn_82A1D7A8();
extern int fn_82A1E230();
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_c;


undefined4 fn_8266A808(void)

{
  undefined1 auStack_30 [28];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fn_826660E8(0xffffffff831e7af8,4);
  fn_8266ACB8(0xffffffff831e7af4,1);
  uStack_10 = fn_82A1E230();
  uStack_14 = fn_82A1D7A8();
  fn_8265F4B8(auStack_30,uStack_10,uStack_14);
  fn_8223F658(auStack_30);
  fn_8266A700();
  uStack_c = 1;
  fn_82230180(auStack_30);
  return uStack_c;
}

