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
extern int fn_82758958();
extern int fn_827594F8();


longlong fn_82758B68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_827594F8(param_1 + 0x44,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_1 + 8);
  fn_82758958(iVar1 + 0x50,param_1 + 0x44);
  uVar2 = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x54) * 0x28 +
         (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x50) + -0x28;
}

