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
extern int fn_82247000();
extern int fn_82247068();
extern int fn_822471C8();
extern int fn_822474A8();
extern int fn_8288D868();
extern int fn_8288E940();
extern int fn_828AE818();
extern int fn_828B1340();


void fn_82246970(int param_1)

{
  int iVar1;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar2;
  
  iVar1 = fn_82247000(*(undefined4 *)(param_1 + 0x38));
  cVar3 = fn_8288D868(*(undefined4 *)(param_1 + 0x38));
  cVar4 = fn_8288E940(*(undefined4 *)(param_1 + 0x38));
  cVar5 = fn_828B1340(*(undefined4 *)(param_1 + 8));
  if (cVar3 == '\0') {
    return;
  }
  if (cVar4 == '\0') {
    return;
  }
  if (cVar5 != '\0') {
    return;
  }
  if (iVar1 == 0) {
    cVar3 = fn_82247068(*(undefined4 *)(param_1 + 0x38),1);
    if (cVar3 == '\0') goto LAB_82246a2c;
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    if (iVar1 == 2) {
      fn_828AE818(*(undefined4 *)(param_1 + 8),0x1c);
      goto LAB_82246a2c;
    }
    if (iVar1 != 3) goto LAB_82246a2c;
    cVar3 = fn_82247068(*(undefined4 *)(param_1 + 0x38),4);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    if (cVar3 == '\0') {
      fn_822474A8();
      goto LAB_82246a2c;
    }
  }
  fn_822471C8(uVar2,1);
LAB_82246a2c:
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

