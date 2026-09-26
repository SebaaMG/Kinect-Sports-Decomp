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
extern int fn_822315A0();
extern int fn_82359DB8();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82397E08(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char in_RESERVE;
  byte in_cr0;
  int iStack_20;
  uint uStack_1c;
  
  if (*(int *)(param_1 + 0x54) == 3) {
    fn_82359DB8(&iStack_20,param_1 + 0x40,3);
    uVar3 = (ulonglong)uStack_1c;
    if (uVar3 != 0) {
      do {
        puVar2 = (uint *)(uVar3 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,uVar3 + 4);
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      fn_822315A0(uVar3);
    }
    if ((*(int *)((*(int *)(param_2 + 0x2c) + 7) * 4 + iStack_20) != *(int *)(param_2 + 0x28)) ||
       (uVar4 = 1, *(int *)(param_2 + 0x278) != 0)) {
      uVar4 = 0;
    }
    if (uVar3 != 0) {
      fn_822315A0(uVar3);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

