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
extern int fn_827F6AC0();
extern int fn_827F6BA0();
extern int fn_827F6F58();
extern int fn_827FA1F0();
extern int fn_82F691F0();


void fn_827F3828(longlong param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  fn_827F6F58(param_1,0);
  uVar1 = *(undefined2 *)(param_2 + 0x4e);
  uVar2 = *(undefined2 *)(param_2 + 0x52);
  fn_827F6BA0(param_1,*(undefined2 *)(param_2 + 0x20));
  fn_827F6AC0(param_1,uVar1);
  fn_827FA1F0(param_1,uVar2);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x34,0,0x20);
}

