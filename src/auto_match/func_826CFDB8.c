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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82696BC8();
extern int fn_826C59F8();
extern int fn_82737928();
extern int fn_82738DE8();


void fn_826CFDB8(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = fn_826C59F8();
  if (lVar1 != 0) {
    uVar2 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x44,0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82738DE8(uVar2,*(undefined4 *)(param_1 + 0x18));
    }
    fn_82737928(uVar2,lVar1);
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar2);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_826824B0(uVar2);
    }
  }
  return;
}

