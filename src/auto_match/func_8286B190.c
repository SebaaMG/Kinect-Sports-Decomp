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


void fn_8286B190(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    uVar3 = param_2 - 1;
    iVar5 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    if (param_2 <= param_3) break;
    iVar4 = iVar5 * 0x1c + param_1;
    puVar2 = param_4;
    if (0xf < (uint)param_4[5]) {
      puVar2 = (undefined4 *)*param_4;
    }
    iVar1 = fn_8260D428(iVar4,0,*(undefined4 *)(iVar4 + 0x10),puVar2,param_4[4]);
    if (-1 < iVar1) break;
    fn_822402F8(param_2 * 0x1c + param_1,iVar4);
    param_2 = iVar5;
  }
  fn_822402F8(param_2 * 0x1c + param_1,param_4);
  return;
}

