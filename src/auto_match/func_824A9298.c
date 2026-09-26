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
extern int fn_823AA970();
extern int fn_82F4DA20();
extern int fn_82F4DD20();
extern int fn_82F4EBC0();
extern int fn_82F4ECF8();


undefined8 fn_824A9298(int param_1)

{
  undefined1 uVar4;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar4 = fn_823AA970();
  lVar1 = fn_82F4EBC0(uVar4);
  if (lVar1 != 0) {
    iVar2 = fn_82F4DA20(2);
    iVar3 = fn_82F4ECF8(lVar1);
    fn_82F4DD20(*(undefined4 *)(iVar3 * 0x1c0 + iVar2 + 0x34));
  }
  return 0;
}

