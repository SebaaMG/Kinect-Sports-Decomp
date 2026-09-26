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
extern int fn_82791560();
extern int fn_827917E8();
extern int fn_827918F8();
extern int fn_82791A60();


undefined8 fn_82792958(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 8) {
      fn_827918F8(param_1);
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 4) == 7) {
      puVar2 = (uint *)(param_1 + 8);
      do {
        if (*(uint *)(param_1 + 0x10) <= *puVar2) break;
        fn_82791A60(param_1,param_2,param_3);
        fn_827917E8(param_1);
        if (*puVar2 < *(uint *)(param_1 + 0x10)) {
          if (*(int *)(param_1 + 0x14) == 0x3d) {
            fn_82791560(puVar2);
            fn_827917E8(param_1);
            uVar1 = 1;
            *(undefined4 *)(param_1 + 4) = 8;
          }
          else {
            fn_827918F8(param_1);
          }
        }
      } while (*(int *)(param_1 + 4) == 7);
    }
    if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  return uVar1;
}

