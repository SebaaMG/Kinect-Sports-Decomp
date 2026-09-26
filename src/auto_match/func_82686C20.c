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
extern U64 storeWordConditionalIndexed();


undefined8 fn_82686C20(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 in_r10;
  ulonglong in_r11;
  char in_RESERVE;
  byte in_cr0;
  byte in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return 0;
    }
    do {
      puVar3 = (uint *)in_r10;
      uVar1 = *puVar3;
      if (uVar1 != (uint)in_r11) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,in_r10);
          *puVar3 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(in_r11 + 1,0,in_r10);
        *puVar3 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == (uint)in_r11) {
      return 1;
    }
    in_r11 = (ulonglong)*puVar3;
    in_cr6 = (*puVar3 == 0) << 1;
  } while( true );
}

