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
extern int fn_8314309C();


void fn_82BDBFE0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_2;
  iVar2 = -0x7fffbffb;
  if (puVar1[5] == 0) {
    puVar1[3] = (uint)puVar1[3] >> 2;
  }
  puVar1[5] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x98);
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) != 0) {
    if ((*(uint *)(*(int *)(param_1 + 4) + 0xd0) & 0xf0000) != 0) {
      iVar2 = fn_8314309C(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc),1,puVar1);
    }
  }
  if ((*(int *)(*(int *)(param_1 + 4) + 0xc) == 0) || (iVar2 < 0)) {
    *puVar1 = 0xc0000001;
    puVar1[1] = puVar1[3];
  }
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x78) == 0) {
    *(undefined4 **)(param_1 + 0x74) = param_2;
  }
  else {
    *(undefined4 **)(*(int *)(param_1 + 0x78) + 4) = param_2;
  }
  *(undefined4 **)(param_1 + 0x78) = param_2;
  return;
}

