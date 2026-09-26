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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82D890C8();
extern int fn_830A21E8();
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int uStack_2c;


void fn_82D985C0(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  short *psStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)((uint)*(ushort *)(param_1 + 0x1c) + *(int *)(param_2 + 0x4c));
  if (*pcVar3 == '\0') {
    iVar1 = *(int *)(param_2 + 0x30);
    iVar2 = *(int *)(param_2 + 0x34);
    *(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(pcVar3 + 0xc) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(pcVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(pcVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(pcVar3 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(pcVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(pcVar3 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(pcVar3 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(pcVar3 + 0x28) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(pcVar3 + 0x2c) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(pcVar3 + 0x30) = *(undefined4 *)(iVar2 + 0x28);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18),auStack_40);
    if (*psStack_30 == 0x16) {
      fn_830A4688(psStack_30,param_2,1);
    }
    else {
      fn_830A2398(psStack_30,uStack_2c,param_2,param_3);
    }
  }
  else {
    fn_830A21E8(param_2,param_3,0,8);
    if (*(char *)(param_1 + 0x24) != '\0') {
      fn_82D890C8(auStack_50,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x48) + 0x14) + 8),
                        *(int *)(param_2 + 0x48));
    }
  }
  return;
}

