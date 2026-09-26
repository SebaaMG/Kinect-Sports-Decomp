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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82766450();
extern int fn_827664B0();
extern int fn_82766860();
extern int fn_827668B8();
extern unsigned int uStack_3c;


longlong fn_827B0790(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  undefined1 auStack_38 [56];
  
  param_1 = param_1 + 0xc;
  lVar1 = fn_82766450(param_1,param_2,auStack_40);
  lVar2 = fn_82766450(param_1,lVar1 + param_2,auStack_40);
  lVar2 = lVar2 + lVar1 + param_2;
  lVar1 = fn_82766450(param_1,lVar2,auStack_40);
  lVar1 = lVar1 + lVar2;
  lVar2 = fn_82766450(param_1,lVar1,auStack_40);
  lVar2 = lVar2 + lVar1;
  lVar1 = fn_82766860(param_1,lVar2,&uStack_3c);
  lVar1 = lVar1 + lVar2;
  uVar4 = uStack_3c;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    lVar2 = fn_82766450(param_1,lVar1,auStack_40);
    lVar3 = fn_82766450(param_1,lVar2 + lVar1,auStack_40);
    lVar3 = lVar3 + lVar2 + lVar1;
    lVar1 = fn_827664B0(param_1,lVar3,&uStack_3c);
    lVar1 = lVar1 + lVar3;
    if ((uStack_3c & 1) == 0) {
      for (uVar5 = uStack_3c >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        lVar2 = fn_827668B8(param_1,lVar1,auStack_38);
        lVar1 = lVar2 + lVar1;
      }
      uStack_3c = 0xffffffff;
    }
  }
  return lVar1;
}

