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
extern int fn_828106A0();
extern int fn_8285C2E8();
extern int fn_8285F140();


void fn_828505C0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 0x1c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 4);
      fn_828106A0(iVar1);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x14) = iVar1 + 0x20;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      fn_8285C2E8(*(undefined4 *)(param_1 + 0x90));
    }
    else if (iVar1 == 1) {
      puVar2 = *(undefined4 **)(param_2 + 4);
      puVar2[1] = puVar2 + 4;
      *puVar2 = 0;
      fn_8285F140(*(undefined4 *)(param_1 + 0x90));
    }
  }
  return;
}

