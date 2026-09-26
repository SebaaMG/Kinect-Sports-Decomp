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
extern int fn_82D76758();
extern unsigned int lbl_8213927C;
extern unsigned int lbl_821392B8;


undefined4 * fn_82D61160(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  iVar1 = fn_82CE5410();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x2c);
  puVar2[2] = param_4;
  *puVar2 = &lbl_8213927C;
  *(undefined2 *)(puVar2 + 1) = 0x2c;
  *(undefined2 *)((int)puVar2 + 6) = 1;
  lVar4 = 8;
  puVar3 = (undefined2 *)((int)puVar2 + 0x1a);
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82D76758((ulonglong)*param_1 + 0x20,puVar2 + 3);
  *puVar2 = &lbl_821392B8;
  return puVar2;
}

