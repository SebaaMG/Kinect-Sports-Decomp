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
extern int fn_824E6908();
extern int fn_82576478();
extern int fn_8265C9E0();


undefined4 fn_824E6890(int param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x93c);
    uVar2 = fn_8265C9E0(0x308);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_824E6908(uVar2,uVar1);
    }
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    fn_82576478(uVar1);
  }
  return *(undefined4 *)(param_2 + 0x1c);
}

