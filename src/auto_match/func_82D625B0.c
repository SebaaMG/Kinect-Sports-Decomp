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
extern int fn_82D76368();
extern unsigned int lbl_8213932C;


undefined4 * fn_82D625B0(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_82CE5410();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x28);
  puVar2[2] = param_4;
  *(undefined2 *)(puVar2 + 3) = 0xffff;
  *(undefined2 *)(puVar2 + 1) = 0x28;
  *puVar2 = &lbl_8213932C;
  *(undefined2 *)((int)puVar2 + 6) = 1;
  *(undefined2 *)((int)puVar2 + 0xe) = 0xffff;
  *(undefined2 *)(puVar2 + 4) = 0xffff;
  fn_82D76368((ulonglong)*param_2 + 0x20,puVar2 + 5);
  return puVar2;
}

