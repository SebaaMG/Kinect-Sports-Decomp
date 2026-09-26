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
extern int fn_8303A888();
extern unsigned int iStack_10;
extern unsigned int iStack_c;
extern unsigned int lbl_8217BA98;


void fn_8303AE20(int *param_1,int param_2,longlong param_3)

{
  int iVar1;
  float fVar2;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = *param_1;
  iStack_c = (uint)*(ushort *)(param_1 + 3) * 4 + iStack_10;
  if (*(char *)(param_2 + 0x21) == '\0') {
    fn_8303A888(param_3,param_2,&iStack_10,*(undefined2 *)((int)param_1 + 0xe));
    fn_8303A888(param_3 + 0x10);
  }
  fVar2 = lbl_8217BA98;
  iVar1 = (int)param_3;
  *(float *)(iVar1 + 8) = (*(float *)(iVar1 + 8) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar1 + 0xc) = (*(float *)(iVar1 + 0xc) + fVar2) - fVar2;
  *(float *)(iVar1 + 0x18) = (*(float *)(iVar1 + 0x18) + fVar2) - fVar2;
  *(float *)(iVar1 + 0x1c) = (*(float *)(iVar1 + 0x1c) + fVar2) - fVar2;
  return;
}

