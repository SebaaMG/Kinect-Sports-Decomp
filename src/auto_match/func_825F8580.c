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
extern int fn_82536008();
extern int fn_82536288();
extern int fn_825F84F0();
extern int fn_825F8A48();


undefined8 fn_825F8580(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_2 + 0x18) * 4 + param_2 + -4) * 0x2c + param_1;
  uVar1 = *(undefined1 *)(iVar4 + 0x2a);
  uVar2 = *(undefined1 *)(iVar4 + 0x2b);
  fn_82536008(*(undefined4 *)(iVar4 + 8));
  fn_82536288(iVar4 + 8);
  iVar3 = (*(int *)(param_2 + 0x18) + -1) * 4;
  iVar4 = *(int *)(iVar3 + param_2);
  *(undefined4 *)(iVar3 + param_2) = 0xffffffff;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
  fn_825F84F0(iVar4 * 0x2c + param_1 + 4);
  fn_825F8A48(param_1,uVar1,uVar2);
  return 0xffffffffffffffff;
}

