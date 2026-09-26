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
extern int fn_8267BE38();
extern int fn_82794B88();
extern int fn_82796100();


void fn_827977F8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      puVar1 = *(undefined4 **)(iVar2 + *(int *)(param_1 + 0xc));
      fn_82794B88(param_1);
      fn_8267BE38(*puVar1);
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1[2] = 0;
      iVar2 = iVar2 + 4;
      puVar1[1] = 0;
    } while (uVar3 != 0);
  }
  fn_82796100(param_1 + 0xc,0);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  return;
}

