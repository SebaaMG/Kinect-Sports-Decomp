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
extern int fn_823AA970();
extern int fn_8288E0C8();
extern int fn_8289F2E0();
extern int fn_828CE460();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_828CE608(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar1 = fn_8289F2E0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (iVar1 != 0) {
    uStack_20 = fn_823AA970();
    fn_8288E0C8(&uStack_1c,param_1,&uStack_20);
    if ((ulonglong)uStack_1c != (ulonglong)*(uint *)(param_1 + 4)) {
      fn_828CE460((ulonglong)uStack_1c + 0x10,param_2);
    }
  }
  return;
}

