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
extern int fn_82B81938();


undefined8 fn_82B16C28(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  if (((uVar2 ^ uVar1) & 0x40000000) == 0) {
    uVar6 = (ulonglong)(uVar1 >> 0x19) & 7;
    uVar5 = (ulonglong)(uVar2 >> 0x19) & 7;
    if (((uVar6 == uVar5) && (((uVar2 ^ uVar1) & 0x1ffe000) == 0)) &&
       (((uVar1 >> 0x19 & 7) == 0 ||
        (((((1 << (int)(uVar5 << 1)) - 1U & uVar2 >> 5 ^ (1 << (int)(uVar6 << 1)) - 1U & uVar1 >> 5)
          & 0xff) == 0 && (((uVar2 ^ uVar1) & 0x1f) == 0)))))) {
      uVar1 = param_2[3];
      uVar2 = param_3[3];
      uVar3 = *(uint *)(uVar1 + 8) >> 0x1d & 1;
      if (uVar3 == (*(uint *)(uVar2 + 8) >> 0x1d & 1)) {
        if (uVar3 == 0) {
          if ((uVar1 == uVar2) || (cVar4 = fn_82B81938(param_2,param_3), cVar4 != '\0')) {
            return 1;
          }
        }
        else if (*(uint *)(uVar1 + 0x20) == uVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

