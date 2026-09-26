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
extern unsigned int *auStack_40;
extern int fn_822A8D30();
extern int fn_828647F0();
extern int fn_82864898();
extern unsigned int lbl_8327F874;


void fn_82552670(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_40 [40];
  
  uVar1 = fn_828647F0(auStack_40,*param_1);
  iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
  if (iVar2 != 0) {
    for (puVar3 = *(undefined4 **)(iVar2 + 0x24); puVar3 != *(undefined4 **)(iVar2 + 0x28);
        puVar3 = puVar3 + 1) {
      (*(code *)**(undefined4 **)*puVar3)();
    }
    for (puVar3 = *(undefined4 **)(iVar2 + 0x34); puVar3 != *(undefined4 **)(iVar2 + 0x38);
        puVar3 = puVar3 + 1) {
      (*(code *)**(undefined4 **)*puVar3)();
    }
  }
  fn_82864898(auStack_40);
  return;
}

