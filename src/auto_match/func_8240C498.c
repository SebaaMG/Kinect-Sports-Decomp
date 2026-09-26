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
extern int fn_822B17A8();
extern int fn_8240BCE8();
extern int fn_824569A8();
extern int fn_82508078();
extern unsigned int lbl_821BA6F0;


void fn_8240C498(int *param_1,int param_2)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  
  piVar3 = (int *)(**(code **)(*param_1 + 8))();
  uVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,param_2);
  fn_8240BCE8(param_1,2,param_2,uVar2);
  fn_82508078(*(undefined4 *)param_1[9],lbl_821BA6F0,0);
  fn_824569A8(param_1[0x3d]);
  if (((*(int *)(param_2 + 0x24) != 0) && (param_1[0x3b] == 0)) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x24) + 0x34), iVar1 != 0)) {
    fn_822B17A8(iVar1,0x14,0);
  }
  return;
}

