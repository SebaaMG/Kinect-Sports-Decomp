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
extern int fn_82FAF518();
extern int fn_83035D68();


undefined8 fn_83032018(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar2 = fn_82FAF518();
  if ((int)uVar2 == 1) {
    puVar1 = *(undefined4 **)(param_1 + 0xac);
    for (puVar3 = *(undefined4 **)(param_1 + 0xa8); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      fn_83035D68(*puVar3,param_2);
    }
  }
  return uVar2;
}

