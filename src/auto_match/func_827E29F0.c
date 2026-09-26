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
extern int fn_82517A50();
extern int fn_827D5798();
extern int fn_827E2B30();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827e2a8c) */

undefined8 fn_827E29F0(undefined8 param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  iVar2 = fn_827D5798(param_2);
  if (iVar2 < 2) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x44);
    if (uVar3 != *(uint *)(param_2 + 0x48)) {
      do {
        fn_82517A50(auStack_38,uVar3);
        (**(code **)(iRam00000000 + 8))();
        uVar3 = uVar3 + 8;
      } while ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 0x48));
    }
    fn_827E2B30(auStack_40,(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x44),
                      *(undefined4 *)(param_2 + 0x48));
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3e5;
  }
  return uVar1;
}

