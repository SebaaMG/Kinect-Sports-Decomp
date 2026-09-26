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
extern int fn_82297D98();
extern int fn_82663848();
extern int fn_82668E40();
extern unsigned int iStack00000024;


void fn_82663538(undefined4 *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puStack00000014;
  char cStack0000001f;
  int iStack00000024;
  
  puStack00000014 = param_1;
  cStack0000001f = param_2;
  iStack00000024 = param_3;
  if ((param_2 != '\0') && (7 < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      fn_82297D98(param_1,uVar1,param_3);
    }
    fn_82668E40(puStack00000014 + 6,uVar1,(ulonglong)(uint)puStack00000014[5] + 1);
  }
  puStack00000014[5] = 7;
  fn_82663848(puStack00000014,iStack00000024);
  return;
}

