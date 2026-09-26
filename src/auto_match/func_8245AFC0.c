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
extern int fn_8245B1F0();
extern int fn_8245B4B0();


undefined8 fn_8245AFC0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffff80004005;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x20);
    uVar2 = (*(undefined4 **)(param_1 + 0x20))[2];
    iVar4 = fn_8245B1F0(param_1);
    if (iVar4 == 0) {
      uVar3 = 0xffffffff80004005;
    }
    else {
      uVar3 = fn_8245B4B0(*(undefined4 *)(param_1 + 4),uVar1,uVar2,
                              *(undefined4 *)(param_1 + 0x1c),param_2,param_3);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar3;
}

