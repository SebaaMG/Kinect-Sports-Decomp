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
extern int fn_822402F8();
extern int fn_8260D428();
extern int fn_8286B190();


void fn_8286B448(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = (iVar3 + 1U) * 2;
    if (param_3 <= iVar4) break;
    iVar1 = (iVar3 + 1U & 0x7fffffff) * 0x38 + param_1;
    puVar2 = (undefined4 *)(iVar1 + -0x1c);
    if (0xf < *(uint *)(iVar1 + -8)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    iVar1 = fn_8260D428(iVar1,0,*(undefined4 *)(iVar1 + 0x10),puVar2,*(undefined4 *)(iVar1 + -0xc))
    ;
    if (iVar1 < 0) {
      iVar4 = iVar4 + -1;
    }
    fn_822402F8(iVar3 * 0x1c + param_1,iVar4 * 0x1c + param_1);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    fn_822402F8(iVar3 * 0x1c + param_1,param_3 * 0x1c + param_1 + -0x1c);
    iVar3 = param_3 + -1;
  }
  fn_8286B190(param_1,iVar3,param_2,param_4);
  return;
}

