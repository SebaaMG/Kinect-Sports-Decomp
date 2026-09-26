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
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_824BF8A8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_823598B0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_30;
  int iStack_2c;
  
  if (*(int *)(param_1 + 0xac) != param_2) {
    iVar2 = fn_8249ABC0();
    iVar2 = *(int *)(iVar2 + 0x110);
    if (*(int *)(param_1 + 0xb4) != -1) {
      iVar2 = fn_8249D980();
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    }
    if (param_2 == 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
      uStack_30 = 0;
      *(int *)(iVar2 + 0x20) = iVar1 + 1;
      iStack_2c = iVar1;
      fn_824BF8A8(iVar2,&uStack_30);
      *(int *)(param_1 + 0xb4) = iVar1;
    }
    *(int *)(param_1 + 0xac) = param_2;
  }
  return;
}

