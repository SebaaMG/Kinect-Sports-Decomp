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
extern int fn_828042F0();
extern int fn_82807110();
extern int fn_82807EC8();
extern int fn_82808220();
extern int fn_82809360();
extern unsigned int lbl_83156DC0;


void fn_82808638(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 100) == 0) || (lbl_83156DC0 == 0)) || (*(int *)(param_1 + 0x58) != 0)) {
    *(undefined1 *)(param_1 + 0x45) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x10);
    iVar1 = *(int *)(param_2 + 0x14);
    *(int *)(param_1 + 0x30) = iVar1;
    if ((((*(char *)(param_2 + 0x26) == '\0') && (*(int *)(param_1 + 0x4c) == 1)) &&
        ((*(char *)(param_1 + 0x47) == '\x0f' &&
         ((*(int *)(param_1 + 0x58) == 0 && (*(int *)(param_1 + 0x28) != 0)))))) && (iVar1 != 0)) {
      fn_828042F0(param_2,param_4,param_3,param_1);
    }
    else {
      fn_82807EC8(param_1,param_2,param_4,*(undefined1 *)(param_1 + 0x47));
      fn_82808220(param_2,param_3,param_1);
    }
  }
  else {
    fn_82807110(param_2,param_1,param_4,*(undefined1 *)(param_1 + 0x47));
    fn_82809360(param_1,param_4,param_3);
  }
  return;
}

