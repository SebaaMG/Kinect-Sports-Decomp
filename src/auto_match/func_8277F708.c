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
extern unsigned int fStack_40;
extern int fn_8277E848();
extern int fn_8277E8B8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8277F708(double param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iStack_50;
  int iStack_4c;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (((param_3 != 0) && (iVar1 = *(int *)(param_3 + 4), iVar1 != 0)) &&
     (*(char *)(*(int *)(iVar1 + 0x10) + *(int *)(param_2 + 0x24)) != '\0')) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      uStack_38 = *(undefined4 *)(param_3 + 8);
      uStack_30 = *(undefined4 *)(param_2 + 0x144);
      fStack_40 = (float)param_1;
      uStack_34 = 0xffffffff;
      uStack_2c = 0;
      uStack_3c = *(undefined4 *)(*param_4 + 0x1c);
      uStack_28 = 0xffffffff;
      fn_8277E848(param_2 + 0x134,&fStack_40);
      uVar2 = *(int *)(param_2 + 0x134) - 1;
      *(uint *)(iVar1 + 0x14) =
           *(int *)((uVar2 >> 2 & 0x3ffffffc) + *(int *)(param_2 + 0x140)) + (uVar2 & 0xf) * 0x1c;
    }
    iStack_50 = param_4[2];
    iStack_4c = param_4[1];
    fn_8277E8B8(param_2 + 0x144,&iStack_50);
    *(int *)(*(int *)(iVar1 + 0x14) + 0x14) = *(int *)(*(int *)(iVar1 + 0x14) + 0x14) + 1;
  }
  return;
}

