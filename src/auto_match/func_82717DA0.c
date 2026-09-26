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
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_8268D008();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


int * fn_82717DA0(int *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if ((cVar2 != '\0') && (param_4 != param_1)) {
    iStack_70 = param_1[0x11];
    iStack_6c = param_1[0x12];
    iStack_68 = param_1[0x13];
    iStack_64 = param_1[0x14];
    iStack_60 = param_1[0x15];
    iStack_5c = param_1[0x16];
    fn_8268D008(&iStack_70,auStack_80,param_2);
    iVar3 = param_1[0x27];
    uVar6 = 0;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar3 = *(int *)(iVar3 + 0x18) + iVar5;
        if ((((*(int *)(iVar3 + 0x3c) != 0x40000) && ((*(byte *)(iVar3 + 0x48) & 1) != 0)) &&
            (uVar6 < (uint)param_1[0x2a])) &&
           (piVar1 = *(int **)(param_1[0x29] + iVar4), piVar1 != (int *)0x0)) {
          iStack_50 = piVar1[0x11];
          iStack_4c = piVar1[0x12];
          iStack_48 = piVar1[0x13];
          iStack_44 = piVar1[0x14];
          iStack_40 = piVar1[0x15];
          iStack_3c = piVar1[0x16];
          fn_8268D008(&iStack_50,auStack_78,auStack_80);
          cVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,auStack_78,1);
          if (cVar2 != '\0') {
            return param_1;
          }
        }
        iVar3 = param_1[0x27];
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x4c;
        iVar4 = iVar4 + 4;
      } while (uVar6 < *(uint *)(iVar3 + 0x1c));
    }
  }
  return (int *)0x0;
}

