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
extern int fn_8282D2E8();
extern int fn_8282D318();
extern int fn_8282D3A8();
extern int fn_8282D418();


bool fn_82827A10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_30 [24];
  
  fn_8282D2E8(auStack_30);
  cVar1 = fn_8282D418(auStack_30,param_1);
  if (cVar1 == '\0') {
    fn_8282D3A8();
    bVar2 = true;
  }
  else {
    cVar1 = fn_8282D318(auStack_30,param_2);
    fn_8282D3A8(auStack_30);
    fn_8282D3A8(auStack_30);
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}

