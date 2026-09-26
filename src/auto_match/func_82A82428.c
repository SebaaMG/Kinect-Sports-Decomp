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
extern int fn_82F65350();
extern unsigned int lbl_82015CF0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83223458;


undefined8 fn_82A82428(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 == (undefined2 *)0x0) {
    return 0xffffffff80070057;
  }
  if (lbl_83223458 == '\0') {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    param_1[1] = 0;
    *param_1 = 0xf1ea;
    uVar1 = lbl_821AAD20;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 2) = uVar1;
    iVar3 = fn_82F65350();
    uVar2 = 0;
    *(float *)(param_1 + 6) = (float)(longlong)iVar3 * lbl_82015CF0;
  }
  return uVar2;
}

