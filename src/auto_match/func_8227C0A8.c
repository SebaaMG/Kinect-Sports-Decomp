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


undefined4 fn_8227C0A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      if ((*(int *)(param_1 + 0xa6c) != 0) &&
         ((*(int *)(param_1 + 0xa70) != 0 || (*(int *)(param_1 + 0xa74) != 0)))) {
        return 1;
      }
    }
    else if (3 < iVar1) {
      if (iVar1 < 9) goto LAB_8227c10c;
      if (iVar1 == 0xf) {
        return *(undefined4 *)(param_1 + 0xa74);
      }
    }
    return 0;
  }
LAB_8227c10c:
  return *(undefined4 *)(param_1 + 0xa6c);
}

