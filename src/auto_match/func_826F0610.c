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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
extern unsigned int iStack_c;


undefined8 fn_826F0610(int param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iStack_c;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    iVar2 = 0;
    do {
      if (uVar1 < 0x10) {
        piVar3 = (int *)(iVar2 + param_1 + 0x34);
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x28) + iVar2 + -0xc0);
      }
      if ((*piVar3 == 2) && (piVar3[1] == param_2)) {
        iStack_c = CONCAT13(param_4,(((U64)(iStack_c) >> 8) & 0xFFFFFF));
        *piVar3 = 2;
        piVar3[1] = param_3;
        piVar3[2] = iStack_c;
        return 1;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 0x24));
  }
  return 0;
}

