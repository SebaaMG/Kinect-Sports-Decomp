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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_82368E38();
extern int fn_823CC9F0();
extern int fn_823E7368();
extern int fn_823F0A30();
extern unsigned int iStack_9c;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_823CC900(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [104];
  
  fn_82250D10(auStack_80);
  fn_82368E38((double)lbl_821CC160,auStack_90,param_1);
  fn_823E7368(param_1,auStack_80);
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_823CC9F0(param_1,param_2,auStack_80);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar2 = (undefined4 *)fn_822EFBF0(auStack_a0);
    fn_823F0A30((ulonglong)*(uint *)*puVar2 + 0x618,param_2,auStack_80);
    if (iStack_9c != 0) {
      fn_822315A0();
    }
  }
  return;
}

