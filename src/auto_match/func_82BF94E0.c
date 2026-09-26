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
extern int fn_82BF9498();
extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD22;


undefined8 fn_82BF94E0(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = (uint)lbl_8322FD1C;
  uVar2 = (uint)lbl_8322FD22;
  uVar4 = uVar3;
  uVar6 = uVar2;
  if (uVar3 < param_1) {
    do {
      if (uVar6 == 0xffff) {
        return 0;
      }
      iVar5 = 0;
      for (uVar1 = (&lbl_8322ECF8)[uVar6]; uVar1 != 0xfffe; uVar1 = (&lbl_8322BCF8)[uVar1]) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = iVar5 + uVar4;
      uVar6 = (uint)(ushort)(&lbl_8322F4F8)[uVar6];
    } while (uVar4 < param_1);
    if (uVar3 < param_1) {
      while (fn_82BF9498(uVar2), lbl_8322FD1C < param_1) {
        uVar2 = (uint)lbl_8322FD22;
      }
    }
  }
  return 1;
}

