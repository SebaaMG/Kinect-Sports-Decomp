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
extern int fn_82F17548();
extern int fn_82F175E8();
extern int fn_82F17A50();


undefined8 fn_82ED5948(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_r10;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  if (*(int *)(param_1 + 0x4ef4) == 0) {
    iVar1 = fn_82F17A50(aiStack_30);
    *(int *)(param_1 + 0x4ef4) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    if ((aiStack_30[0] != 0) && (aiStack_30[0] != 7)) {
      return 0;
    }
  }
  else {
    aiStack_30[0] = fn_82F175E8();
  }
  if ((*(int *)(param_1 + 0x4ef4) != 0) && ((aiStack_30[0] == 0 || (aiStack_30[0] == 7)))) {
    if ((*(int *)(param_1 + 4) != 8) || (uVar2 = 2, *(int *)(param_1 + 0x6d40) != 0)) {
      uVar2 = 0;
    }
    iVar1 = fn_82F17548(*(int *)(param_1 + 0x4ef4),in_r10,in_stack_00000054,uVar2,
                              in_stack_0000005c,in_stack_00000064);
    if ((iVar1 == 0) || (iVar1 == 7)) {
      return 1;
    }
  }
  return 0;
}

