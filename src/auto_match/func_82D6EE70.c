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
extern unsigned int iStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D6EE70(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int *piStack_34;
  
  iStack_38 = param_3[2];
  iVar1 = *param_3;
  uStack_40 = *(undefined4 *)(iVar1 + 0x10);
  uStack_3c = 0xffffffff;
  piStack_34 = param_3;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(*(int **)(param_1 + 0xc),&uStack_40);
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_40 = *(undefined4 *)(iVar1 + 0x18);
    uStack_3c = 0;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x20))
              (*(int **)(param_1 + 0x10),&uStack_40,param_2,param_4,param_5);
  }
  return;
}

