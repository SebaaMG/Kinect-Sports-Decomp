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
extern int fn_822CF008();
extern int fn_822CFA38();
extern int fn_823737B8();
extern unsigned int lbl_82191118;
extern unsigned int lbl_831CD65C;


undefined8 fn_822E0EB0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if ((((*(int *)(iVar3 + 0x2ac) != 0) && (*(float *)(iVar3 + 0x2a8) < lbl_82191118)) ||
      (iVar2 = fn_823737B8(*(undefined4 *)(param_1 + 0x10),*(int *)(iVar3 + 0x2c) == 0),
      iVar2 != 0)) || (iVar3 = fn_822CF008((double)lbl_831CD65C,iVar3), iVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822CFA38(*(undefined4 *)(param_1 + 0x14),9);
  }
  return uVar1;
}

