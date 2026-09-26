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
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F3080();
extern unsigned int stack0x00000000;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_826F30F0(int param_1,undefined8 param_2,ulonglong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined4 uStack_40;
  undefined4 uStack_38;
  
  RtlEnterCriticalSection(param_1 + 0xc);
  bVar1 = (ulonglong)*(uint *)(param_1 + 4) <= (param_3 & 0xffffffff);
  if (bVar1) {
    uStack_40 = 0;
    lVar2 = ZEXT48(&stack0x00000000) - 0x40;
  }
  else {
    lVar2 = fn_826F3080(ZEXT48(&stack0x00000000) - 0x38,
                          (ulonglong)*(uint *)(param_1 + 8) + (param_3 & 0x1fffffff) * 8);
  }
  fn_82687F98(param_2,lVar2);
  if ((bVar1) && (uStack_40 != 0)) {
    fn_82687270(uStack_40);
  }
  if ((!bVar1) && (uStack_38 != 0)) {
    fn_82687270();
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

