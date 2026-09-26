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
extern int fn_82C10B28();


undefined8 fn_82C23AC8(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    if (*(short *)(param_2 + 0x48) != 0) {
      uVar1 = 0;
      do {
        fn_82C10B28(*(undefined4 *)(param_4 + 0xe0),0xb,
                          uVar1 * 8 + (ulonglong)*(uint *)(param_2 + 0x4c) + 4);
        uVar1 = uVar1 + 1 & 0xffff;
      } while (uVar1 < *(ushort *)(param_2 + 0x48));
    }
    fn_82C10B28(*(undefined4 *)(param_4 + 0xe0),0xb,(uint *)(param_2 + 0x4c));
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    if (*(short *)(param_2 + 0x4a) != 0) {
      uVar1 = 0;
      do {
        fn_82C10B28(*(undefined4 *)(param_4 + 0xe0),0xb,
                          uVar1 * 0x1c + (ulonglong)*(uint *)(param_2 + 0x50) + 0x18);
        uVar1 = uVar1 + 1 & 0xffff;
      } while (uVar1 < *(ushort *)(param_2 + 0x4a));
    }
    fn_82C10B28(*(undefined4 *)(param_4 + 0xe0),0xb,(uint *)(param_2 + 0x50));
  }
  return 0;
}

