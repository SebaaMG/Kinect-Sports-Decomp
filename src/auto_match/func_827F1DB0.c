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
extern int fn_827F1D18();


void fn_827F1DB0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (param_2 == iVar1) {
    if (iVar1 == *(int *)(param_1 + 8)) {
      fn_827F1D18();
    }
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = puVar2[2];
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    if (iVar1 == *(int *)(param_1 + 8)) {
      fn_827F1D18(param_1);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = puVar2[2];
    *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
    *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
    iVar1 = *(int *)(param_2 + 4);
    puVar2[1] = iVar1;
    *(undefined4 **)(iVar1 + 8) = puVar2;
    puVar2[2] = param_2;
    *(undefined4 **)(param_2 + 4) = puVar2;
  }
  *puVar2 = *param_3;
  return;
}

