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
extern int fn_82CE5410();
extern int fn_82D81408();
extern int fn_82D81450();
extern int fn_83083AA0();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_82141F04;
extern unsigned int lbl_821421D4;
extern unsigned int lbl_821421EC;
extern unsigned int lbl_82142208;


void fn_82DB3418(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &lbl_82142208;
  param_1[5] = &lbl_821421EC;
  param_1[6] = &lbl_821421D4;
  fn_82D81408(param_1[7],param_1 + 5);
  fn_82D81450(param_1[7],param_1 + 6);
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    fn_83083AA0(iVar1);
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),iVar1,0x50);
  }
  param_1[6] = &lbl_82141F04;
  param_1[5] = &lbl_82141EE8;
  *param_1 = &lbl_8212FC60;
  return;
}

