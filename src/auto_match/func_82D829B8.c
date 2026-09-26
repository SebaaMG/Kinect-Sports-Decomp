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
extern unsigned int *auStack_20;
extern int fn_82CE5410();
extern int fn_82D82418();
extern int fn_82D82548();
extern int fn_82D82710();
extern int fn_82D827B8();
extern int fn_82D828D0();
extern int fn_82D94B58();


int fn_82D829B8(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_20 [8];
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x44);
  *(undefined2 *)(iVar1 + 4) = 0x44;
  iVar1 = fn_82D94B58();
  fn_82D82418(auStack_20,param_1,iVar1);
  puVar2 = (undefined1 *)fn_82D82548(auStack_20,param_1,iVar1);
  *(undefined1 *)(iVar1 + 0x40) = *puVar2;
  fn_82D828D0(param_1,iVar1);
  fn_82D82710(param_1,iVar1);
  fn_82D827B8(param_1,iVar1);
  return iVar1;
}

