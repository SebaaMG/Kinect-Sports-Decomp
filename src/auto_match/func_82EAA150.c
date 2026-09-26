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
extern unsigned int *auStack_2e0;
extern int fn_82E9AC18();
extern unsigned int iStack_2f8;
extern unsigned int *iStack_2fc;


void fn_82EAA150(int param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,uint param_7,uint param_8)

{
  code *pcVar1;
  int iVar2;
  int *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  int *in_stack_00000064;
  undefined4 *in_stack_0000006c;
  int iStack_2fc;
  int iStack_2f8;
  undefined1 auStack_2e0 [736];
  
  pcVar1 = (code *)*in_stack_0000005c;
  (**(code **)(param_1 + 0xa5c))
            ((longlong)((int)param_8 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
             (longlong)((int)param_7 >> 2) + param_3,*(int *)(param_1 + 0x564),auStack_2e0,8,
             param_7 & 3,param_8 & 3,*(undefined4 *)(param_1 + 0x618));
  if (*(int *)(param_1 + 0x6d74) == 0) {
    iVar2 = (*pcVar1)(param_2,0x10,auStack_2e0,8);
    *in_stack_00000064 = iVar2;
    *in_stack_0000006c = 0;
  }
  else {
    fn_82E9AC18(param_1,param_2,0x10,auStack_2e0,8,8,8,param_4);
    if (*in_stack_00000054 != 0) {
      iStack_2fc = iStack_2fc + 1;
    }
    *in_stack_00000064 = *(int *)(param_4 + 0x6c) * iStack_2fc + iStack_2f8;
    *in_stack_0000006c = 0;
  }
  return;
}

