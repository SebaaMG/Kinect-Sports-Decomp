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
#define CONCAT17(h,l) ((U64)((((U8)(h)) << 56) | ((U64)(l))))
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_82296E38();
extern int fn_82F85C08();
extern unsigned int uStack00000020;
extern unsigned int uStack_3e;


undefined8 *
fn_822964C0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4,
             ulonglong param_5)

{
  int iVar1;
  short sVar2;
  undefined8 uStack00000020;
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  undefined4 auStack_3c [15];
  
  uStack00000020 = param_3;
  if ((param_5 & 0xffffffff) != 0) {
    uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_3)) & ((U64)0xFFFFFFFF)) << 32));
    iVar1 = (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF);
    do {
      auStack_40[0] = *param_4;
      uStack_3e = 0;
      auStack_3c[0] = 0;
      fn_82F85C08(&uStack_3e,auStack_40,1,auStack_3c,param_2 + 8);
      if ((iVar1 == 0) || (sVar2 = fn_82296E38(iVar1,uStack_3e), sVar2 == -1)) {
        uStack00000020 = CONCAT17(1,(((U64)(uStack00000020) >> 8) & 0xFFFFFFFFFFFFFF));
      }
      param_5 = param_5 - 1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  *param_1 = uStack00000020;
  return param_1;
}

