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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C72E0();
extern int fn_822FB198();
extern int fn_823000E0();
extern int fn_82575DF0();
extern unsigned int uStack_50;


void fn_82314398(int param_1)

{
  int iVar1;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined1 auStack_40 [40];
  
  fn_82230110(auStack_40,0xffffffff821accc4);
  fn_822FB198(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_40);
  fn_82230300(auStack_40,1,0);
  fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),
                    0xffffffff821acfe4);
  iVar1 = *(int *)(param_1 + 0xc);
  uStack_50 = 0;
  *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x578) = 0;
  fn_823000E0(*(undefined4 *)(iVar1 + 0x1e8),auStack_60);
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar1 + 0x274) != 0) {
    fn_82575DF0(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x14) + 0x4c) + 0x93c));
    *(undefined4 *)(iVar1 + 0x274) = 0;
  }
  return;
}

