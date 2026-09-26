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
extern int fn_82522588();
extern unsigned int iStack_c;
extern unsigned int uStack_10;
extern U64 storeWordConditionalIndexed();


undefined8 fn_826108C8(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_10;
  int iStack_c;
  
  fn_82522588(&uStack_10,param_1 + 4);
  do {
    puVar2 = (uint *)((ulonglong)uStack_10 + 0x1dc);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,(ulonglong)uStack_10 + 0x1dc);
      *puVar2 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (iStack_c != 0) {
    fn_822315A0();
  }
  return 0;
}

