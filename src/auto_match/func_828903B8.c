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
extern int fn_8288BB90();
extern int fn_828B5580();


int fn_828903B8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xc;
    do {
      if (param_3 != 0) {
        fn_828B5580(param_3,iVar2 + -0xc);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar2 + -4);
        fn_8288BB90(param_3 + 0xc,iVar2);
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(iVar2 + 0x10);
      }
      param_3 = param_3 + 0x20;
      iVar1 = iVar2 + 0x14;
      iVar2 = iVar2 + 0x20;
    } while (iVar1 != param_2);
  }
  return param_3;
}

