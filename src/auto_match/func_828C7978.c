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
extern int fn_8223C478();
extern int fn_82891F28();
extern int fn_828B5C88();
extern int fn_828E9DB8();


void fn_828C7978(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  fn_828B5C88(param_1 + 0x80,*(undefined4 *)(param_1 + 0x6c),param_2);
  cVar1 = *(char *)(param_1 + 0xa5);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar2,8);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  fn_8223C478(param_2,0x10,0);
  fn_828E9DB8(param_2,uVar2,0x10);
  fn_82891F28(param_2,param_1 + 0x90);
  return;
}

