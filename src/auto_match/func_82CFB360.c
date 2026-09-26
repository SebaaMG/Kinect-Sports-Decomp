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
extern int fn_82CE4118();
extern int fn_82CE52A8();
extern int fn_82CE5410();
extern int fn_82CFAE20();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82133B18;


void fn_82CFB360(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = &lbl_82133B18;
  fn_82CFAE20();
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0x14))();
  }
  if (param_1[2] != 0) {
    fn_82CE4118();
  }
  if (*(char *)(param_1 + 6) != '\0') {
    uVar1 = param_1[3];
    iVar2 = fn_82CE5410();
    fn_82CE52A8(*(undefined4 *)(iVar2 + 0x10),uVar1);
  }
  *param_1 = &lbl_8212FC60;
  return;
}

