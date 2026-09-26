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
extern int fn_8267C498();
extern int fn_8269FE48();


undefined8 fn_826C7670(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x66) & 0x10) == 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (((*param_2 == 1) &&
        (*(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xdf,
        (*(uint *)(param_1 + 0x8c) >> 0xc & 1) == 0)) && ((*(byte *)(param_1 + 0x1cc) & 0x80) == 0))
    {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8269FE48(param_1,param_2);
      if (*param_2 == 4) {
        *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 0x10;
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xafc);
        *(int *)(*(int *)(param_1 + 0xa0) + 0xafc) = param_1;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
    }
    fn_8267C498(param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

