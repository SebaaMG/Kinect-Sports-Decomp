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
extern char cRam8323e41a;
extern int fn_82DE1D50();
extern int fn_830B1CB0();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82DE2908(undefined4 *param_1,int param_2,float *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  char acStack_80 [8];
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((cRam8323e41a != '\0') || (fn_830B1CB0(0xffffffff8323e41a), cRam8323e41a != '\0')) {
    param_1[0x11] = param_4;
    param_1[0xc] = param_2;
    *param_1 = 0;
    fVar1 = *(float *)(param_2 + 0x1c);
    fVar2 = *(float *)(param_2 + 0x10);
    param_1[8] = (int)((*param_3 - fVar2) * fVar1) + -1;
    param_1[4] = (int)((param_3[4] - fVar2) * fVar1) + 1;
    fVar2 = *(float *)(param_2 + 0x14);
    param_1[9] = (int)((param_3[1] - fVar2) * fVar1) + -1;
    iStack_70 = *(short *)(param_1 + 4) + 1;
    param_1[5] = (int)((param_3[5] - fVar2) * fVar1) + 1;
    fVar2 = *(float *)(param_2 + 0x18);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    iStack_60 = (int)*(short *)(param_1 + 8);
    iStack_5c = (int)*(short *)(param_1 + 9);
    param_1[10] = (int)((param_3[2] - fVar2) * fVar1) + -1;
    iStack_6c = *(short *)(param_1 + 5) + 1;
    iStack_58 = (int)*(short *)(param_1 + 10);
    iVar4 = (int)((param_3[6] - fVar2) * fVar1);
    lStack_78 = (longlong)iVar4;
    iVar4 = iVar4 + 1;
    param_1[6] = iVar4;
    iStack_68 = (iVar4 >> 0x10) + 1;
    pcVar3 = *(char **)(param_2 + 0x20);
    param_1[0x12] = -(uint)(*pcVar3 == '\r');
    fn_82DE1D50(acStack_80,param_1,&iStack_70,pcVar3,0);
    if (acStack_80[0] != '\0') {
      (**(code **)(*param_4 + 8))
                (param_4,-((ulonglong)**(byte **)(param_1[0xc] + 0x20) == 0xd) & 5,
                 (ulonglong)**(byte **)(param_1[0xc] + 0x20) - 0xe);
    }
  }
  return;
}

