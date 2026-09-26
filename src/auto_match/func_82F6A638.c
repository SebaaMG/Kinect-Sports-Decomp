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
extern int fn_82A1BB18();
extern int fn_82D7E470();
extern int fn_82F6A5B8();
extern int fn_82F6F8D8();
extern int fn_82F6F8E0();
extern int fn_82F6F8F0();
extern int fn_82F6FA78();
extern int fn_8306C3B8();


undefined8 fn_82F6A638(undefined4 *param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  
  fn_82D7E470();
  fn_82F6F8E0();
  iVar2 = fn_82F6F8D8();
  if (iVar2 == 0) {
    uVar1 = fn_82F6F8E0();
    iVar2 = fn_82F6F8F0(uVar1,param_1);
    if (iVar2 == 0) {
      thunk_FUN_82a2b798();
                    /* WARNING: Subroutine does not return */
      fn_8306C3B8();
    }
    uVar3 = fn_82A1BB18();
    *param_1 = uVar3;
  }
  else {
    *(undefined4 *)(iVar2 + 0x54) = param_1[0x15];
    *(undefined4 *)(iVar2 + 0x58) = param_1[0x16];
    *(undefined4 *)(iVar2 + 4) = param_1[1];
    fn_82F6FA78(param_1);
  }
  fn_82F6A5B8();
  return 0;
}

