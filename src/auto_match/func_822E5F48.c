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
extern int fn_822315A0();
extern int fn_8223AAC0();


undefined4 * fn_822E5F48(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_2 + 0x2b0);
  uVar2 = *(undefined4 *)(param_2 + 0x2ac);
  *param_1 = 0;
  param_1[1] = 0;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    param_1[1] = iVar1;
    *param_1 = uVar2;
  }
  return param_1;
}

