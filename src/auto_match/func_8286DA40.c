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
extern unsigned int *auStack_34;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8223B688();


undefined8 fn_8286DA40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [28];
  
  fn_82230110(auStack_70,0xffffffff820215ac);
  fn_82230110(auStack_90,0xffffffff820215ad);
  fn_8223B688(auStack_50,auStack_90);
  fn_8223B688(auStack_34,auStack_70);
  fn_82230218(param_3,auStack_50,0,0xffffffffffffffff);
  fn_82230218(param_3 + 0x1c,auStack_34,0,0xffffffffffffffff);
  fn_82230300(auStack_34,1,0);
  fn_82230300(auStack_50,1,0);
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_70,1,0);
  return 0x200b0000;
}

