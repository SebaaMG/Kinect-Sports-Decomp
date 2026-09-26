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
extern unsigned int *auStack_80;
extern int fn_82CE6768();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82D6B930(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  int *piStack_84;
  undefined1 auStack_80 [128];
  
  iVar1 = *param_3;
  fn_82CE6768(auStack_80,param_3[2],iVar1 + 0x30);
  puStack_88 = auStack_80;
  uStack_90 = *(undefined4 *)(iVar1 + 0x14);
  uStack_8c = 0;
  piStack_84 = param_3;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x20))
            (*(int **)(param_1 + 0xc),&uStack_90,param_2,param_4,param_5);
  return;
}

