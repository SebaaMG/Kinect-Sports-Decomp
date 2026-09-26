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
extern int fn_82631AF0();
extern int fn_82637AF8();
extern int fn_826381E0();
extern int fn_82638FF8();
extern int fn_8263AA68();
extern int fn_828556B0();
extern int fn_82857C80();
extern int fn_82F68CC0();


void fn_82855AB0(undefined4 *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  param_1[0x42] = param_4[7];
  param_1[0x43] = param_4[param_1[0x44] + 2];
  param_1[0x45] = param_4[param_1[0x44] + 4];
  if (*param_4 != 0) {
    fn_82857C80();
  }
  param_1[0x41] = 0;
  fn_82F68CC0(param_1 + 0x6c,*param_1,0x40);
  param_1[0x48] = *(undefined4 *)(param_2 + 0xac);
  fn_828556B0(param_1);
  fn_826381E0(param_1[1],1);
  fn_82637AF8(param_1[1],0);
  fn_82638FF8(param_1[1],param_1[0x46]);
  if (*(int *)(param_2 + 0x138) != 0) {
    param_1[0x1a] = param_4[10];
    param_1[0x1b] = *(undefined4 *)(*(int *)(param_2 + 0x138) + 0x2c);
    param_1[0x1c] = (uint)*(ushort *)(*(int *)(param_2 + 0x138) + 0x1a);
    if ((param_4[0x12] != 0) && (iVar1 = *(int *)(param_4[0x12] + 0x38), iVar1 != 0)) {
      fn_8263AA68(param_1[1],10,iVar1,0);
    }
  }
  param_1[0x1a4f] = param_4;
  fn_82631AF0(param_1[1],0);
  param_1[0x1a50] = 0;
  return;
}

