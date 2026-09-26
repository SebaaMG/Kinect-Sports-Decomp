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
extern int fn_8225F160();
extern int fn_822AF138();
extern int fn_82359698();
extern int fn_823CC298();
extern int fn_823DBB58();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;


void fn_823D17A0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x1028) = 3;
  *(undefined4 *)(param_1 + 0x1024) = lbl_8218E8E8;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b61e8,0);
  }
  fn_823DBB58(*(undefined4 *)(param_1 + 0x4b0));
  iVar1 = fn_8225F160();
  if ((*(uint *)(*(int *)(param_1 + 0x4bc) + 0x90) <= *(uint *)(*(int *)(param_1 + 0x4bc) + 0xc)) ||
     (uVar2 = 0x19, *(int *)(iVar1 + 8) == 1)) {
    uVar2 = 0x18;
  }
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),uVar2);
  *(undefined4 *)(param_1 + 0xe44) = 0;
  fn_82359698(param_1,0x11);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(**(undefined4 **)(param_1 + 0xc),5);
}

