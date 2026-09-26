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
extern int fn_82631B08();
extern int fn_8265C940();


longlong fn_82631BF8(short *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  lVar3 = 0;
  sVar1 = *param_1;
  psVar2 = param_1;
  while (sVar1 != 0xff) {
    psVar2 = psVar2 + 6;
    lVar3 = lVar3 + 1;
    sVar1 = *psVar2;
  }
  lVar3 = fn_8265C940(lVar3 * 0xc + 0x38,0x24800000);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    fn_82631B08(param_1,lVar3);
  }
  return lVar3;
}

