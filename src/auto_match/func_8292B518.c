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
extern int fn_829252C0();


void fn_8292B518(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_829252C0(param_1,param_4);
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar2 = (undefined4 *)(param_4 + -0x10);
    puVar3 = (undefined4 *)
             (*(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
              *(int *)(param_1 + 0x20) + -4);
    do {
      puVar2 = puVar2 + 4;
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
    } while (uVar1 < *(uint *)(param_1 + 0x68));
  }
  return;
}

