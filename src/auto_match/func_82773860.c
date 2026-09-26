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
extern int fn_82773748();
extern int fn_827737E8();


undefined8 fn_82773860(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 != 0) {
    if ((((uVar1 == 9) || (uVar1 == 0xd)) || (uVar1 == 0x20)) || (bVar2 = false, uVar1 == 0x3000)) {
      bVar2 = true;
    }
    if ((((bVar2) || (cVar3 = fn_82773748(param_1,param_3), cVar3 != '\0')) ||
        ((cVar3 = fn_82773748(param_1,param_2), cVar3 != '\0' || (uVar1 == 0x2d)))) &&
       ((cVar3 = fn_827737E8(param_1,param_3,1), cVar3 == '\0' &&
        (cVar3 = fn_827737E8(param_1,param_2,2), cVar3 == '\0')))) {
      return 1;
    }
  }
  return 0;
}

