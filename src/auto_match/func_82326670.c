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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822C8B40();
extern int fn_82326C58();
extern unsigned int uStack_24;


void fn_82326670(longlong param_1,uint *param_2,undefined4 param_3)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  fn_8223B688(auStack_40,(ulonglong)*param_2 + 4);
  uStack_24 = param_3;
  fn_82326C58(auStack_50,param_1 + 0xcc,auStack_40);
  fn_82230300(auStack_40,1,0);
  fn_822C8B40(param_1,param_2);
  return;
}

