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
extern int fn_82FF5140();
extern int fn_8300F2C0();
extern int fn_8300F330();
extern int fn_8300F7D0();
extern int fn_83019E38();
extern int fn_8302BB48();
extern unsigned int iStack0000001c;
extern unsigned int lbl_83264304;
extern unsigned int stack0x0000001c;


void fn_8300FCF0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_82FF5140(lbl_83264304,*(undefined4 *)(param_2 + 0x28));
  (**(code **)(**(int **)(param_2 + 8) + 4))();
  uVar1 = fn_8302BB48(*(undefined4 *)(param_2 + 8));
  *(uint *)(param_2 + 0xc) = *(int *)(param_1 + 0x90) + (uVar1 >> 10);
  *(uint *)(param_2 + 0x10) = uVar1 - (uVar1 & 0xfffffc00);
  if (uVar1 >> 10 == 0) {
    fn_8300F330(param_1,param_2);
  }
  else {
    iVar2 = fn_83019E38(param_1 + 0x50,*(undefined4 *)(param_2 + 0xc),&stack0x0000001c);
    if (iVar2 == 1) {
      fn_8300F7D0();
    }
    else {
      fn_8300F2C0(param_1,param_2);
    }
  }
  return;
}

