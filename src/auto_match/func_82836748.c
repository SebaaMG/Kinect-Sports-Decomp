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
extern unsigned int *auStack_140;
extern int fn_828358A8();
extern int fn_828359F8();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82836748(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,char param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_140 [320];
  
  uVar2 = fn_828358A8(*(undefined4 *)(param_1 + 8));
  auStack_140[0] = 0;
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_140,param_5);
  }
  fn_82F64020(auStack_140,0x100,0xffffffff8201f424,auStack_140,uVar2,
                    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10));
  fn_82F6D000(param_2,0xffffffff8201f430,auStack_140);
  uVar3 = 0;
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x10);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) != 0) {
    do {
      (**(code **)(**(int **)(param_1 + 8) + 4))
                (*(int **)(param_1 + 8),param_2,param_1,param_4,param_5 + 1,0,uVar3);
      uVar3 = uVar3 + 1;
      param_4 = param_4 + (ulonglong)uVar1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x10));
  }
  return;
}

