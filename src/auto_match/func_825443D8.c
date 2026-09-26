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
extern int fn_825315E0();
extern int fn_82560690();
extern int fn_82A1BB18();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83296B94;
extern unsigned int lbl_83296B98;


undefined8 fn_825443D8(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(lbl_8320A898 + 0x2a88);
  uVar3 = fn_82A1BB18();
  fn_825315E0(-(uint)(uVar3 == uVar1) & lbl_8320A898);
  iVar2 = lbl_83296B94;
  uVar1 = *(uint *)(lbl_8320A898 + 0x2a88);
  uVar3 = fn_82A1BB18();
  fn_825315E0(-(uint)(uVar3 == uVar1) & lbl_8320A898);
  iVar4 = fn_82560690(2);
  if (iVar4 != 1) {
    if (iVar2 != lbl_8326B430) {
      if (param_1 == 0) {
        return 0xffffffff8326b0f8;
      }
      return 0xffffffff8326b12c;
    }
    if (lbl_83296B98 != lbl_8326B434) {
      if (param_1 == 0) {
        return 0xffffffff8326b160;
      }
      return 0xffffffff8326b194;
    }
  }
  return 0xffffffff8326b090;
}

