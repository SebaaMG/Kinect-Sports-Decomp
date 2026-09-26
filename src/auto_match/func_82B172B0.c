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


int fn_82B172B0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(char *)(param_1 + 2) != '\0') && (iVar2 = *(int *)(param_2 + 0x3c), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 2) = 0;
    param_2 = *(int *)(*(int *)(param_2 + 0x34) + 0x38);
  }
  if (*(char *)(param_1 + 2) == '\0') {
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 == 0) {
      do {
        while( true ) {
          if (param_2 == *param_1) {
            return 0;
          }
          iVar1 = *(int *)(param_2 + 0x3c);
          if (iVar1 != 0) break;
          param_2 = *(int *)(param_2 + 0x34);
        }
        iVar2 = *(int *)(iVar1 + 0x38);
        param_2 = iVar1;
      } while (iVar2 == 0);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return iVar2;
}

