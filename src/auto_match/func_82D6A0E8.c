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
extern int fn_82D74A90();
extern int fn_82D757E8();
extern unsigned int lbl_82138FBC;


undefined4 *
fn_82D6A0E8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_4 & 0xffffffff) == 0) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x30);
    *(undefined2 *)(iVar1 + 4) = 0x30;
    puVar2 = (undefined4 *)fn_82D74A90(iVar1,param_1,param_2,0);
  }
  else {
    iVar1 = fn_82CE5410();
    puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x80)
    ;
    *(undefined2 *)(puVar2 + 1) = 0x80;
    fn_82D757E8(puVar2,param_1,param_2,param_4);
    *puVar2 = &lbl_82138FBC;
  }
  return puVar2;
}

