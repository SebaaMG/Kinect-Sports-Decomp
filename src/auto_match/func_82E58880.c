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
extern int fn_82E57B08();
extern int fn_82F37588();


undefined8 fn_82E58880(int param_1)

{
  uint uVar1;
  int *apiStack_30 [12];
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    uVar1 = 0;
    do {
      fn_82E57B08(param_1 + 0x48,uVar1,apiStack_30);
      if (*apiStack_30[0] != 0) {
        fn_82E4FE40();
      }
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < *(uint *)(param_1 + 0xb0));
  }
  fn_82F37588(param_1 + 0x48,0);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return 0;
}

