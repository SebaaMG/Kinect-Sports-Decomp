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
extern int fn_8267B890();
extern int fn_8267BF50();
extern int fn_8267C498();
extern int fn_82704C38();


undefined4 fn_82794B88(int param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = fn_8267BF50();
    uVar2 = fn_8267B890(uVar1,0x50,0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82704C38(uVar2,uVar1,0);
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_8267C498();
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  return *(undefined4 *)(param_1 + 8);
}

