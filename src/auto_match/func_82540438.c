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
extern int fn_825415F8();
extern int fn_825417C0();
extern int fn_825419D8();
extern int fn_82541FD0();
extern int fn_825420C0();
extern int fn_82542ED0();
extern int fn_82543B68();


void fn_82540438(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  fn_825415F8(param_2);
  fn_825417C0(param_2,param_3);
  if (((int)param_3 == 0x10) || (uVar2 = 2, (int)param_3 == 1)) {
    uVar2 = 6;
  }
  iVar1 = *param_2;
  *(uint *)(iVar1 + 0x2948) = *(uint *)(iVar1 + 0x2948) & 0xfffffff8 | uVar2;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
  fn_825419D8(param_1,param_2,param_3);
  fn_82541FD0(param_2,param_3);
  fn_825420C0(param_2);
  fn_82543B68();
  fn_82542ED0(param_2);
  return;
}

