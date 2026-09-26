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
extern int fn_82E4FE40();
extern int fn_82EE3128();
extern int fn_82EEF998();
extern int fn_82EEFC00();
extern int fn_82EEFD30();
extern unsigned int iStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined8 fn_82EF0990(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *apuStack_60 [4];
  undefined8 uStack_50;
  undefined4 uStack_48;
  int iStack_44;
  
  uVar1 = *(uint *)(param_1 + 0x1ac);
  uVar2 = *(uint *)(param_1 + 0x26c);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      fn_82EEFC00(param_1 + 0x48,uVar3,apuStack_60);
      uStack_50 = *apuStack_60[0];
      uStack_48 = *(undefined4 *)(apuStack_60[0] + 1);
      iStack_44 = *(int *)((int)apuStack_60[0] + 0xc);
      if (iStack_44 != 0) {
        fn_82E4FE40();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar1);
  }
  fn_82EEF998(param_1 + 0x48,0);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  if (uVar2 != 0) {
    do {
      fn_82EEFD30(param_1 + 0x1b0,uVar3,apuStack_60);
      uStack_50 = *apuStack_60[0];
      if ((((U64)(uStack_50) >> 32) & 0xFFFFFFFF) != 0) {
        fn_82E4FE40();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar2);
  }
  fn_82EE3128(param_1 + 0x1b0,0);
  *(undefined4 *)(param_1 + 0x26c) = 0;
  return 0;
}

