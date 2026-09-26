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
extern int fn_8281FEB0();


void fn_82816EF0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x74) != 0) && (*(uint *)(param_1 + 0x74) <= param_2)) {
    param_2 = param_2 + 1;
  }
  iVar2 = fn_8281FEB0(param_1);
  if (iVar2 != 0) {
    uVar3 = 0;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x28);
    if (uVar1 != 0) {
      iVar2 = 0;
      do {
        iVar4 = iVar2 + *(int *)(param_1 + 0x44);
        if ((*(uint *)(iVar2 + *(int *)(param_1 + 0x44)) == param_2) &&
           (*(char *)(iVar4 + 0xc) == *(char *)(param_1 + 0x78))) {
          *param_3 = iVar4;
          return;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0xe;
      } while (uVar3 < uVar1);
    }
  }
  *param_3 = 0;
  return;
}

