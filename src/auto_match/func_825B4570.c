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
extern int fn_82563C38();
extern int fn_82571418();
extern int fn_825A7BE8();
extern int fn_825A7F68();
extern int fn_82D89E30();
extern int fn_82D93128();


void fn_825B4570(int param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  
  fn_82571418(param_1 + 0x2d0,*(undefined4 *)(param_1 + 0xd4),param_2,3,2,0,0);
  iVar1 = fn_82D89E30(*(undefined4 *)(param_1 + 0xd4));
  if (iVar1 == 0) {
    fn_825A7BE8((double)*(float *)(param_1 + 0x3e0),param_1 + 0x180,
                      *(undefined4 *)(param_1 + 0xd4));
    fn_825A7F68(param_1 + 0x180,*(undefined4 *)(param_1 + 0xd4),
                      *(undefined4 *)(param_1 + 0xdc));
  }
  dVar2 = (double)fn_82D93128((ulonglong)*(uint *)(param_1 + 0xd4) + 0xe0);
  *(float *)(param_1 + 0xd0) = (float)dVar2;
  fn_82563C38(*(undefined4 *)(param_1 + 0xd4),param_1 + 0xb0,param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xf0) = 1;
  return;
}

