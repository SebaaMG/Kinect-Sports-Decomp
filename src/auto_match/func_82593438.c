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
extern unsigned int *auStack_60;
extern int fn_8255AA78();
extern int fn_82574438();
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82593438(int param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (*(int *)(param_1 + 0x8c0) != 0) {
      uVar3 = *(undefined4 *)
               ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0));
      goto code_r0x82593484;
    }
  }
  uVar3 = 0;
code_r0x82593484:
  fn_82574438(param_2,param_1 + 0xf0,uVar3,&uStack_50);
  puVar2 = (undefined4 *)
           fn_8255AA78(auStack_60,uStack_50,uStack_48,uStack_40,uStack_38,uStack_30,uStack_28,
                             uStack_20);
  uVar3 = puVar2[1];
  uVar1 = puVar2[2];
  *param_3 = *puVar2;
  param_3[1] = uVar3;
  param_3[2] = uVar1;
  return;
}

