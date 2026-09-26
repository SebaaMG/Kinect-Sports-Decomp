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
extern int fn_82D5C050();
extern int fn_82D6C808();
extern int fn_82D757E8();
extern unsigned int lbl_82138FBC;
extern unsigned int lbl_82139090;


undefined4 * fn_82D5C608(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_4 & 0xffffffff) == 0) {
    iVar2 = fn_82CE5410();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x38);
    param_4 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_3 + 0x10) + 0xc))
                      (*(int **)(param_3 + 0x10),param_1,param_2,param_3);
    if (uVar1 == 0) {
      iVar2 = fn_82CE5410();
      puVar3 = (undefined4 *)
               (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x90);
      *(undefined2 *)(puVar3 + 1) = 0x90;
      fn_82D5C050(puVar3,param_2,param_1,param_3,param_4);
      *puVar3 = &lbl_82139090;
      return puVar3;
    }
    if (uVar1 != 1) {
      if (2 < uVar1) {
        return (undefined4 *)0x0;
      }
      iVar2 = fn_82CE5410();
      puVar3 = (undefined4 *)
               (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x80);
      *(undefined2 *)(puVar3 + 1) = 0x80;
      fn_82D757E8(puVar3,param_1,param_2,param_4);
      *puVar3 = &lbl_82138FBC;
      return puVar3;
    }
    iVar2 = fn_82CE5410();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x38);
  }
  *(undefined2 *)(iVar2 + 4) = 0x38;
  puVar3 = (undefined4 *)fn_82D6C808(iVar2,param_1,param_2,param_3,param_4);
  return puVar3;
}

