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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823CCBA8();
extern int fn_823E7368();
extern int fn_823F2978();
extern unsigned int iStack_9c;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_823CCA90(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_90 [144];
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  fn_82250D10(auStack_90);
  fn_823E7368(param_1,auStack_90);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    fn_823CCBA8(param_1,param_2,0,uVar1,auStack_90,param_3);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar3 = (undefined4 *)fn_822EFBF0(auStack_a0);
    fn_823F2978((ulonglong)*(uint *)*puVar3 + 0xc38,param_2,uVar1,auStack_90,param_3);
    if (iStack_9c != 0) {
      fn_822315A0();
    }
  }
  return;
}

