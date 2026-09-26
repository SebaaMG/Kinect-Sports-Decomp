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
extern int fn_823AA2A8();
extern int fn_82610EF0();
extern int fn_82896AD8();
extern int fn_828A12E8();
extern int fn_828AC4E8();
extern int fn_828AC670();
extern int fn_828AFFB0();
extern int fn_828C2BD8();
extern int fn_828EC6B8();
extern int fn_828EC6C0();
extern int fn_82A1BFA8();


void fn_828ADBE0(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 0x7c) = param_5;
  *(undefined4 *)(param_1 + 0x80) = param_6;
  fn_828A12E8();
  fn_82896AD8();
  fn_828EC6B8(*(undefined4 *)(param_1 + 0x8c),param_2);
  fn_828EC6C0(*(undefined4 *)(param_1 + 0x8c),param_3);
  uVar4 = 0;
  do {
    iVar2 = fn_82A1BFA8(uVar4);
    if (iVar2 != 0) {
      uVar3 = 0xffffffff83159e98;
      if ((param_2 & 0xff) == 0) {
        uVar3 = 0xffffffff83159eb4;
      }
      fn_828C2BD8(param_1,uVar4,0xffffffff83159e7c,uVar3);
    }
    uVar4 = uVar4 + 1;
  } while ((uVar4 & 0xffffffff) < 4);
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  fn_828AFFB0(param_1 + 0x278,param_4);
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  fn_828AC4E8(param_1 + 0x60);
  uVar3 = fn_82610EF0(param_7);
  uVar1 = fn_823AA2A8(param_7);
  fn_828AC670(param_1 + 0x60,uVar1,uVar3);
  *(undefined1 *)(param_1 + 0x78) = param_8;
  return;
}

