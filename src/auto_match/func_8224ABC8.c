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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern unsigned int lbl_82197A54;
extern unsigned int lbl_821AD588;


undefined4 * fn_8224ABC8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_50 [20];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar5 = param_2[1];
    uVar1 = *param_2;
    uVar3 = 0;
    iVar4 = 0;
    if ((iVar5 != 0) && (cVar2 = fn_8223AAC0(iVar5), cVar2 != '\0')) {
      uVar3 = uVar1;
      iVar4 = iVar5;
    }
    param_1[4] = 0;
    param_1[3] = &lbl_82197A54;
    param_1[5] = 0;
    param_1[6] = 0;
    iVar5 = iVar4;
    if (param_1 + 5 != auStack_50) {
      iVar5 = param_1[6];
      param_1[6] = iVar4;
      param_1[5] = uVar3;
    }
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  return param_1;
}

