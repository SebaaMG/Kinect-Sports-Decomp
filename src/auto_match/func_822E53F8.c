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
extern int fn_82230218();
extern int fn_822C1928();
extern int fn_822C8C08();
extern int fn_8260D428();


void fn_822E53F8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x114);
  puVar4 = (undefined4 *)(iVar1 + 0xf4);
  puVar3 = puVar4;
  if (0xf < *(uint *)(iVar1 + 0x108)) {
    puVar3 = (undefined4 *)*puVar4;
  }
  iVar2 = fn_8260D428(param_2,0,param_2[4],puVar3,*(undefined4 *)(iVar1 + 0x104));
  if (((iVar2 != 0) &&
      (iVar2 = fn_822C1928((ulonglong)*(uint *)(iVar1 + 0x20) + 4,0xffffffff821acfe8,0,10),
      iVar2 != -1)) && (*(int *)(iVar1 + 0x28) == 0)) {
    puVar3 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar3 = (undefined4 *)*param_2;
    }
    fn_822C8C08(iVar1,puVar3);
  }
  fn_82230218(puVar4,param_2,0,0xffffffffffffffff);
  return;
}

