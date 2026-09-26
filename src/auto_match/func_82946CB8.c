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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941320();
extern int fn_8295D848();


void fn_82946CB8(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  fn_82941320(param_1,param_2 & 0xffffffff000007ff | 0xf0000000,auStack_80,0x40,0);
  fn_828F6FA8(auStack_a0,0x20,auStack_80,0,0);
  uVar3 = 0;
  puVar2 = param_3;
  while( true ) {
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82035644,auStack_a0,uVar3,*puVar2);
    if (iVar1 < 0) break;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    if (3 < (uVar3 & 0xffffffff)) {
      fn_8295D848(param_1,param_2,param_3);
      return;
    }
  }
  return;
}

