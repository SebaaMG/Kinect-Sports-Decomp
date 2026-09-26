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
extern int fn_82637C50();
extern int fn_82637CE0();
extern unsigned int lbl_821CC160;


void fn_825427C0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_82637C50(*param_1,6);
  fn_82637CE0(*param_1,7);
  uVar2 = lbl_821CC160;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffb;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x2904) = uVar2;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x8000000;
  return;
}

