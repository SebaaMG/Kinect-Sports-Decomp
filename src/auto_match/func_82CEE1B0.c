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
extern int fn_82CEE3C0();
extern unsigned int lbl_8213006C;
extern unsigned int lbl_82132DF0;


undefined4 * fn_82CEE1B0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_8213006C;
  iVar1 = fn_82CE5410();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x14);
  *(undefined2 *)((int)puVar2 + 6) = 1;
  puVar2[2] = param_2;
  *(undefined2 *)(puVar2 + 1) = 0x14;
  *puVar2 = &lbl_82132DF0;
  puVar2[3] = *(undefined4 *)(param_2 + 4);
  puVar2[4] = 1;
  fn_82CEE3C0();
  param_1[2] = puVar2;
  return param_1;
}

