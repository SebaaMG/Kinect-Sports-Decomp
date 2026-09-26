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
extern int fn_826E6618();


undefined8 fn_82683F30(int param_1,char *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_826E6618(*(int *)(param_1 + 4),param_2,*(uint *)(param_1 + 0xc) | param_3);
  }
  return uVar1;
}

