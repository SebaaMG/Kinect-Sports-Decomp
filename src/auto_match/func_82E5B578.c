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
extern unsigned int *auStack_40;
extern int fn_82E4FE40();
extern int fn_82E569B0();
extern int fn_82E5AF48();


undefined8 fn_82E5B578(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint auStack_40 [16];
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      lVar1 = fn_82E5AF48(param_1 + 0x8c,uVar3,auStack_40);
      uVar2 = -(uint)(lVar1 != 0) & auStack_40[0];
      if (*(int *)(uVar2 + 0x18) != 0) {
        fn_82E4FE40();
      }
      *(undefined4 *)(uVar2 + 0x18) = 0;
      fn_82E4FE40(uVar2);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xf4));
  }
  fn_82E569B0(param_1 + 0x8c,0);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return 0;
}

