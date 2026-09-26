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


int fn_82AD1750(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x38);
    if (iVar4 == 0) {
      iVar3 = iVar1;
      do {
        while( true ) {
          if (iVar3 == *param_1) {
            iVar4 = 0;
            goto code_r0x82ad17a4;
          }
          iVar2 = *(int *)(iVar3 + 0x3c);
          if (iVar2 != 0) break;
          iVar3 = *(int *)(iVar3 + 0x34);
        }
        iVar4 = *(int *)(iVar2 + 0x38);
        iVar3 = iVar2;
      } while (iVar4 == 0);
    }
code_r0x82ad17a4:
    param_1[1] = iVar4;
  }
  return iVar1;
}

