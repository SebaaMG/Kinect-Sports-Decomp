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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_20;
extern int fn_82BFB960();
extern U64 storeDoubleWordConditionalIndexed();


int fn_82BFBA20(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 auStack_20 [2];
  
  if ((((param_3 < 1) || (param_3 == -8)) || (param_3 + 8 < param_3)) ||
     (iVar1 = fn_82BFB960(param_1,auStack_20), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + param_3);
    puVar3[1] = auStack_20[0];
    while( true ) {
      plVar2 = (longlong *)param_2;
      lVar4 = *plVar2;
      auStack_20[0] = (undefined4)((ulonglong)lVar4 >> 0x20);
      *puVar3 = auStack_20[0];
      sync(1);
      if (*plVar2 == lVar4) break;
      lVar4 = storeDoubleWordConditionalIndexed(*plVar2,0,param_2);
      *plVar2 = lVar4;
    }
    lVar4 = storeDoubleWordConditionalIndexed
                      ((lVar4 + 1U & 0x7fffffff) + (ZEXT48(puVar3) << 0x20),0,param_2);
    *plVar2 = lVar4;
  }
  return iVar1;
}

