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
extern int fn_82FE4220();
extern int fn_82FE4E90();


void fn_82FE06D0(int param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xc4) != 0) {
      lVar2 = 0;
      do {
        fn_82FE4E90(lVar2 + (ulonglong)*(uint *)(param_1 + 0xd4),param_2);
        fn_82FE4220(lVar2 + (ulonglong)*(uint *)(param_1 + 0xd4) + 0x60,param_2);
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x6c;
      } while (uVar1 < *(uint *)(param_1 + 0xc4));
    }
    (**(code **)(*param_2 + 8))(param_2,*(undefined4 *)(param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
}

