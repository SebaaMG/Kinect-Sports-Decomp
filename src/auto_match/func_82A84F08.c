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


undefined8 fn_82A84F08(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    if (param_3 == (int *)0x0) {
      return 0xffffffff80070057;
    }
    if (10 < param_2) {
      param_2 = 0xb;
    }
    *(int *)(param_1 + 0x2fc) = *param_3;
    if (1 < param_2) {
      iVar2 = param_2 - 1;
      piVar3 = (int *)(param_1 + 0x2fc);
      do {
        iVar1 = *piVar3;
        param_3 = param_3 + 1;
        piVar3 = piVar3 + 1;
        *piVar3 = iVar1 + *param_3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_2 < 0xb) {
      iVar2 = 0xb - param_2;
      puVar4 = (undefined4 *)((param_2 + 0xbe) * 4 + param_1);
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined4 *)((param_2 + 0xbe) * 4 + param_1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

