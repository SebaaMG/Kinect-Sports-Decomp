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
extern int fn_8277BEE0();
extern int fn_8277BF50();
extern int fn_8277BFE8();
extern int fn_8277C040();
extern int fn_8277EA70();


void fn_8277ECE0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*param_2;
  while( true ) {
    uVar1 = param_2[1];
    uVar6 = (ulonglong)uVar1;
    if ((int)uVar1 <= (int)uVar7) break;
    cVar3 = fn_8277BEE0(param_1,uVar7,*param_2);
    if (cVar3 != '\0') {
      lVar5 = 1;
      uVar4 = uVar7;
      while( true ) {
        uVar4 = uVar4 + 1;
        cVar3 = fn_8277BFE8(param_1,uVar4,uVar6);
        if (cVar3 != '\0') break;
        lVar5 = lVar5 + 1;
      }
      fn_8277EA70(param_1,uVar7,lVar5,1,param_2[2],param_2[3]);
      uVar7 = (lVar5 + uVar7) - 1;
    }
    uVar7 = uVar7 + 1;
  }
  uVar2 = *param_2;
  if ((int)uVar2 < (int)uVar1) {
    do {
      cVar3 = fn_8277BF50(param_1,uVar6,param_2[1]);
      if (cVar3 != '\0') {
        lVar5 = 1;
        uVar7 = uVar6;
        while( true ) {
          uVar7 = uVar7 - 1;
          cVar3 = fn_8277C040(param_1,uVar7,uVar2);
          if (cVar3 != '\0') break;
          lVar5 = lVar5 + 1;
        }
        fn_8277EA70(param_1,uVar6,lVar5,0xffffffffffffffff,param_2[2],param_2[3]);
        uVar6 = (uVar6 - lVar5) + 1;
      }
      uVar2 = *param_2;
      uVar6 = uVar6 - 1;
    } while ((int)uVar2 < (int)uVar6);
  }
  return;
}

