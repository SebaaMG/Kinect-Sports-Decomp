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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern int fn_8227C270();
extern int fn_82F68CC0();


void fn_8227D108(ulonglong param_1,ulonglong param_2,undefined4 param_3)

{
  char cVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 auStack_130 [4];
  undefined1 auStack_120 [288];
  
  if (((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) &&
     (uVar6 = param_1 + 0xdc, uVar3 = param_1, auStack_130[0] = param_3,
     (uVar6 & 0xffffffff) != (param_2 & 0xffffffff))) {
    do {
      fn_82F68CC0(auStack_120,uVar6,0xdc);
      cVar2 = fn_8227C270(auStack_130,auStack_120,param_1);
      uVar1 = uVar6;
      uVar5 = uVar3;
      if (cVar2 == '\0') {
        while (cVar2 = fn_8227C270(auStack_130,auStack_120,uVar5), cVar2 != '\0') {
          fn_82F68CC0(uVar1,uVar5,0xdc);
          uVar1 = uVar5;
          uVar5 = uVar5 - 0xdc;
        }
      }
      else {
        uVar1 = param_1;
        uVar5 = uVar6;
        if ((param_1 & 0xffffffff) != (uVar6 & 0xffffffff)) {
          do {
            uVar4 = uVar5 - 0xdc;
            fn_82F68CC0(uVar5,uVar4,0xdc);
            uVar5 = uVar4;
          } while ((uVar4 & 0xffffffff) != (param_1 & 0xffffffff));
        }
      }
      fn_82F68CC0(uVar1,auStack_120,0xdc);
      uVar6 = uVar6 + 0xdc;
      uVar3 = uVar3 + 0xdc;
    } while ((uVar6 & 0xffffffff) != (param_2 & 0xffffffff));
  }
  return;
}

