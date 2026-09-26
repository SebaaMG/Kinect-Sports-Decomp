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
extern unsigned int *auStack_58;
extern int fn_82E4FE40();
extern int fn_82EF1C08();
extern int fn_82EF1D58();
extern unsigned int iStack_38;


undefined8 fn_82EF2910(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int aiStack_60 [2];
  undefined8 auStack_58 [4];
  int iStack_38;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3b8) != 0) {
    do {
      fn_82EF1D58(param_1 + 0x50,uVar3,aiStack_60);
      puVar1 = auStack_58;
      lVar4 = 5;
      puVar2 = (undefined8 *)(aiStack_60[0] + -8);
      do {
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
        *puVar1 = *puVar2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (iStack_38 != 0) {
        fn_82E4FE40();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x3b8));
  }
  fn_82EF1C08(param_1 + 0x50,0);
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  return 0;
}

