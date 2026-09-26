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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE8350();


void fn_82CE8920(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x18c) == (*(uint *)(param_1 + 400) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x188),0xc);
  }
  iVar1 = *(int *)(param_1 + 0x18c);
  *(int *)(param_1 + 0x18c) = iVar1 + 1;
  puVar2 = (undefined4 *)(iVar1 * 0xc + *(int *)(param_1 + 0x188));
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = param_3;
  puVar2[2] = param_4;
  fn_82CE8350(param_1);
  return;
}

