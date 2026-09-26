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
extern int fn_829533F0();
extern int fn_82959E40();
extern unsigned int lbl_8200E890;


longlong fn_8295A028(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lVar3 = 1;
  if (((**(uint **)(param_1 + 0x104) & 0xfff00000) == 0x20500000) &&
     ((iVar1 = *(int *)(*(int *)((**(uint **)(param_1 + 0x104) & 0xfffff) * 4 +
                                (*(uint **)(param_1 + 0x104))[2]) * 4 + *(int *)(param_1 + 0x14)),
      (*(uint *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0 ||
      (*(double *)(iVar1 + 0x20) != lbl_8200E890)))) {
    lVar3 = 1;
  }
  else {
    puVar2 = (undefined4 *)
             fn_829533F0(param_1,**(uint **)(param_1 + 0x104) & 0xfffff | 0x20400000,
                           *(uint **)(param_1 + 0x104),0,2,1);
    if ((puVar2 != (undefined4 *)0x0) && (lVar3 = fn_82959E40(param_1,puVar2), lVar3 == 0)) {
      *puVar2 = 0;
    }
  }
  return lVar3;
}

