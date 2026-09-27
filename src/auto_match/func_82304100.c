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
extern int fn_8250EC68();
extern float lbl_82195714;


void fn_82304100(int param_1)

{
  int iVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    fn_8250EC68(param_1 + 0x6c);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  fVar2 = *(float *)(iVar1 + 0x10c) * lbl_82195714;
  *(float *)(iVar1 + 0x108) = *(float *)(iVar1 + 0x108) * lbl_82195714;
  *(float *)(iVar1 + 0x10c) = fVar2;
  return;
}

