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
extern int fn_8267C4C8();
extern int fn_826BD8C8();


void fn_82681FE0(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 4) & 0x8f;
  if (uVar2 == 4) {
    param_3[2] = param_3[2] + 1;
  }
  else if (uVar2 == 5) {
    fn_8267C4C8(param_3 + -3);
  }
  else if (5 < uVar2) {
    if (uVar2 < 8) {
      iVar1 = fn_826BD8C8(param_3);
      *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    else if (uVar2 == 8) {
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

