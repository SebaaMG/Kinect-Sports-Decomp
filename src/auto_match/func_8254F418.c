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
extern int fn_82424AD0();


int * fn_8254F418(int *param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar2 = fn_82424AD0();
  if (cVar2 != '\0') {
    iVar1 = *param_1;
    if ((param_2 & 0xffffffff) != 0) {
      puVar3 = (undefined4 *)(iVar1 + -4);
      uVar4 = param_2;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = *param_3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1[1] = (int)((param_2 & 0xffffffff) << 2) + iVar1;
  }
  return param_1;
}

