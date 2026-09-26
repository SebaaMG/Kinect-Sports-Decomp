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
extern unsigned int *auStack_38;
extern unsigned int *auStack_50;
extern int fn_8309FA20();
extern int fn_830A6D10();
extern unsigned int lbl_82002C5C;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D9E450(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  uStack_34 = lbl_82002C5C;
  iVar2 = *(int *)(iVar1 + 4);
  *param_2 = iVar1 + 8;
  fn_830A6D10((iVar2 + 5) * 0x10 + param_5,(iVar2 + 8) * 0x10 + param_5,
                    (*(int *)(iVar1 + 8) + 5) * 0x10 + param_5,
                    (*(int *)(iVar1 + 8) + 8) * 0x10 + param_5,auStack_50,auStack_38);
  puVar3 = (undefined4 *)*param_3;
  *param_3 = puVar3 + 4;
  uStack_40 = *puVar3;
  uStack_3c = puVar3[1];
  fn_8309FA20(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

