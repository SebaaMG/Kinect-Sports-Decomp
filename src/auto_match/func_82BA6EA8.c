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
extern int fn_82BA4190();
extern int fn_82BA6BC0();
extern int fn_82BA6C68();
extern int fn_82BA6D10();
extern int fn_82BA6DB8();


void fn_82BA6EA8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  fn_82BA6BC0();
  fn_82BA6D10(param_1);
  fn_82BA6DB8(param_1);
  fn_82BA4190(param_1);
  fn_82BA6C68(param_1);
  iVar3 = 0;
  for (uVar2 = 1; uVar2 <= *(uint *)(*(int *)(param_1 + 0x814) + 4); uVar2 = uVar2 + 1) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x814) + 8) + iVar3);
    if ((((*(uint *)(iVar1 + 0xe4) & 1) != 0) && (*(int *)(iVar1 + 0x50) == 8)) &&
       (*(int *)(param_1 + 0x830) < *(int *)(iVar1 + 0x38))) {
      *(int *)(param_1 + 0x830) = *(int *)(iVar1 + 0x38);
    }
    iVar3 = iVar3 + 4;
  }
  return;
}

