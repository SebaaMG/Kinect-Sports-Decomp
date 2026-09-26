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
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_82A1E6A0();
extern U64 storeWordConditionalIndexed();


void fn_825E7E30(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char in_RESERVE;
  byte bVar4;
  undefined4 *apuStack_20 [2];
  
  lVar2 = fn_8265C9E0(0x20);
  bVar4 = (lVar2 == 0) << 1;
  if (lVar2 == 0) {
    apuStack_20[0] = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)lVar2;
    puVar1[2] = (int)param_1;
    uVar3 = fn_82A1E6A0(0,1,0,0);
    *puVar1 = uVar3;
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,lVar2 + 4);
        *(undefined4 *)(lVar2 + 4) = uVar3;
        bVar4 = 2;
      }
    } while (!(bool)(bVar4 >> 1 & 1));
    sync(0);
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    apuStack_20[0] = puVar1;
  }
  fn_82536690(param_1 + 4,apuStack_20);
  return;
}

