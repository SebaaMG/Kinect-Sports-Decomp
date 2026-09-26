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
extern int fn_822B83D0();
extern int fn_823726F8();
extern int fn_825113E0();
extern int fn_82560010();
extern int fn_827F6328();
extern unsigned int lbl_82192510;
extern unsigned int lbl_821CC160;


void fn_822D84D0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x54);
  puVar4 = (undefined4 *)(param_1 + 0x5c);
  if (0xf < *(uint *)(param_1 + 0x70)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  uVar3 = fn_82560010(*(undefined4 *)(*(int *)(iVar1 + 0x118) + 0x24),puVar4);
  uVar3 = fn_822B83D0(*(undefined4 *)(iVar1 + 0x118),uVar3);
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x274) = 1;
  fn_825113E0((ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x17,
                    param_1 + 0x90);
  fn_825113E0((ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x27,
                    param_1 + 0xb0);
  if (*(int *)(param_1 + 0xd0) != 0) {
    dVar6 = (double)fn_827F6328(uVar3);
    dVar5 = (double)(float)((double)*(float *)(param_1 + 0xd4) * dVar6);
    fn_823726F8(dVar5,(double)(float)(dVar6 - dVar5),*(undefined4 *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xd8) = lbl_821CC160;
  uVar2 = lbl_82192510;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x4c);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x4c) = uVar2;
  return;
}

