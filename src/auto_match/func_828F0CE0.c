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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291AF98();
extern int fn_8291BDB8();
extern int fn_8291C2D8();


longlong fn_828F0CE0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (uint *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return -0x7789f794;
  }
  if ((((*param_1 & 0xffffff00) == 0x102a1100) ||
      (uVar1 = *param_1 & 0xffff0000, uVar1 == 0xfffe0000)) || (uVar1 == 0xffff0000)) {
    iVar3 = fn_8265C940(0x20,0x24810000);
    if (iVar3 != 0) {
      uVar4 = fn_8291BDB8();
    }
    if ((uVar4 & 0xffffffff) == 0) {
      return -0x7ff8fff2;
    }
    lVar2 = fn_8291C2D8(uVar4,param_1,0);
    if (lVar2 < 0) {
      fn_8291AF98(uVar4);
      fn_8265C990(uVar4,0x24810000);
      return lVar2;
    }
  }
  *param_2 = (int)uVar4;
  return 0;
}

