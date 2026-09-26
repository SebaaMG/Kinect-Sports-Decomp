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
extern unsigned int *auStack_24;
extern int fn_82E27D58();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82E2C2D0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint auStack_24 [3];
  
  iVar3 = fn_82E27D58(param_1,param_3,&uStack_2c,auStack_24);
  if ((-1 < iVar3) && (iVar3 = fn_82E27D58(param_2,param_3,&uStack_28,&uStack_30), -1 < iVar3)
     ) {
    lVar1 = (ulonglong)uStack_30 * (ulonglong)uStack_2c;
    lVar2 = (ulonglong)uStack_28 * (ulonglong)auStack_24[0];
    if (((lVar1 * 1000 < lVar2 * 999) || (lVar2 < lVar1)) &&
       ((lVar2 * 1000 < lVar1 * 999 || (lVar1 < lVar2)))) {
      return 0;
    }
  }
  return 1;
}

