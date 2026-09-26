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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822402F8();
extern int fn_82292780();
extern int fn_82536D88();
extern int fn_828647E0();
extern int fn_828648B8();
extern int fn_828648F0();


undefined8 fn_8286E8B0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  cVar2 = fn_828647E0(param_3);
  if (cVar2 == '\0') {
    fn_82292780(param_1,param_3);
  }
  else {
    fn_828648B8(auStack_40);
    fn_8223B688(auStack_80,auStack_40);
    fn_82230300(auStack_40,1,0);
    auStack_90[0] = 0x2e;
    uVar1 = fn_82536D88(auStack_80,auStack_90,0xffffffffffffffff,1);
    if ((int)uVar1 != -1) {
      fn_82230300(auStack_60,0,0);
      fn_82230218(auStack_60,auStack_80,0,uVar1);
      fn_822402F8(auStack_80,auStack_60);
      fn_82230300(auStack_60,1,0);
    }
    fn_828648F0(param_1,auStack_80);
    fn_82230300(auStack_80,1,0);
  }
  return param_1;
}

