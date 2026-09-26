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
extern unsigned int fStack_48;
extern int fn_83050008();
extern unsigned int uStack_34;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_83054FF0(double param_1,int param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 auStack_50 [2];
  float fStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  iVar3 = fn_83050008(param_3);
  iVar1 = *param_3;
  if (iVar3 == 1) {
    cVar4 = (**(code **)(iVar1 + 0x18))(param_3,auStack_50,&uStack_40,auStack_38);
    if (cVar4 == '\0') {
      uVar7 = 0x35;
      uStack_40 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      fStack_48 = (float)param_1;
      uStack_34 = 0;
      *(undefined8 *)(param_2 + 0x98) = uStack_40;
      uStack_44 = *(undefined1 *)(param_3 + 0x1c);
      iVar1 = **(int **)(param_2 + 0x80);
      if (((uint)param_3[0x1d] >> 0x1d & 1) == 0) {
        pcVar2 = *(code **)(iVar1 + 0x10);
      }
      else {
        pcVar2 = *(code **)(iVar1 + 0x14);
      }
      uVar7 = (*pcVar2)(*(int **)(param_2 + 0x80),auStack_50[0],&fStack_48,param_4,&uStack_40);
      uVar5 = 1;
      uVar6 = uStack_34;
    }
    iVar1 = *param_3;
  }
  else {
    uVar7 = 2;
    uVar6 = 0;
    uStack_40 = 0;
    uVar5 = 0;
  }
  (**(code **)(iVar1 + 0x1c))(param_3,uVar5,uStack_40,param_4,uVar6,uVar7);
  return;
}

