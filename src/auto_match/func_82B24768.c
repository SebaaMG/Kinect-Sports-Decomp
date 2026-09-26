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
extern int fn_82B16ED0();
extern int fn_82B4B410();
extern int fn_82B82D28();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82B24768(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [14];
  
  fn_82B82D28(param_3,param_4,&uStack_40,&uStack_3c,auStack_38,0,param_5,0);
  uVar3 = uStack_3c;
  uVar5 = uStack_40;
  if ((param_2[1] & 1) == 0) {
    uVar2 = *param_2 & 0xfffffffe;
    iVar4 = uVar2 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(uint *)(uVar2 + 8))) goto LAB_82b247e8;
  }
  iVar4 = fn_82B4B410(param_2,1);
LAB_82b247e8:
  iVar1 = *(int *)(iVar4 + 8) * 0xc + iVar4;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  *(undefined4 *)(iVar1 + 0x18) = auStack_38[0];
  uVar5 = fn_82B16ED0(uStack_40,uStack_3c);
  *param_6 = uVar5;
  return;
}

