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
extern int fn_8232BDB0();
extern int fn_8232C528();
extern int fn_82520780();


void fn_8232DAC0(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  lVar2 = fn_82520780((double)*(float *)(iVar1 + 0x80),0xffffffff83265a28);
  uVar3 = fn_8232BDB0(iVar1 + 0x6c);
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  *(uint *)(iVar1 + 0x10) = (uint)(lVar2 != 0);
  *(undefined4 *)(iVar1 + 0x14) = 3;
  fn_8232C528(*(undefined4 *)(param_1 + 0xc),0);
  return;
}

