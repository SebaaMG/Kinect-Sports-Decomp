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
extern unsigned int *auStack_120;
extern int fn_828F6FA8();
extern int fn_828FA8D8();


void fn_828FADC0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_120 [288];
  
  switch(*param_3) {
  case 0:
    uVar1 = 0xffffffff820298a8;
    break;
  case 1:
    puVar2 = param_3 + 2;
    goto code_r0x828fae1c;
  case 2:
    puVar2 = (undefined4 *)param_3[2];
    uVar1 = 0xffffffff8202988c;
    goto code_r0x828fae24;
  case 3:
    puVar2 = (undefined4 *)param_3[2];
    uVar1 = 0xffffffff8202987c;
    goto code_r0x828fae24;
  case 4:
    puVar2 = (undefined4 *)param_3[2];
    uVar1 = 0xffffffff8202986c;
    goto code_r0x828fae24;
  case 5:
    fn_828F6FA8(auStack_120,0x100,0xffffffff82029860,*(undefined8 *)(param_3 + 2));
    goto code_r0x828faf34;
  case 6:
    fn_828F6FA8(auStack_120,0x100,0xffffffff82029854,*(undefined8 *)(param_3 + 2));
    goto code_r0x828faf34;
  case 7:
    fn_828F6FA8(auStack_120,0x100,0xffffffff82029848,*(undefined8 *)(param_3 + 2));
    goto code_r0x828faf34;
  case 8:
    fn_828F6FA8(auStack_120,0x100,0xffffffff8202983c,*(undefined8 *)(param_3 + 2));
    goto code_r0x828faf34;
  case 9:
    puVar2 = (undefined4 *)param_3[2];
code_r0x828fae1c:
    uVar1 = 0xffffffff8202989c;
code_r0x828fae24:
    fn_828F6FA8(auStack_120,0x100,uVar1,puVar2);
    goto code_r0x828faf34;
  case 10:
    uVar1 = 0xffffffff8202982c;
    break;
  default:
    uVar1 = 0xffffffff8202980c;
    break;
  case 0xc:
    uVar1 = 0xffffffff82029820;
    break;
  case 0xd:
    uVar1 = 0xffffffff82029814;
  }
  fn_828F6FA8(auStack_120,0x100,uVar1);
code_r0x828faf34:
  fn_828FA8D8(param_1,param_3,param_2,0xffffffff820297ec,auStack_120);
  return;
}

