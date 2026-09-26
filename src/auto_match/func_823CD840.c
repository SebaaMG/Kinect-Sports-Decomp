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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250C58();
extern int fn_822EFBF0();
extern int fn_823CD8F8();
extern int fn_823E6F50();
extern int fn_823EAE70();
extern unsigned int iStack_ac;
extern unsigned int lbl_832975B0;


void fn_823CD840(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a0 [160];
  
  fn_82250C58(auStack_a0);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823E6F50(param_1,param_2,param_3,auStack_a0);
  }
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_823CD8F8(param_1,param_2,param_3,auStack_a0);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar2 = (undefined4 *)fn_822EFBF0(auStack_b0);
    fn_823EAE70(*puVar2,param_2,param_3,auStack_a0);
    if (iStack_ac != 0) {
      fn_822315A0();
    }
  }
  return;
}

