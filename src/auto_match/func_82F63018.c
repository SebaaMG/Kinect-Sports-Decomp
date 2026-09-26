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
extern int fn_82D7E470();
extern int fn_82F68CC0();
extern int fn_82F6E1C8();
extern int fn_82F70470();
extern int fn_82F70480();


undefined4 * fn_82F63018(undefined4 *param_1)

{
  int iVar3;
  undefined4 uVar4;
  longlong lVar1;
  undefined8 uVar2;
  
  iVar3 = fn_82F70470();
  *param_1 = *(undefined4 *)(iVar3 + 4);
  uVar4 = fn_82D7E470();
  param_1[1] = uVar4;
  lVar1 = fn_82F6E1C8(0x100,2);
  param_1[2] = (int)lVar1;
  if (lVar1 == 0) {
    uVar4 = fn_82F70480();
    param_1[2] = uVar4;
  }
  else {
    uVar2 = fn_82F70480();
    fn_82F68CC0(lVar1,uVar2,0x200);
  }
  param_1[3] = (uint)(lVar1 != 0);
  return param_1;
}

